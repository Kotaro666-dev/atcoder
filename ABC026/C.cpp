/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 10:05:45 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/17 11:41:30 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

// 上司の番号は必ず自分の番号より小さい
// -> 社員番号の大きい社員から順番に求めていけば、自分の給料を算出できる

// 修正点：79行
//for (int i = 2; i < N + 1; i++)
//->
//for (int i = N; i >= 2; i--)

int main(void)
{
    int N;
    cin >> N;

    const int M = N - 1;

    vector<int> bukaNum(N + 1, 0);
    vector<int> salary(N + 1, 0);
    vector<vector<int>> joushiList(N + 1);

    int num;
    int index = 2;
    for (int i = 0; i < M; i++)
    {
        cin >> num;
        // bukaを入れる
        bukaNum[num]++;
        // jouhsiを入れる
        joushiList[num].push_back(index);
        index++;
    }

    // debug for bukaNum
    // for (int i = 1; i < N + 1; i++)
    // {
    //     printf("%d has %d buka\n", i, bukaNum[i]);
    // }

    // debug for JoushiList
    // for (int i = 1; i < N + 1; i++)
    // {
    //     for (int j = 0; j < joushiList[i].size(); j++)
    //     {
    //         printf("%d is %d's joushi\n", i, joushiList[i][j]);
    //     }
    // }

    // 部下がゼロのところに給料を1埋める
    for (int i = 1; i < N + 1; i++)
    {
        if (bukaNum[i] == 0)
        {
            salary[i] = 1;
        }
    }

    // debug for salary
    // for (int i = 1; i < N + 1; i++)
    // {
    //     printf("%d's salary = %d\n", i, salary[i]);
    // }

    for (int i = N; i >= 2; i--)
    {
        if (bukaNum[i] == 1)
        {
            int whoBuka = joushiList[i][0];
            salary[i] = salary[whoBuka] * 2 + 1;
        }
        else if (bukaNum[i] > 1)
        {
            int mn = salary[joushiList[i][0]];
            int mx = salary[joushiList[i][0]];
            for (int j = 1; j < joushiList[i].size(); j++)
            {
                mn = min(mn, salary[joushiList[i][j]]);
                mx = max(mx, salary[joushiList[i][j]]);
            }
            salary[i] = mx + mn + 1;
        }
    }

    // debug for salary
    // for (int i = 1; i < N + 1; i++)
    // {
    //     printf("%d's salary = %d\n", i, salary[i]);
    // }

    // もし上司に1を持っている部下がいたら、最後にアップデート
    // for (int i = 0; i < joushiList[1].size(); i++)
    // {
    //     int buka = joushiList[1][i];
    //     if (bukaNum[buka] == 1)
    //     {
    //         int whoBuka = joushiList[buka][0];
    //         salary[buka] = salary[whoBuka] * 2 + 1;
    //     }
    //     else if (bukaNum[buka] > 1)
    //     {
    //         int mn = salary[joushiList[buka][0]];
    //         int mx = salary[joushiList[buka][0]];
    //         for (int k = 1; k < joushiList[buka].size(); k++)
    //         {
    //             mn = min(mn, salary[joushiList[buka][k]]);
    //             mx = max(mx, salary[joushiList[buka][k]]);
    //         }
    //         salary[buka] = mx + mn + 1;
    //     }
    // }

    // 高橋くんの給料をupdate
    int ans;
    if (bukaNum[1] == 0)
    {
        ans = 1;
    }
    else if (bukaNum[1] == 1)
    {
        int whoBuka = joushiList[1][0];
        ans = salary[whoBuka] * 2 + 1;
    }
    else if (bukaNum[1] > 1)
    {
        int mn = salary[joushiList[1][0]];
        int mx = salary[joushiList[1][0]];
        for (int j = 1; j < joushiList[1].size(); j++)
        {
            mn = min(mn, salary[joushiList[1][j]]);
            mx = max(mx, salary[joushiList[1][j]]);
        }
        ans = mx + mn + 1;
    }
    cout << ans << endl;
    return (0);
}