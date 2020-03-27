/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 01:05:55 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/28 01:13:53 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N;
    cin >> N;

    vector<int> A(N);
    bool even = true;
    int counter = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (A[i] % 2 != 0)
        {
            even = false;
        }
    }

    if (even == false)
    {
        cout << counter << endl;
        return 0;
    }

    while (even == true)
    {
        for (int i = 0; i < N; i++)
        {
            A[i] /= 2;
            if (A[i] % 2 != 0)
            {
                even = false;
            }
        }
        counter++;
    }
    cout << counter << endl;
    return (0);
}