/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 19:47:46 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/04 20:09:14 by kotaro666        ###   ########.fr       */
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
    int length = S.size();

    int begin, end;
    // find A
    for (int i = 0; i < length; i++)
    {
        if (S[i] == 'A')
        {
            begin = i;
            break;
        }
    }

    //find Z
    for (int i = length; i > begin; i--)
    {
        if (S[i] == 'Z')
        {
            end = i;
            break;
        }
    }
    cout << end - begin + 1 << endl;
    return (0);
}

// int main(void)
// {
//     string str;
//     cin >> str;

//     int length = str.size();
//     int counter, maximum = 0;

//     int i, j;
//     for (i = 0; i < length - 1; i++)
//     {
//         j = i + 1;
//         counter = 0;
//         while (str[i] == 'A')
//         {
//             if (str[j] != 'Z')
//             {
//                 counter++;
//             }
//             else
//             {
//                 break;
//             }
//             j++;
//         }
//         maximum = max(maximum, counter);
//     }
//     cout << maximum + 2 << endl;
//     return (0);
// }