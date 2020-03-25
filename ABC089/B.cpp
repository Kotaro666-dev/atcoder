/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 13:33:40 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/25 13:36:52 by kotaro666        ###   ########.fr       */
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

    vector<char> S(N);
    string ans = "Three";
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
        if (S[i] == 'Y')
            ans = "Four";
    }
    cout << ans << endl;
    return (0);
}