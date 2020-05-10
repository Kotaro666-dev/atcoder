/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:48:47 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/10 21:45:00 by kkamashi         ###   ########.fr       */
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
    ll N, K;
    cin >> N >> K;

    vector<int> A(N);
    vector<int> record(10);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int dest = 1;
    int temp;
    int length;
    int counter = 0;
    for (ll i = 0; i < K; i++)
    {
        temp = dest - 1;
        dest = A[temp];
        record[i] = dest;
        counter++;
        for (int j = 0; j < record.size(); j++)
        {
            if (record[j] == record[record.size() - 1])
            {
                length = record.size() - j - 1;
                break;
            }
        }
    }
    printf("%d\n", length);
    // cout << dest << endl;
    return (0);
}