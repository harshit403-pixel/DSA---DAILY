#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n :";
    cin >> n;
    int num = n; //bcz agar n hi rehta toh niiche value change horhi hai that means n change hojata ab num chaneg hoga not n
    int lastDgt;
    int cubesum = 0;

    for (num; num > 0; num /= 10)
    {
        lastDgt = num % 10;
        cubesum += lastDgt * lastDgt * lastDgt;
        cout << cubesum << endl;
    }
    if (cubesum == n)
    {
        cout << "it is armstrong number" << endl;
    }
    else
    {
        cout << "it is not a armstrong no." << endl;
    }

    return 0;
}