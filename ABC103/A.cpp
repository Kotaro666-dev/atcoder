/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:56:20 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/20 16:00:32 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    vector<int> A(3, 0);
    for (int i = 0; i < 3; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int ans = (A[1] - A[0]) + (A[2] - A[1]);
    cout << ans << endl;

    return (0);
}