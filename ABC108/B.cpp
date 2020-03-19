/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 13:43:21 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/19 14:55:15 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

// After reading the editorial

// int main(void)
// {
//     int x1, y1, x2, y2;
//     cin >> x1 >> y1 >> x2 >> y2;

//     int x = x2 - x1, y = y2 - y1;

//     int x3, y3, x4, y4;
//     x3 = x2 - y;
//     y3 = y2 + x;
//     x4 = x1 - y;
//     y4 = y1 + x;
//     printf("%d %d %d %d\n", x3, y3, x4, y4);
//     return (0);
// }

int main(void)
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int diff_x = x2 - x1;
    int diff_y = y2 - y1;

    int x3, y3, x4, y4;
    x3 = x2 - diff_y;
    y3 = y2 + diff_x;
    x4 = x1 - diff_y;
    y4 = y1 + diff_x;

    printf("%d %d %d %d\n", x3, y3, x4, y4);
    return (0);
}

//(正方形の対角線の長さ)=(1辺の長さ)×2‾√

// int main(void)
// {
//     int x1, y1, x2, y2;
//     cin >> x1 >> y1 >> x2 >> y2;

//     int side_length;
//     if (x1 == x2)
//         side_length = abs(y2 - y1);
//     else if (y1 == y2)
//         side_length = abs(x2 - x1);
//     else
//     {
//         side_length = sqrt((abs(x2 - x1)) * (abs(x2 - x1)) + (abs(y2 - y1)) * (abs(y2 - y1)));
//     }
//     // printf("%d", side_length);

//     int diagonal = side_length * sqrt(2);
//     // printf("diagonal = %d", diagonal);

//     int start = -100;
//     int end = 100;
//     int length = 0;

//     int x3, y3;
//     for (int i = start; i < end; i++)
//     {
//         for (int j = start; j < end; j++)
//         {
//             length = sqrt((abs(x1 - i)) * (abs(x1 - i)) + (abs(y1 - j)) * (abs(y1 - j)));
//             if (length == diagonal)
//             {
//                 x3 = i;
//                 y3 = j;
//             }
//         }
//     }

//     int x4, y4;
//     for (int i = start; i < end; i++)
//     {
//         for (int j = start; j < end; j++)
//         {
//             length = sqrt((abs(x2 - i)) * (abs(x2 - i)) + (abs(y2 - j)) * (abs(y2 - j)));
//             if (length == diagonal)
//             {
//                 x4 = i;
//                 y4 = j;
//             }
//         }
//     }
//     printf("%d %d %d %d", x3, y3, x4, y4);
//     return (0);
// }