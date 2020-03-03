/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:20:55 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/03 20:20:55 by kotaro666        ###   ########.fr       */
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

    int size_ans = (N * 2) + 1; 

    vector<char> ans(size_ans);

    for (int i = 0, j = 0; i < N; i++)
    {
        ans.at(j) = S.at(i);
        j++;
        ans.at(j) = T.at(i);
        j++;
    }
    for (int i = 0; i < size_ans; i++)
    {
        cout << ans.at(i);
    }
    cout << endl;

}