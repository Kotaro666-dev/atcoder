/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 22:16:39 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/04 22:38:13 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

int main(void)
{
    int K;
    cin >> K;

    if (K <= 12)
    {
        cout << K << endl;
        return 0;
    }

    int counter = 0;
    int num = 1;
    string str;
    bool lunlun = true;
    int a, b;
    int ans;
    while (counter < K - 1)
    {
        str = to_string(num);
        lunlun = true;
        for (int i = 0; i < str.size() - 1; i++)
        {
            a = str[i] - '0';
            b = str[i + 1] - '0';
            if (!(abs(a - b) <= 1))
            {
                lunlun = false;
                break;
            }
        }
        if (lunlun == true)
        {
            counter++;
            ans = num;
            // printf("%d ", ans);
        }
        num++;
    }
    // printf("\n");
    cout << num << endl;
    return (0);
}