
// print from 1 to N using backtracking


#include<iostream>
using namespace std;

void print(int i, int n){
  

   if (i<1) return;
    print(i-1, n);
    cout<<i<<endl;
   
   }
   


int main()
{
  int n;
  cout<<"Enter the value of n: "<<endl;
  cin>>n;
 print(n,n);
 return 0;

}