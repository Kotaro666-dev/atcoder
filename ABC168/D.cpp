/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 12:18:13 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/17 21:53:52 by kkamashi         ###   ########.fr       */
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
    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    vector<int> B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i];
    }
    vector<int> ans(N);
    int counter;
    int min_counter = 0;
    string ans;
    while (N > 0)
    {

        N--;
    }

    cout << ans << endl;

    return (0);
}