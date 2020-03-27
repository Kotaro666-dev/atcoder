/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 11:22:36 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/27 11:46:36 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    string s, t;
    cin >> s >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<int>());

    if (s < t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return (0);
}

// int main(void)
// {
//     string s, t;
//     cin >> s >> t;

//     bool found = false;
//     for (int i = 1; i < s.size(); i++)
//     {
//         for (int j = 0; j < t.size(); j++)
//         {
//             if (s.size() < t.size())
//             {
//                 found = true;
//             }
//             if (s[i] < t[j])
//             {
//                 found = true;
//             }
//             if (found == true)
//             {
//                 cout << "Yes" << endl;
//                 return 0;
//             }
//         }
//     }
//     cout << "No" << endl;
//     return (0);
// }