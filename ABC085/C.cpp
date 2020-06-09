/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 10:14:17 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/09 10:27:45 by kkamashi         ###   ########.fr       */
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
    int N, Y;
    cin >> N >> Y;

    for (int ichiman = 0; ichiman <= Y / 10000; ichiman++)
    {
        for (int gosen = 0; gosen <= Y / 5000; gosen++)
        {
            int sen = N - (ichiman + gosen);
            bool isPlus = (sen >= 0);
            bool price = (ichiman * 10000 + gosen * 5000 + sen * 1000 == Y);
            bool num = (ichiman + gosen + sen == N);
            if (isPlus == true && price == true && num == true)
            {
                printf("%d %d %d\n", ichiman, gosen, sen);
                return (0);
            }
        }
    }
    printf("-1 -1 -1\n");
    return (0);
}