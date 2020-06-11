/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 18:12:43 by kotaro666         #+#    #+#             */
/*   Updated: 2020/06/11 10:58:37 by kkamashi         ###   ########.fr       */
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
    int N, M;
    cin >> N >> M;

    if (M == 0)
    {
        if (N == 1)
        {
            printf("0\n");
        }
        else if (N == 2)
        {
            printf("10\n");
        }
        else if (N == 3)
        {
            printf("100\n");
        }
        return (0);
    }

    vector<int> index(M);
    vector<int> value(M);
    for (int i = 0; i < M; i++)
    {
        cin >> index[i] >> value[i];

        // 例外処理
        if (N >= 2)
        {
            if (index[i] == 1 && value[i] == 0)
            {
                printf("-1\n");
                return (0);
            }
        }
    }

    int keta1;
    int keta2;
    int keta3;
    bool found1 = false;
    bool found2 = false;
    bool found3 = false;

    if (N == 1)
    {
        for (int i = 0; i < M; i++)
        {
            if (found1 == false)
            {
                keta1 = value[i];
                found1 = true;
            }
            else
            {
                if (keta1 == 0 || keta1 != value[i])
                {
                    printf("-1\n");
                    return (0);
                }
            }
        }
        printf("%d\n", keta1);
    }
    else if (N == 2)
    {
        for (int i = 0; i < M; i++)
        {
            if (index[i] == 1)
            {
                if (found1 == false)
                {
                    keta1 = value[i];
                }
                else
                {
                    if (keta1 != value[i])
                    {
                        printf("-1\n");
                        return (0);
                    }
                }
                found1 = true;
            }
            else if (index[i] == 2)
            {
                if (found2 == false)
                {
                    keta2 = value[i];
                }
                else
                {
                    if (keta2 != value[i])
                    {
                        printf("-1\n");
                        return (0);
                    }
                }
                found2 = true;
            }
        }

        if (found1 == false && found2 == true)
        {
            printf("%d\n", 10 + keta2);
        }
        else if (found1 == true && found2 == false)
        {
            printf("%d\n", keta1 * 10);
        }
        else if (found1 == true && found2 == true)
        {
            printf("%d\n", keta1 * 10 + keta2);
        }
    }
    else if (N == 3)
    {
        for (int i = 0; i < M; i++)
        {
            if (index[i] == 1)
            {
                if (found1 == false)
                {
                    keta1 = value[i];
                    found1 = true;
                }
                else
                {
                    if (keta1 != value[i])
                    {
                        printf("-1\n");
                        return (0);
                    }
                }
            }
            else if (index[i] == 2)
            {
                if (found2 == false)
                {
                    keta2 = value[i];
                    found2 = true;
                }
                else
                {
                    if (keta2 != value[i])
                    {
                        printf("-1\n");
                        return (0);
                    }
                }
            }
            else if (index[i] == 3)
            {
                if (found3 == false)
                {
                    keta3 = value[i];
                    found3 = true;
                }
                else
                {
                    if (keta3 != value[i])
                    {
                        printf("-1\n");
                        return (0);
                    }
                }
            }
        }

        if (found1 == true && found2 == true && found3 == true)
        {
            printf("%d\n", keta1 * 100 + keta2 * 10 + keta3);
        }
        else if (found1 == true && found2 == true && found3 == false)
        {
            printf("%d\n", keta1 * 100 + keta2 * 10);
        }
        else if (found1 == true && found2 == false && found3 == true)
        {
            printf("%d\n", keta1 * 100 + keta3);
        }
        else if (found1 == true && found2 == false && found3 == false)
        {
            printf("%d\n", keta1 * 100);
        }
        else if (found1 == false && found2 == true && found3 == false)
        {
            printf("%d\n", 100 + keta2 * 10);
        }
        else if (found1 == false && found2 == true && found3 == true)
        {
            printf("%d\n", 100 + keta2 * 10 + keta3);
        }
        else if (found1 == false && found2 == false && found3 == true)
        {
            printf("%d\n", 100 + keta3);
        }
    }
    return (0);
}