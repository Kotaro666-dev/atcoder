/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 11:51:39 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/26 12:22:48 by kkamashi         ###   ########.fr       */
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
    string S;
    cin >> S;

    vector<char> letter(1000);
    vector<int> often(1000);
    int x = 0;
    int counter;
    for (int i = 0; i < S.size(); i++)
    {
        counter = 0;
        for (int j = i + 1; j < S.size(); j++)
        {
            // printf("i = %d, j = %d\n", i, j);
            if (S[i] == S[j])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        cout << S[i] << counter + 1;
        i += counter;
    }

    cout << endl;
    return (0);
}