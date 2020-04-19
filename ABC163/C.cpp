/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 16:20:15 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/19 21:15:39 by kkamashi         ###   ########.fr       */
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

    vector<int> A(N - 1);
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }
    vector<int> ans(N, 0);
    for (int i = 0; i < N - 1; i++)
    {
        ans[A[i] - 1]++;
    }

    for (int i = 0; i < N; i++)
    {
        cout << ans[i] << endl;
    }

    return (0);
}