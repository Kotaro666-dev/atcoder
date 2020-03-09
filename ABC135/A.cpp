/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:01:47 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/09 15:01:48 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int32_t A, B;
    cin >> A >> B;

    int32_t K;
    bool found = false;
    for (K = 0; K <= max(A, B); K++)
    {
        if (abs(A - K) == abs(B - K))
        {
            found = true;
            cout << K << endl;
        }
    }

    if (found == false)
    {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
