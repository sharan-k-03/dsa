#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void pattern2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void pattern3(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void pattern4(int n)
{

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
}
void pattern5(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void pattern6(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void pattern7(int n)
{
  for (int i = 0; i < n; i++)
  {
    // for loop - space
    for (int j = 0; j < (n - i - 1); j++)
    {
      cout << " ";
    }

    // for loop - star
    for (int j = 0; j < (2 * i + 1); j++)
    {
      cout << "*";
    }

    // for loop - space
    for (int j = 0; j < (n - i - 1); j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void pattern8(int n)
{
  for (int i = 0; i < n; i++)
  {
    // for -space
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    // for -star
    for (int j = 0; j < 2 * n - (2 * i + 1); j++)
    {
      cout << "*";
    }
    // for -space
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void pattern9(int n)
{
  pattern7(n);
  pattern8(n);
}
void pattern10(int n)
{
  for(int i=1;i<=2*n;i++){
    int stare =i;
    if(i>n) stare = 2*n-i;
    for (int  j = 1; j <= stare; j++)
    {
      cout<<"* ";
    }
    cout<<endl;
    
    
  }
}
void pattern11(int n){
  int start =1;

  for (int  i = 0; i < n; i++)
  {
    if(i%2==0) start =1;
    else start =0;
    for (int j=0;j<=i;j++)
    {
       cout<<start;
       start=1-start;
    }
    cout<<endl;
    
  }
  
}
void pattern12(int n){
for (int  i = 0; i < n; i++)
{
  
  
}


}
int main()
{
  int t;
  cout << "Enter number of test cases: ";
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cout << "Enter row numbers: ";
    cin >> n;
    pattern12(n);
  }
  return 0;
}