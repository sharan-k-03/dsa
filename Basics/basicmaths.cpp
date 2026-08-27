#include <bits/stdc++.h>
using namespace std;

void separation(int N)
{
    int n = N, digit;
    while (n > 0)
    {
        digit = n % 10;
        cout << digit << " ";
        n /= 10;
    }
}
void Reversno(int N)
{
    int n = N, revers = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        revers = (revers * 10) + lastdigit;
        n /= 10;
    }
    cout << revers;
}
void pallidrom(int N)
{

    int n = N, revers = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        n /= 10;
        revers = (revers * 10) + lastdigit;
    }
    if (revers == N)
    {
        cout << "yes";
    }

    else
    {
        cout << "no";
    }
}
bool Amstrong_NO(int N)
{
    int n = N, sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += (lastdigit * lastdigit * lastdigit);
        n /= 10;
    }
    if (N == sum)
    {
        return true;
    }
    return false;
}
void All_divisions(int N)
{
    // it's only random printing divisions
    // int n = N;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i<<" ";
    //     }

    // }

    // in sorted order and less tc
    int n = N;
    vector<int> ls;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
    {
        cout << it << " ";
    }
}
void primecheck(int N){
    int n = N, cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if ((n/i)!=i)
            {
                cnt++;
            }
        }
    }
    if (cnt == 2)
        cout << "yes";

    else
    {
        cout << "no";
    }
}
void GCF_HCF(int N1, int N2)
{
    // high tc
    int gch;
    for (int i = 1; i <= min(N1, N2); i++)
    {
        if (N1 % i == 0 && N2 % i == 0)
        {
            gch == i;
            
        }
    }
    cout << gch;
}

int main()
{
    int m;
    cout<<"enter m ";
    cin >> m ;
    primecheck(m);

    return 0;
}