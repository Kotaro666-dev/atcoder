/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 20:44:27 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/05 21:12:28 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Next_permutationで順列パターンのすべてを計算した
// ただし、価値が小さい順から鍋に入れて計算すれば、最大の価値を求めることできる。
// -> 昇順ソート-> 順番に最後まで足していく。-> 最大の価値

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

    vector<double> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    double mx = -1;
    double temp;
    do
    {
        for (int i = 0; i < N - 1; i++)
        {
            temp = (v[i] + v[i + 1]) / 2;
            v[i + 1] = temp;
            if (i == N - 2)
            {
                if (mx < v[N - 1])
                {
                    mx = v[N - 1];
                }
            }
        }
    } while (next_permutation(v.begin(), v.end()));

    double ans = mx;
    std::cout << std::fixed << std::setprecision(5);
    cout << ans << endl;
    return (0);
}