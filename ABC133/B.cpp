/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:29:03 by kotaro666         #+#    #+#             */
/*   Updated: 2020/06/04 11:23:31 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int n, d;
    cin >> n >> d;

    vector<vector<int>> map(n, vector<int>(d));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin >> map[i][j];
        }
    }

    // int sum;
    // int ans = 0;
    // int num;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     sum = 0;
    //     for (int j = 0; j < d; j++)
    //     {
    //         sum += pow(abs((map[i][j]) - map[i + 1][j]), 2);
    //     }
    //     num = sqrt(sum);
    //     if (num * num == sum)
    //     {
    //         ans++;
    //     }
    // }

    // sum = 0;
    // for (int i = 0; i < d; i++)
    // {
    //     sum += pow(abs(map[n - 1][i] - map[0][i]), 2);
    // }
    // num = sqrt(sum);
    // if (num * num == sum)
    // {
    //     ans++;
    // }

    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int norm = 0;
            for (int k = 0; k < d; ++k)
            {
                int diff = abs(map[i][k] - map[j][k]);
                norm += diff * diff;
            }
            // check whether norm = k for some k
            bool flag = false;
            for (int k = 0; k <= norm; ++k)
            {
                if (k * k == norm)
                {
                    flag = true;
                }
            }
            if (flag)
                ++ans;
        }
    }
    cout << ans << endl;
    return (0);
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int N, D;
//     cin >> N >> D;

//     vector<vector<int>> X(N, vector<int>(D));
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < D; j++)
//         {
//             cin >> X.at(i).at(j);
//         }
//     }

//     int distance;
//     int counter = 0;
//     for (int i = 0; i < N - 1; i++)
//     {
//         distance = 0;
//         for (int j = 0; j < D; j++)
//         {
//             if (i != N - 1)
//             {
//                 distance += (X.at(i).at(j) - X.at(i + 1).at(j)) *
//                             (X.at(i).at(j) - X.at(i + 1).at(j));
//             }
//             else
//             {
//                 distance += (X.at(i).at(j) - X.at(i + 1).at(j)) *
//                             (X.at(0).at(j) - X.at(0).at(j));
//             }
//         }
//         cout << distance << endl;
//         if (sqrt(distance) == (int)(sqrt(distance)))
//         {
//             counter++;
//         }
//     }
//     cout << counter << endl;
//     return 0;
// }