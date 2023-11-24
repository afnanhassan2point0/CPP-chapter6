#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, p, r;
    float s = 0;
    cout << "Enter value of variable x : ";
    cin >> x;
    cout << "Enter range : ";
    cin >> r;
    for (p = 0; p < r; p++)
    {
        s = s + (1 / pow(x, p));
    }
    cout << "Answer : " << s << endl;
}