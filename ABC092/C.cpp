/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 10:11:09 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/20 11:17:30 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// なぜか実行時エラーを修正できず。出力はあってルはず

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int N;
    cin >> N;

    vector<int> A;
    A.push_back(0);

    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        A.push_back(num);
    }
    A.push_back(0);

    N += 2;

    ll sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += abs(A[i + 1] - A[i]);
    }
    // printf("sum = %lld\n", sum);

    //観光スポットiを消す場合について，
    // sum -（観光スポットをiとi+1の間のコスト）-（観光スポットをiとi-1の間のコスト）+（観光スポットをi-1とi+1の間のコスト）
    ll ans;
    for (int i = 1; i <= N - 2; i++)
    {
        ans = sum - abs(A[i + 1] - A[i]) - abs(A[i] - A[i - 1]) + abs(A[i + 1] - A[i - 1]);
        cout << ans << endl;
    }
    return (0);
}

// int main(void)
// {
//     int N;
//     cin >> N;

//     const int length = N + 2;
//     vector<int> A(length);
//     A[0] = 0;
//     for (int i = 1; i < length - 1; i++)
//     {
//         cin >> A[i];
//     }
//     A[length - 1] = 0;

//     // debug
//     // for (int i = 0; i < length; i++)
//     // {
//     //     printf("%d ", A[i]);
//     // }
//     // printf("\n");

//     vector<vector<int>> ruiseki(N, vector<int>(length + 1, 0));
//     int diff, target, temp;
//     for (int i = 0; i < N; i++)
//     {
//         target = i + 1;
//         temp = A[target];
//         A[target] = A[target + 1];
//         for (int j = 0; j < length + 1; j++)
//         {
//             diff = abs(A[j + 1] - A[j]);
//             // printf("%d: %d - %d\n", i + 1, A[j + 1], A[j]);
//             ruiseki[i][j + 1] = ruiseki[i][j] + diff;
//         }
//         A[target] = temp;
//     }

//     // debug
//     // for (int i = 0; i < N; i++)
//     // {
//     //     for (int j = 0; j < length + 1; j++)
//     //     {
//     //         cout << ruiseki[i][j] << " ";
//     //     }
//     //     printf("\n");
//     // }

//     for (int i = 0; i < N; i++)
//     {
//         cout << ruiseki[i][length - 1] << "\n";
//     }
//     return (0);
// }