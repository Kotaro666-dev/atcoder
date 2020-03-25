/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 12:09:16 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/25 12:40:03 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Editorial
数字が5桁であることから、1桁目と5桁目、2桁目と4桁目が同じである数を見つける
 */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int A, B;
    cin >> A >> B;

    string str;
    int counter = 0;
    for (int i = A; i <= B; i++)
    {
        str = to_string(i);

        if (str[0] == str[4] && str[1] == str[3])
        {
            // cout << str << endl;
            counter++;
        }
    }
    cout << counter << endl;
    return (0);
}

// int main(void)
// {
//     int A, B;
//     cin >> A >> B;

//     string A_str, A_rev;
//     int counter = 0;
//     for (int i = A; i <= B; i++)
//     {
//         auto A_str = std::to_string(i);
//         auto A_rev = std::to_string(i);
//         reverse(A_rev.begin(), A_rev.end());

//         if (A_str == A_rev)
//         {
//             // cout << A_str << endl;
//             counter++;
//         }
//     }
//     cout << counter << endl;
//     return (0);
// }