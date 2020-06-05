/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 18:44:08 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/05 19:03:25 by kkamashi         ###   ########.fr       */
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
    int N;
    cin >> N;

    int a;
    vector<int> ans(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        ans[a - 1] = i + 1;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d", ans[i]);
        if (i != N - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
    return (0);
}