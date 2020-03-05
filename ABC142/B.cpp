/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:45:34 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/05 15:47:37 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N, K;

    cin >> N >> K;
    int height, counter = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> height;
        if (height >= K)
            counter++;
    }

    cout << counter << endl;
    return 0;
}
