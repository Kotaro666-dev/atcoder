/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 21:18:50 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/08 22:31:13 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

// int main(int argc, char const *argv[])
// {
//     string S;
//     cin >> S;

//     int length = S.size();
//     bool hitachi = false;
//     for (int i = 0; i < length - 1; i++)
//     {
//         if (S.at(i) == 'h' && S.at(i + 1) == 'i')
//             hitachi = true;
//         if (hitachi == true)
//         {
//             cout << "Yes" << endl;
//             return (0);
//         }
//     }
//     cout << "No" << endl;

//     return 0;
// }

int main(int argc, char const *argv[])
{
    string S;
    cin >> S;

    int length = S.size();
    bool hitachi = true;

    // exceptional case: ex.hihihihih
    if (S.at(length - 1) != 'i')
    {
        cout << "No" << endl;
        return (0);
    }

    for (int i = 0; i < length; i++)
    {
        if (i % 2 == 0)
        {
            if (S.at(i) != 'h')
            {
                hitachi = false;
            }
        }
        if (i % 2 == 1)
        {
            if (S.at(i) != 'i')
            {
                hitachi = false;
            }
        }
    }

    if (hitachi == false)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}
