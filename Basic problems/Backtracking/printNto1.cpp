
// print from N to 1 using backtracking


#include<iostream>
using namespace std;

void print(int i, int n){
  

   if (i>n) return;
    print(i+1, n);
    cout<<i<<endl;
   
   }
   


int main()
{
  int n;
  cout<<"Enter the value of n: "<<endl;
  cin>>n;
 print(1,n);
 return 0;

}