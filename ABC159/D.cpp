/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 21:58:16 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/22 22:26:22 by kotaro666        ###   ########.fr       */
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
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    vector<int> temp(N);
    temp = A;

    int k = 0;
    for (int i = 0; i < temp.size() - 1; i++)
    {
        for (int j = i + 1; j < temp.size(); j++)
        {
            if (i == k)
            {
                k++;
                break;
            }

            k++;
        }
    }

    return (0);
}