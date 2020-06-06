/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 07:17:35 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/07 07:46:10 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// REFERENCE: https://drken1215.hatenablog.com/entry/2018/07/21/224100

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int N;
    cin >> N;

    int m = 0;
    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        m += num;
    }
    cout << m - N << endl;
}

// bool isPrime(int n, int i = 2)
// {
//     // Base cases
//     if (n <= 2)
//         return (n == 2) ? true : false;
//     if (n % i == 0)
//         return false;
//     if (i * i > n)
//         return true;

//     // Check for next divisor
//     return isPrime(n, i + 1);
// }

// int main(void)
// {
//     int N;
//     cin >> N;

//     vector<int> a(N);
//     int maximum = -1;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//         maximum = max(maximum, a[i]);
//     }

//     // X mod Y
//     // Xが素数のときに余りが最大になるかも？
//     deque<int> prime_num;
//     for (int i = maximum * 1000; i <= 10000000; i++)
//     {
//         if (isPrime(i))
//         {
//             prime_num.push_back(i);
//         }
//     }
//     // int length = prime_num.size();
//     // printf("%d\n", length);

//     int x, y;
//     int sum;
//     int mx = -1;
//     for (int i = 0; i < prime_num.size(); i++)
//     {
//         x = prime_num[i];
//         sum = 0;
//         for (int j = 0; j < a.size(); j++)
//         {
//             y = a[j];
//             sum += (x % y);
//         }
//         mx = max(mx, sum);
//     }
//     cout << mx << endl;
//     return (0);
// }