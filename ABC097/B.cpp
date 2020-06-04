/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 19:16:06 by kotaro666         #+#    #+#             */
/*   Updated: 2020/06/04 11:01:46 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int x;
    cin >> x;

    vector<bool> expo(x + 1);
    expo[1] = true;

    for (int i = 2; i <= x; i++)
    {
        int v = i * i;
        while (v <= x)
        {
            expo[v] = 1;
            v *= i;
        }
    }

    for (int i = x; i >= 1; i--)
    {
        if (expo[i])
        {
            cout << i << endl;
            return (0);
        }
    }
}

// int main(void)
// {
//     int X;
//     cin >> X;

//     int num = sqrt(X);
//     int ans = num * num;
//     cout << ans << endl;
//     return (0);
// }

// #include <bits/stdc++.h>
// #define PI 3.1415926535897
// using namespace std;
// typedef long long ll;

// int main(void)
// {
//     int X;
//     cin >> X;

//     int ans = 1;
//     int result;
//     for (int i = 1; i < X; i++)
//     {
//         for (int j = 2; j <= X; j++)
//         {
//             result = j;
//             for (int k = 0; k < 100; k++)
//             {
//                 result *= j;
//                 if (result == i)
//                 {
//                     ans = i;
//                     break;
//                 }
//                 if (result > X)
//                 {
//                     break;
//                 }
//             }
//         }
//     }
//     cout << ans << endl;
//     return (0);
// }