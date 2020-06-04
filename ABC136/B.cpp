/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 18:51:25 by kotaro666         #+#    #+#             */
/*   Updated: 2020/06/04 10:46:02 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    int counter = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i < 10)
        {
            counter++;
        }
        else if (i >= 100 && i <= 999)
        {
            counter++;
        }
        else if (i >= 10000 && i <= 99999)
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
