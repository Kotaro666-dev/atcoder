/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 18:12:43 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/01 23:11:56 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> digit_num(M, vector<int>(2));
    // vector<int> num(M);

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> digit_num.at(i).at(j);
        }
    }

    // for (int i = 0; i < M; i++)
    // {
    //     // for (int j = 0; j < 2; j++)
    //     // {
    //     cout << digit_num.at(i).at(0) << " ";
    //     // }
    //     cout << endl;
    // }

    if (M == 0)
    {
        cout << "-1" << endl;
        return 0;
    }

    int ans = -1;

    if (N == 1)
    {
        bool found = false;
        ans = 9;
        for (int i = 0; i < M; i++)
        {
            if (digit_num.at(i).at(0) == 1)
            {
                found = true;
                ans = min(ans, digit_num.at(i).at(1));
            }
        }
        if (found == false)
        {
            ans = -1;
        }
    }
    else if (N == 2)
    {
        int first_digit = 9, second_digit = 9;
        bool first_found = false;
        bool second_found = false;
        for (int i = 0; i < M; i++)
        {
            if (digit_num.at(i).at(0) == 1 && digit_num.at(i).at(1) != 0)
            {
                first_found = true;
                first_digit = min(first_digit, digit_num.at(i).at(1));
            }
            if (digit_num.at(i).at(0) == 2)
            {
                second_found = true;
                second_digit = min(second_digit, digit_num.at(i).at(1));
            }
        }
        if (first_digit == false && second_digit == false)
            ans = -1;
        else if (first_digit == false && second_digit == true)
            ans = 10 + second_digit;
        else if (first_digit == true && second_digit == false)
            ans = 10 * first_digit;
        else if (first_digit == true && second_digit == true)
            ans = first_digit * 10 + second_digit;
    }
    else if (N == 3)
    {
        int first_digit = 9, second_digit = 9, third_digit = 9;
        bool first_found = false;
        bool second_found = false;
        bool third_found = false;
        for (int i = 0; i < M; i++)
        {
            if (digit_num.at(i).at(0) == 1 && digit_num.at(i).at(1) != 0)
            {
                first_found = true;
                first_digit = min(first_digit, digit_num.at(i).at(1));
            }
            if (digit_num.at(i).at(0) == 2 && digit_num.at(i).at(1) != 0)
            {
                second_found = true;
                second_digit = min(second_digit, digit_num.at(i).at(1));
            }
            if (digit_num.at(i).at(0) == 3)
            {
                third_found = true;
                third_digit = min(third_digit, digit_num.at(i).at(1));
            }
        }
        // cout << first_digit << endl;
        // cout << ans << endl;

        if (first_digit == 0)
            ans = -1;
        if (first_digit == 0 && second_digit == 0)
            ans = -1;
        if (first_found == true && second_found == true && third_found == true)
            ans = first_digit * 100 + second_digit * 10 + third_digit;
        else if (first_found == true && second_found == true && third_found == false)
            ans = first_digit * 100 + second_digit * 10;
        else if (first_found == true && second_found == false && third_found == false)
            ans = first_digit * 100;
        else if (first_found == false && second_found == false && third_found == false)
            ans = -1;
        else if (first_found == false && second_found == true && third_found == false)
            ans = -1;
        else if (first_found == false && second_found == false && third_found == true)
            ans = 100 + third_digit;
        else if (first_found == false && second_found == true && third_found == true)
            ans = 100 + second_digit * 10 + first_digit;
        else if (first_found == true && second_found == false && third_found == false)
            ans = first_digit * 100;
        else if (first_found == true && second_found == false && third_found == true)
            ans = first_digit * 100 + third_digit;
        else
            ans = -1;
    }
    cout << ans << endl;
}