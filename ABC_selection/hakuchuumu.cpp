/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hakuchuumu.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:37:42 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/10 17:08:56 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    string S;
    cin >> S;

    vector<string> find_word = {
        "dream",
        "dreamer",
        "erase",
        "eraser"};

    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; i++)
    {
        reverse(find_word.at(i).begin(), find_word.at(i).end());
    }

    for (int i = 0; i < S.size();)
    {
        if (S.at(i) == 'r')
        {
            if (S.at(i + 2) == 'm')
            {
                i += 7;
            }
            else if (S.at(i + 2 == 's'))
            {
                i += 6;
            }
        }
        else if (S.at(i) == 'm')
        {
            i += 5;
        }
        else if (S.at(i) == 'e')
        {
            i += 5;
        }
        else
        {
            cout << "NO" << endl;
            return (0);
        }
    }
    cout << "YES" << endl;
    return (0);
    // int counter = 0;
    // while (counter < 100)
    // {
    //     for (int i = 0; i < find_word.size(); i++)
    //     {
    //         if (S.find(find_word.at(i)) < S.size())
    //         {
    //             int begin = S.find(find_word.at(i));
    //             int length = find_word.at(i).size();
    //             S.erase(begin, length);
    //         }
    //     }
    //     if (S.size() == 0)
    //     {
    //         cout << "YES" << endl;
    //         return 0;
    //     }
    //     counter++;
    // }
}