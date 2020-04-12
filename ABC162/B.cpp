/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 20:52:05 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/12 21:28:46 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>      // cout, endl, cin
#include <string>        // string, to_string, stoi
#include <vector>        // vector
#include <algorithm>     // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility>       // pair, make_pair
#include <tuple>         // tuple, make_tuple
#include <cstdint>       // int64_t, int*_t
#include <cstdio>        // printf
#include <map>           // map
#include <queue>         // queue, priority_queue
#include <set>           // set
#include <stack>         // stack
#include <deque>         // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset>        // bitset
#include <cctype>        // isupper, islower, isdigit, toupper, tolower
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    ll N;

    cin >> N;
    ll sum = 0;
    for (ll i = 1; i <= N; i++)
    {
        if (i % 15 == 0)
        {
            continue;
        }
        else if (i % 5 == 0)
        {
            continue;
        }
        else if (i % 3 == 0)
        {
            continue;
        }
        else
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return (0);
}