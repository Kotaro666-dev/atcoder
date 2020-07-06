/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 13:10:10 by kkamashi          #+#    #+#             */
/*   Updated: 2020/07/05 21:34:46 by kkamashi         ###   ########.fr       */
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
    int N;
    cin >> N;

    priority_queue<int> A;
    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        A.push(num);
    }
    deque<int> box;

    long ans = 0;
    box.push_back(A.top());
    A.pop();
    box.push_back(A.top());
    A.pop();

    ans += box[0];

    int next;
    for (int i = 2; i < N; i++)
    {
        next = A.top();

    }

    return (0);
}