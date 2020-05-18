/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 09:41:31 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/18 09:48:09 by kkamashi         ###   ########.fr       */
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
    string A;
    cin >> A;

    if (A.size() == 1)
    {
        if (A == "a")
        {
            printf("-1\n");
        }
        else
        {
            char temp;
            temp = A[0];
            temp--;
            cout << temp << endl;
        }
    }
    else
    {
        for (int i = 0; i < A.size() - 1; i++)
        {
            cout << A[i];
        }
        cout << endl;
    }
    return (0);
}