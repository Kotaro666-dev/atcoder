/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 18:12:38 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/01 21:02:03 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int ans;
    if (N % 2 == 0)
        ans = N / 2;
    else
        ans = N / 2 + 1;
    cout << ans << endl;
}