/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 18:58:03 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/11 15:59:14 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N;
    cin >> N;

    vector<int> W(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> W.at(i);
    }

    int sum;
    for (int i = 0; i < N; i++)
    {
        sum += W.at(i);
    }

    int left, right;
    int T;
    int diff, min;
    min = sum;
    for (T = 0; T < N; T++)
    {
        //* left
        left = 0;
        for (int i = 0; i <= T; i++)
        {
            left += W.at(i);
        }

        //* right
        right = 0;
        for (int j = T + 1; j < N; j++)
        {
            right += W.at(j);
        }
        
        //* min = abs(left - right)
        diff = abs(left - right);
        // printf("left:%d - right:%d = %d ", left, right, diff);
        if (min > diff)
        {
            min = diff;
        }
    }

    cout << min << endl;
    return (0);
}