/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 21:42:57 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/12 21:47:52 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int A, B;
    cin >> A >> B;

    int max_num = max(A, B);
    int min_num = min(A, B);

    int ans;
    if (max_num == min_num)
    {
        ans = max_num + min_num;
    }
    else
    {
        ans = max_num + max_num - 1;
    }
    cout << ans << endl;
    return (0);
}