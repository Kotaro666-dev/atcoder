/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 10:22:51 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/07 10:54:33 by kkamashi         ###   ########.fr       */
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
    std::cout << std::fixed << std::setprecision(10);
    int N;
    cin >> N;

    vector<int> x(N);
    vector<int> y(N);
    for (int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i];
    }

    vector<int> pattern(N);
    for (int i = 0; i < N; i++)
    {
        pattern[i] = i;
    }

    double sum = 0;
    int counter = 0;
    do
    {
        for (int i = 0; i < N - 1; i++)
        {
            sum += sqrt(pow((x[pattern[i]] - x[pattern[i + 1]]), 2) + pow((y[pattern[i]] - y[pattern[i + 1]]), 2));
            // printf("sum = %d\n", sum);
        }
        counter++;
    } while (next_permutation(pattern.begin(), pattern.end()));

    double ans = sum / counter;
    cout << ans << endl;
    return (0);
}