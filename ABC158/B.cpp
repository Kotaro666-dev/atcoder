/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 20:54:29 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/07 22:45:18 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int64_t N, A, B;
    cin >> N >> A >> B;

    int64_t sum = 0;
    int64_t times = N / (A + B);

    // cout << times << endl;
    int64_t ans = 0;
    int64_t all_balls = (A + B) * times;
    ans = A * times;
    // cout << ans << endl;

    int64_t leftover = N - (times * (A + B));
    // cout << leftover << endl;
    if (leftover <= A)
        ans += leftover;
    else
        ans += A;
    cout << ans << endl;
    return 0;
}
