#include <iostream>
#include <string>

using namespace std;

string add(string num1, string num2) {
    string result = "";
    int carry = 0;
    
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    
    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;
        
        int sum = digit1 + digit2 + carry;
        result = to_string(sum % 10) + result;
        carry = sum / 10;
    }
    
    return result;
}

string multiply(string num1, string num2) {
    string result = "0";
    
    for (int i = num1.length() - 1; i >= 0; i--) {
        string temp = "";
        int carry = 0;
        
        for (int j = num2.length() - 1; j >= 0; j--) {
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';
            int product = (digit1 * digit2) + carry;
            temp = to_string(product % 10) + temp;
            carry = product / 10;
        }
        
        if (carry > 0) {
            temp = to_string(carry) + temp;
        }
        
        temp += string(num1.length() - i - 1, '0'); // Append appropriate number of zeros
        
        result = add(result, temp);
    }
    
    // Remove leading zeros
    int index = 0;
    while (index < result.length() - 1 && result[index] == '0') {
        index++;
    }
    return result.substr(index);
}

int main() {
    string num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    string result = multiply(num1, num2);
    cout << "Multiplication result: " << result << endl;
    
    return 0;
}
