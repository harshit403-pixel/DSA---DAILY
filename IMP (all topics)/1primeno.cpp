#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    cout << "enter the no you wanna check : ";
    cin >> n;

    bool isPrime = true;
    for(int i = 2; i<n ; i++)            // 2 se n1-1 karo ya 2 se root(n) same hi baat hai
    // for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "no. is prime" << endl;
    }
    else
    {
        cout << "no. is composite" << endl;
    }
    return 0;
}


// //PRIME 2 to N :
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n :";
//     cin >> n; // 2 to rootn

//     for (int i = 2; i <= n; i++)
//     {
//         int curr = i;
//         bool isPrime = true;
//         for (int j = 2; j < i ; j++)
//         {
//             if (curr % j == 0)
//             {
//                 isPrime = false;
//             }
//         }
//         if (isPrime == true)
//         {
//             cout << curr <<" ";
//         }
//     }

//     return 0;
// }
