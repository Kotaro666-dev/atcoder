/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 15:07:02 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/11 15:24:38 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// push_back -> reverse = 数列の頭もしくはお尻に数字を挿入していくこと
// i番目が偶奇で判別して、dequeのpush_front or push_backでいれていく

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int n;
    cin >> n;

    deque<int> b;
    int a;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (i % 2 != 0)
        {
            b.push_back(a);
        }
        else
        {
            b.push_front(a);
        }
    }

    if (n % 2 != 0)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            printf("%d", b[i]);
            if (i != 0)
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d", b[i]);
            if (i != n - 1)
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
        }
    }

    return (0);
}