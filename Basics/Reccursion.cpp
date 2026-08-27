#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void reccursion_1()
{
    if (cnt == 4)
    {
        return;
    }
    cout << "hello" << " ";
    cnt++;
    reccursion_1();
}
void printntimes(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "sharan" << " ";
    printntimes(i + 1, n);
}
void printntoone(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << " ";
    printntoone(i - 1, n);
}
void printoneton(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    printoneton(i + 1, n);
}
void printbackoneton(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    printbackoneton(i - 1, n);
    cout << i << " ";
}
void backntoone(int i, int n)
{
    if (i > n)
    {
        return;
    }
    backntoone(i + 1, n);
    cout << i << " ";
}
void withparasumreccursion(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << " ";
        return;
    }
    withparasumreccursion(i - 1, sum + i);
}
int withfunctionsum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + withfunctionsum(n - 1);
}

int functionfact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * functionfact(n - 1);
}
int main()
{
    cout << functionfact(5);
    return 0;
}
