/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 15:37:23 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/20 18:28:38 by kkamashi         ###   ########.fr       */
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
    int N;
    cin >> N;

    multimap<int, int> mmap;
    int time, deadline;
    for (int i = 0; i < N; i++)
    {
        cin >> time >> deadline;
        mmap.insert(make_pair(deadline, time));
    }

    ll passed = 0;
    for (auto itr = mmap.begin(); itr != mmap.end(); itr++)
    {

        deadline = itr->first;
        time = itr->second;
        passed += time;
        // printf("passed = %d, deadline = %d\n", passed, deadline);
        if (passed <= deadline)
        {
            continue;
        }
        else
        {
            cout << "No" << endl;
            return (0);
        }
        // cout << itr->first << ": " << itr->second << endl;
    }
    cout << "Yes" << endl;
    return (0);
}

// int main(void)
// {
//     int N;
//     cin >> N;

//     vector<int> time(N);
//     vector<int> dead(N);
//     vector<int> diff(N);
//     ll sum = 0;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> time[i] >> dead[i];
//         diff[i] = dead[i] - time[i];
//         sum += time[i];
//     }

//     for (int i = 0; i < N; i++)
//     {
//         printf("%d\n", diff[i]);
//     }

//     // cout << sum << endl;
//     return (0);
// }