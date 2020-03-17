/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 15:20:49 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/17 15:22:42 by kotaro666        ###   ########.fr       */
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

    if (N == 1)
    {
        cout << "Hello World" << endl;
    }
    else
    {
        int A, B;
        cin >> A >> B;

        cout << A + B << endl;
    }
    return (0);
}