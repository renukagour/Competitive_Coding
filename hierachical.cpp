#include <iostream>
using namespace std;
class book
{
public:
    string title, author;
    int year;

    book(string t, string a, int y) : title(t), author(a), year(y) {}
    void display()
    {
        cout << title << " " << author << " " << year << endl;
    }
};

class fiction : public book
{
public:
    string gener;
    fiction(string t, string a, int y, string g) : book(t, a, y), gener(g) {}
    void display_f()
    {
        display();
        cout << gener << " " << endl;
    }
};

class n_fiction : public book
{
public:
    string subject;
    n_fiction(string t, string a, int y, string s) : book(t, a, y), subject(s) {}
    void display_n()
    {
        display();
        cout << subject << " " << endl;
    }
};

class refer_book : public n_fiction
{
public:
    string edition;
    int ISBN;
    refer_book(string t, string a, int y, string s, string e, int i) : n_fiction(t, a, y, s), edition(e), ISBN(i) {}

    void display_r()
    {
        display_n();
        cout << edition << " " << ISBN << endl;
    }
};

int main()
{
    fiction f1("ABC", "XYZ", 2020, "hhuh");
    n_fiction f2("LOLL", "POP", 2021, "Maths");
    refer_book f3("RBB", "KKK", 2323, "LOL", "kki", 2525);
    f1.display_f();
    f2.display_n();
    f3.display_r();
}