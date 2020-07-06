/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   E.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 22:03:15 by kkamashi          #+#    #+#             */
/*   Updated: 2020/07/06 09:11:07 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000;//1e18
const double EPS = 1e-10;

int main(void)
{
    int N, K;
    cin >> N >> K;
    deque<int> A;
    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        A.push_back(num);
    }
    sort(A.begin(), A.end(), greater<int>());
    bool isEven;
    if (N % 2 == 0)
        isEven = true;
    else
        isEven = false;

    long ans = 1;
    bool negative_chosen = false;
    long head, tail;
    if (isEven == true)
    {
        while (N > 0)
        {
            head = A.front();
            tail = A.back();
            if (abs(head) < abs(tail))
            {
                ans *= tail;
                negative_chosen = true;
                if ()
            }
            else
            {
                ans *= head;
                negative_chosen = false;
            }

            N--;
        }
    }
    else
    {
        while (N > 0)
        {

            N--;
        }
    }


    return (0);
}