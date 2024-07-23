/*You work in a toy car workshop, and your job is to build toy cars from a collection of parts.
Each toy car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside.
Given the total number of wheels, car bodies and figures available, how many complete toy cars can you make?


Examples
2, 48, 76 = 0
// 2 wheels, 48 car bodies, 76 figures


43, 15, 87 = 10


88, 37, 17 = 8
*/

//Logic 2

#include<iostream>

using namespace std;

int main()
{
    int W, B, F, cars;
    cin >> W >> B >> F;

    W = W/4;
    B = B/1;
    F = f/2;

    cars = W<B?(W<F?W:F):(B<F?B:F);  // smallest of three numbers

    cout << cars << endl;
}
