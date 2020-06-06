/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 23:35:49 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/06 12:16:26 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// REFERENCE : https://drken1215.hatenablog.com/entry/2019/09/16/201500
// A0=B0
// A1=min(B0,B1)
// A2=min(B1,B2)
// ...
// AN−2=min(BN−3,BN−2)
// AN−1=BN−2

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

    vector<int> B(N - 1);
    for (int i = 0; i < N - 1; i++)
    {
        cin >> B[i];
    }

    deque<int> A;
    A.push_back(B[0]);

    for (int i = 0; i < B.size() - 1; i++)
    {
        A.push_back(min(B[i], B[i + 1]));
    }
    A.push_back(B.back());

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        // cout << A[i] << " ";
        ans += A[i];
    }
    cout << ans << endl;
    return (0);
}