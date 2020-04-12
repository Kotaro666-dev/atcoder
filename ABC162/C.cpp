/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 20:52:03 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/12 21:23:36 by kkamashi         ###   ########.fr       */
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

int gcd1(int a, int b)
{
    if (b == 0)
        return a;
    else
    {
        return gcd1(b, a % b);
    }
}

int gcd2(int a, int b)
{
    if (b == 0)
        return a;
    else
    {
        return gcd2(b, a % b);
    }
}

int main(void)
{
    int K;

    cin >> K;
    int a, b, c;
    int ab;
    ll sum = 0;

    for (a = 1; a <= K; a++)
    {
        for (b = 1; b <= K; b++)
        {
            ab = gcd1(a, b);
            for (c = 1; c <= K; c++)
            {
                sum += gcd2(ab, c);
            }
        }
    }
    cout << sum << endl;
    return (0);
}
