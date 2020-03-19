/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 14:57:44 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/19 15:49:01 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
I couldnt solve this properly...
 */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main()
{
    int h;
    cin >> h;
    int w;
    cin >> w;
    vector<string> a(h);
    for (int i = 0; i < h; i++)
    {
        cin >> a[i];
    }

    vector<bool> row(h, false);
    vector<bool> col(w, false);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (a[i][j] == '#')
            {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    for (int i = 0; i < h; i++)
    {
        if (row[i])
        {
            for (int j = 0; j < w; j++)
            {
                if (col[j])
                {
                    cout << a[i][j];
                }
            }
            cout << endl;
        }
    }
}

// int main(void)
// {
//     int H, W;
//     cin >> H >> W;

//     int i, j, k;
//     vector<string> map(H);
//     for (i = 0; i < W; i++)
//     {
//         cin >> map[i];
//     }
//     // printf("---test----\n");
//     // for (int i = 0; i < W; i++)
//     // {
//     //     cout << map[i] << endl;
//     // }
//     int counter;
//     for (i = 0; i < H; i++)
//     {
//         counter = 0;
//         for (j = 0; j < W; j++)
//         {
//             if (map[i][j] == '.')
//                 counter++;
//         }
//         if (counter == W)
//         {
//             map.erase(map.begin() + i);
//         }
//     }

//     vector<int> location(H, 0);
//     for (i = 0; i < W; i++)
//     {
//         counter = 0;
//         for (j = 0; j < H; j++)
//         {
//             if (map[j][i] == '.')
//                 counter++;
//         }
//         if (counter == H)
//         {
//             location.push_back(j);
//         }
//     }

//     printf("---test----\n");
//     for (i = 0; i < H; i++)
//     {
//         for (j = 0, k = 0; j < W; j++, k++)
//         {
//             if (j != location[k])
//             {
//                 cout << map[i][j];
//             }
//         }
//         cout << endl;
//     }
//     return (0);
// }