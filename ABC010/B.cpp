/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 18:01:55 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/15 18:16:06 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

// 好き、嫌い、好き、嫌い: 2, 4, 6 ..... 2の倍数
// 好き、嫌い、大好き、好き、嫌い、大好き　2, 5, 8, 11, 14　3n - 1
// a = 3n -1

// n, n + 3, n + 3

int main(void)
{
    int n;
    cin >> n;

    // vector<int> A(n);
    int a;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // cin >> A[i];
        cin >> a;
        while (true)
        {
            if (a % 2 == 0)
            {
                a--;
                sum++;
            }
            else if (a % 2 == 1 && (a + 1) % 3 == 0)
            {
                a--;
                sum++;
            }
            else
            {
                break;
            }
        }
    }
    cout << sum << endl;
    return (0);
}