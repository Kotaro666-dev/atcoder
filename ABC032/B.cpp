/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 11:21:44 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/01 12:01:43 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int factorial(int num)
{
    int sum = 1;
    for (int i = 1; i <= num; i++)
    {
        sum *= i;
    }
    return sum;
}

int main(void)
{
    string S;
    cin >> S;
    int K;
    cin >> K;

    if (S.size() < K)
    {
        printf("0\n");
        return (0);
    }

    set<string> st;
    for (int i = 0; i < S.size() - K + 1; i++)
    {
        string temp = S.substr(i, K);
        st.insert(temp);
    }
    cout << st.size() << endl;
    return (0);
}