/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 20:28:14 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/23 10:21:19 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

// int main(void)
// {
//     std::cout << std::fixed << std::setprecision(10);
//     int L;
//     cin >> L;

//     double height, width, length;
//     height = L / 3;
//     width = L / 3;
//     length = L / 3;

//     double ans = height * width * length;
//     cout << ans << endl;
//     return (0);
// }

int main(void)
{
    std::cout << std::fixed << std::setprecision(10);
    int L;
    cin >> L;

    double height, width, length;
    double volume = 0.0;
    double maximum = 0.0;
    for (height = 0.1; height < L; height += 0.1)
    {
        for (width = 0.1; width < L; width += 0.1)
        {
            length = L - (width + height);
            volume = height * width * length;
            maximum = max(maximum, volume);
        }
    }
    cout << maximum << endl;
    return (0);
}

// int main(void)
// {
//     std::cout << std::fixed << std::setprecision(10);
//     int L;
//     cin >> L;

//     double height, width, length;
//     double volume = 0.0;
//     double maximum = 0.0;
//     for (height = 0.1; height < L; height += 0.1)
//     {
//         for (width = 0.1; width < (L - height); width += 0.1)
//         {
//             for (length = 0.1; length <= (L - (height + width)); length += 0.1)
//             {
//                 volume = height * width * length;
//                 maximum = max(maximum, volume);
//             }
//         }
//     }
//     cout << maximum << endl;
//     return (0);
// }