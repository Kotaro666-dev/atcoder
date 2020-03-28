/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 10:01:50 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/28 10:10:16 by kotaro666        ###   ########.fr       */
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

    vector<int64_t> L(87);
    L[0] = 2;
    L[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        L[i] = L[i - 1] + L[i - 2];
        // printf("%d ", L[i]);
    }
    cout << L[N] << endl;
    return (0);
}