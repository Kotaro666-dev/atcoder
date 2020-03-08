/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 18:50:43 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/08 18:56:42 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int A, B;
    cin >> A >> B;

    int plus, minus, times;
    plus = A + B;
    minus = A - B;
    times = A * B;

    int max_1 = max(plus, minus);
    int max_2 = max(max_1, times);
    cout << max_2 << endl;

    return 0;
}
