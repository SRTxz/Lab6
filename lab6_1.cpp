#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int even = 0, odd = 0;
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        cout << "Enter an integer: ";
        cin >> n;
    }
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}