/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 21:01:05 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/07 21:17:18 by kkamashi         ###   ########.fr       */
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
    string num;
    cin >> num;

    int A = num[0] - '0';
    int B = num[1] - '0';
    int C = num[2] - '0';
    int D = num[3] - '0';

    vector<char> op{'+', '-'};
    int sum;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                sum = 0;
                if (op[i] == '+')
                {
                    sum += A + B;
                }
                else
                {
                    sum += A - B;
                }

                if (op[j] == '+')
                {
                    sum += C;
                }
                else
                {
                    sum -= C;
                }

                if (op[k] == '+')
                {
                    sum += D;
                }
                else
                {
                    sum -= D;
                }

                if (sum == 7)
                {
                    printf("%d%c%d%c%d%c%d=7\n", A, op[i], B, op[j], C, op[k], D);
                    return (0);
                }
            }
        }
    }
    return (0);
}