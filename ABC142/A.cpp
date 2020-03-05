/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:18:27 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/05 15:44:19 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    int counter = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 1)
        {
            counter++;
        }
    }

    // double pi = 3.1415926535898;

    // cout << fixed << setprecision(10) << pi << endl;
    // printf("%.10lf\n", pi);
    // // result = 3.1415926536

    double ans = (double)counter / (double)N;
    cout << fixed << setprecision(10) << ans << endl;
    // printf("%.10lf\n", ans);
    return 0;
}
