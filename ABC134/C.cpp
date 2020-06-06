/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 13:07:29 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/06 13:11:11 by kkamashi         ###   ########.fr       */
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

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    vector<int> sorted(N);
    sorted = A;
    sort(sorted.begin(), sorted.end(), greater<int>());

    for (int i = 0; i < N; i++)
    {
        if (A[i] != sorted[0])
        {
            cout << sorted[0] << endl;
        }
        else
        {
            cout << sorted[1] << endl;
        }
    }
    return (0);
}