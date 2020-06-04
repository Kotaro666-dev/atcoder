/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:20:55 by kotaro666         #+#    #+#             */
/*   Updated: 2020/06/04 11:29:21 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string S, T;
    cin >> S >> T;

    string ans = "";
    for (int i = 0; i < N; i++)
    {
        ans += S[i];
        ans += T[i];
    }
    cout << ans << endl;
}