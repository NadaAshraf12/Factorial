#include <iostream>
using namespace std;


int main()
{
    int x = 4;
    int fact = 1;
    for (int i = x; i>=1; i--)
    { 
        fact = fact + i;
    }
    cout << fact;
    return 0;
}