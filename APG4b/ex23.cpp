/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex23.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 16:12:39 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/03 16:33:21 by kkamashi         ###   ########.fr       */
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
    int N;
    cin >> N;

    int A;
    int max_value = -1;
    int max_key;
    unordered_map<int, int> container;
    for (int i = 0; i < N; i++)
    {
        cin >> A;
        if (container.count(A))
        {
            container[A]++;
        }
        else
        {
            container[A] = 1;
        }

        if (max_value < container[A])
        {
            max_value = container[A];
            max_key = A;
        }
    }
    cout << max_key << " " << max_value << endl;
    return (0);
}