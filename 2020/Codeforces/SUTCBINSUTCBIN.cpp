/*

Author : 5hifaT

Github        : https://github.com/jspw

Gists         : https://gist.github.com/jspw

linkedin      : https://www.linkedin.com/in/mehedi-hasan-shifat-2b10a4172/

Stackoverflow : https://stackoverflow.com/story/jspw 

Dev community : https://dev.to/mhshifat

*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdlib>
#include <bitset>
#include <set>
#include <map>
#include <iterator>

using namespace std;
#define ll long long
#define ull unsigned long long

//Sort array in discending order (n to 1)
bool decSort(ll a, ll b)
{
    return a > b;
}

//find the maximum element of a array
ll max_of_array(ll a[], ll n)
{
    ll mx = a[0];
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > mx)
            mx = a[i];
    }
    return mx;
}

//find the minimum element of a array
ll min_of_array(ll a[], ll n)
{
    ll mn = a[0];
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < mn)
            mn = a[i];
    }
    return mn;
}

bool isPrime(ll n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            m.insert({a[i], 1});
        }
        else
        {
            if (m.count(a[i]))
            {

                m[a[i]]++;
            }
            else
                m.insert({a[i], a[i] + 1});
        }
    }

    // for (auto itr = m.begin(); itr != m.end(); ++itr) {
    //     cout << itr->first
    //          << '\t' << itr->second << '\n';
    // }
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (m.count(a[i]))
        {
            s.insert(m[a[i]]);
            cout<<m[a[i]]<<" ";
        }
    }

    // for (auto itr = s.begin(); itr != s.end(); ++itr)
    // {
    //     cout << *itr << " ";
    // }

    cout << endl;

    return 0;
}