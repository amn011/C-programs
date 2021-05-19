#include <iostream>

using namespace std;



int main()
{
     int n;
     string a[10]=  {"greater than 9 ", "one" , "two", "three", "four", "five", "six","seven", "eight", "nine" };

     cin>>n;
     if (n>9){
         cout<< a[0];
         }
         else{
             cout<<a[n];
         }
    return 0;
}
