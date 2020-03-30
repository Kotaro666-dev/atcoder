/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 11:39:50 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/30 12:12:11 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

int main(void)
{
    string S;
    cin >> S;

    vector<bool> counter(26, false);
    int number;
    for (int i = 0; i < S.size(); i++)
    {
        number = (unsigned char)S[i] - 'a';
        // printf("%d", number);
        counter[number] = true;
    }

    char ans;
    for (int i = 0; i < 26; i++)
    {
        if (counter[i] == false)
        {
            ans = (char)(i + 'a');
            cout << ans << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}

// int main(void)
// {
//     string S;
//     cin >> S;

//     set<char> str;
//     sort(S.begin(), S.end());
//     for (int i = 0; i < S.size(); i++)
//     {
//         str.insert(S[i]);
//     }
//     // printf("\n\n");

//     char cmp = 'a';
//     for (auto itr = str.begin(); itr != str.end(); itr++)
//     {
//         if (*itr != cmp)
//         {
//             printf("%c\n", cmp);
//             return 0;
//         }
//         cmp++;
//     }
//     cout << "None" << endl;
//     return (0);
// }