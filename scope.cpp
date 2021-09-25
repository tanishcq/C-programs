#include<iostream> 
using namespace std;
   
int x = 20;
   
int main()
{
  int x = 10; // Local x
  cout << "Value of global x is " << ::x << endl;
  cout << "Value of local x is " << x;  
  return 0;
}