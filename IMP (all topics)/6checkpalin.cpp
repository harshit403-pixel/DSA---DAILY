#include<iostream>
using namespace std;

void isPalin(int n){
    
 int dig;
 int rev = 0 ; 
 for (int num = n ; num>0 ; num /= 10){
     dig = num%10;
     rev  = rev*10+ dig;


 }
 cout<<rev<<" == "<< n <<" so "<<endl ;
  if(n == rev){
    cout<<"it is a plaindrome\n";

 }
 else cout<<"it is not an palindrome\n ";
}

int main() {

isPalin(1243);
 return 0;
 }

