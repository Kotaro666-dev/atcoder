/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 16:52:11 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/04 17:23:34 by kkamashi         ###   ########.fr       */
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

    vector<int> height(N);
    for (int i = 0; i < N; i++)
    {
        cin >> height[i];
    }

    vector<bool> isChecked(N, false);
    vector<bool> isGood(N, true);

    vector<int> A(M);
    vector<int> B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i];
        A[i]--;
        B[i]--;
        isChecked[A[i]] = true;
        isChecked[B[i]] = true;
    }

    for (int i = 0; i < M; i++)
    {
        if (height[A[i]] < height[B[i]])
        {
            isGood[A[i]] = false;
        }
        if (height[A[i]] > height[B[i]])
        {
            isGood[B[i]] = false;
        }
        if (height[A[i]] == height[B[i]])
        {
            isGood[A[i]] = false;
            isGood[B[i]] = false;
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if ((isChecked[i] == false && isGood[i] == true) ||
            (isChecked[i] == true && isGood[i] == true))
        {
            ans++;
        }
    }

    cout << ans << endl;
    return (0);
}