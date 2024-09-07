#include <iostream>
using namespace std;

int NumberToBinary(int num)
{
    cout << "Number in binary: ";
    while (num/2 != 0)
    {
        cout << num%2;
        num = num/2;
    }
    cout << num%2 << endl;
return 0;
}

double NumberToBinary(double num)
{
    NumberToBinary((int)num);
    return 0;
}


int main()
{
    double num;
    cout << "Entered number: ";
    cin >> num;
    NumberToBinary((int)num);

    return 0;
}
