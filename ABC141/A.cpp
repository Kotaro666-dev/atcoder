/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 08:01:49 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/06 08:09:51 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

// int main(int argc, char const *argv[])
// {
//     string today;
//     cin >> today;

//     vector<string> weather(4);
//     weather = {"Sunny",
//                "Cloudy",
//                "Rainy"};

//     string tomorrow;
//     for (int i = 0; i < weather.size(); i++)
//     {
//         if (today == weather.at(i))
//         {
//             if (i != 2)
//                 tomorrow = weather.at(i + 1);
//             else
//                 tomorrow = weather.at(0);
//         }
//     }
//     cout << tomorrow << endl;
//     return 0;
// }

int main(int argc, char const *argv[])
{
    string today;
    cin >> today;

    string tomorrow;
    if (today == "Sunny")
    {
        tomorrow = "Cloudy";
    }
    else if (today == "Cloudy")
    {
        tomorrow = "Rainy";
    }
    else
    {
        tomorrow = "Sunny";
    }

    cout << tomorrow << endl;
    return 0;
}
