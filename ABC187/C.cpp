/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 21:24:15 by kkamashi          #+#    #+#             */
/*   Updated: 2021/01/14 22:00:11 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000;//1e18
const double EPS = 1e-10;

int main(void)
{
    int N;
    cin >> N;

    vector<string>S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    unordered_set<string>H;
    for (int i = 0; i < N; i++)
    {
        H.insert(S[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (H.count("!" + S[i]))
        {
            cout << S[i] << endl;
            return (0);
        }
    }
    cout << "satisfiable" << endl;
    return (0);
}


// int main(void)
// {
//     int N;
//     cin >> N;

//     vector<string>S(N);
//     vector<bool>found1(N);
//     vector<bool>found2(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> S.at(i);
//         found1[i] = false;
//         found2[i] = false;
//     }
//     string msg = "satisfiable";
//     string ans;
//     string target;
//     for (int i = 0; i < N - 1; i++)
//     {
//         target = "!" + S[i];
//         for (int j = 0; j < N; j++)
//         {
//             if (S[i].compare(S[j]) == 0)
//             {
//                 found1[i] = true;
//             }
//             else if (target.compare(S[j]) == 0)
//             {
//                 found2[i] = true;
//             }
//             if (found1[i] == true && found2[i] == true)
//             {
//                 cout << S[i] << endl;
//                 return (0);
//             }
//         }
//     }
//     // for (int i = 0; i < N; i++)
//     // {
//     //     if (found1[i] == true && found2[i] == true)
//     //     {
//     //         cout << S[i] << endl;
//     //         return (0);
//     //     }
//     // }
//     cout << msg << endl;
//     return (0);
// }