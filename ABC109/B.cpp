/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 21:13:46 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/18 21:38:01 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

// int main(void)
// {

//     vector<int> myarray = {1, 2, 3, 4};
//     printf("begin = %d, end = %d\n", myarray.front(), myarray.back());
// }

int main(void)
{
    int N;
    cin >> N;

    vector<string> W(N);
    for (int i = 0; i < N; i++)
    {
        cin >> W[i];
    }

    // check if the same word in a loop
    bool is_same_word = false;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (W[i] == W[j])
            {
                is_same_word = true;
                break;
            }
        }
        if (is_same_word == true)
        {
            break;
        }
    }
    if (is_same_word == true)
    {
        cout << "No" << endl;
        return 0;
    }

    bool is_connected = true;
    for (int i = 0; i < N - 1; i++)
    {
        if (W[i][W[i].size() - 1] != W[i + 1][0])
        // (W[i].back() != W[i + 1].front())
        {
            is_connected = false;
            break;
        }
    }

    if (is_connected == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return (0);
}
