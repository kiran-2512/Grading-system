#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your Marks to check the grades:";
    cin >> num;
    if (num < 0 || num > 100)
    {
        cout << "Invalid! Please enter correct";
    }
    else if (num < 36)
    {
        cout << "Fail";
    }
    else if (num > 36 && num < 60)
    {
        cout << "You got \n Grade:D";
    }
    else if (num >= 60 && num < 70)
    {
        cout << "You got \n Grade:C";
    }
    else if (num >= 70 && num < 80)
    {
        cout << "You got \n Grade:B";
    }
    else if (num >= 80 && num < 90)
    {
        cout << "You got\n Grade:A";
    }
    else if (num >= 90 && num < 100)
    {
        cout << "You got\n Grade:S";
    }
}