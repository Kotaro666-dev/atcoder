/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 14:57:04 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/14 22:10:38 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

bool isPrime(int n, int i = 2)
{
    // Base cases
    if (n <= 2)
        return (n == 2) ? true : false;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;

    // Check for next divisor
    return isPrime(n, i + 1);
}

int main(void)
{
    int N;
    cin >> N;

    int num;
    set<int> st;
    // int mx = -1;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        st.insert(num);
    }

    // find prime number
    int ans = 0;
    for (auto itr = st.begin(); itr != st.end(); itr++)
    {
        if (isPrime(*itr))
        {
            ans++;
            st.erase(itr);
        }
    }

    for (auto itr = st.begin(); itr != st.end(); itr++)
    {
        cout << *itr << endl;
    }
    cout << ans << endl;
    return (0);
}

// int main(void)
// {
//     int N;
//     cin >> N;

//     vector<int> A(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//     }
//     sort(A.begin(), A.end());
//     int ans = 0;
//     for (int i = N - 1; i >= 0; i--)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             // printf("%d / %d\n", A[i], A[j]);
//             if (A[i] % A[j] == 0)
//             {
//                 break;
//             }

//             if (j == i - 1)
//             {
//                 // printf("%d\n", A[i]);
//                 ans++;
//             }
//         }
//     }

//     if (ans != 0)
//     {
//         ans++;
//     }
//     cout << ans << endl;
//     return (0);
// }