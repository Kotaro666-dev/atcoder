/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 12:18:23 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/17 21:06:28 by kkamashi         ###   ########.fr       */
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
    int K;
    cin >> K;
    string S;
    cin >> S;

    int length = S.size();
    if (length <= K)
    {
        cout << S << endl;
        return (0);
    }
    else
    {
        for (int i = 0; i < K; i++)
        {
            cout << S[i];
        }
        cout << "..." << endl;
    }
    return (0);
}