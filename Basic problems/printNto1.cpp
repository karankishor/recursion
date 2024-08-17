
// print from  N to 1 using recursion


#include<iostream>
using namespace std;

void print(int i, int n){
  

   if (i<1) return;
    cout<<i<<endl;
    print(i-1, n);// don't use i-- (becoz it will stuck in infinite loop)
   }
   

int main()
{
  int n;
  cout<<"Enter the value of n: "<<endl;
  cin>>n;
 print(n,n);
 return 0;

}