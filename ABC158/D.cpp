/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 22:19:48 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/07 22:38:30 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void)
{
    string S;
    cin >> S;

    int Q;
    cin >> Q;

    int T;
    for (int i = 0; i < Q; i++)
    {
        cin >> T;
        if (T == 1)
        {
            swap(S.at(0), S.at(S.size() - 1));
        }
        else if (T == 2)
        {
            int F;
            string C;
            cin >> F >> C;
            if (F == 1)
            {
                S.insert(0, C);
            }
            else if (F == 2)
            {
                for (int i = 0; i < C.size(); i++)
                {
                    S.push_back(C.at(i));
                }
            }
        }
    }
    cout << S << endl;
    return (0);
}