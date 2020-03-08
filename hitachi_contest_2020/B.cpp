/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 21:43:15 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/08 22:30:11 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int A, B, M;
    cin >> A >> B >> M;

    vector<int> fridge_A(A);
    vector<int> fridge_B(B);
    for (int i = 0; i < A; i++)
    {
        cin >> fridge_A.at(i);
    }
    for (int i = 0; i < B; i++)
    {
        cin >> fridge_B.at(i);
    }

    int x, y;
    int discount;
    vector<int> sum(M);
    for (int i = 0; i < M; i++)
    {
        cin >> x >> y >> discount;
        sum.at(i) = fridge_A.at(x - 1) + fridge_B.at(y - 1) - discount;
    }

    // 割引ありの最初金額
    sort(sum.begin(), sum.end());
    int min_with_discount = sum.at(0);

    // 割引なしの最初金額
    sort(fridge_A.begin(), fridge_A.end());
    sort(fridge_B.begin(), fridge_B.end());
    int min_without_discount = fridge_A.at(0) + fridge_B.at(0);

    cout << min(min_with_discount, min_without_discount) << endl;
    return 0;
}
