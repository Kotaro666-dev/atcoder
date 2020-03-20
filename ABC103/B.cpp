/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:56:26 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/20 16:29:59 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

void rotate_array(string &S)
{
    char last_char = S[S.size() - 1];
    S.pop_back();
    S.insert(S.begin(), last_char);
}

int main(void)
{
    string S, T;
    cin >> S >> T;

    vector<string> S_copy(S.size());

    bool success = false;
    for (int i = 0; i < S.size(); i++)
    {
        rotate_array(S);
        // Editorial
        // S = S.back() + S.substr(0, S.size() - 1);
        // cout << S << endl;
        if (S == T)
        {
            success = true;
            break;
        }
    }

    if (success == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return (0);
}