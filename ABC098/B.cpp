/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 18:41:55 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/22 19:15:29 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

/*
I coundnt solve this problem by myself
 */

int main(void)
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    int ans = 0;
    int count;
    for (int i = 1; i < N - 1; i++)
    {
        count = 0;

        for (char c = 'a'; c <= 'z'; c++)
        {
            bool left = false, right = false;

            for (int j = 0; j < i; j++)
            {
                if (c == S[j])
                    left = true;
            }
            for (int k = i; k < N; k++)
            {
                if (c == S[k])
                    right = true;
            }

            if (left == true && right == true)
            {
                count++;
            }
        }

        if (ans < count)
        {
            ans = count;
        }
    }
    cout << ans << endl;
    return (0);
}

// int main(void)
// {
//     int N;
//     cin >> N;

//     vector<char> S(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> S[i];
//     }

//     int counter;
//     int max = 0;
//     bool unique;
//     // vector<char> found(N);
//     for (int i = 1; i < N - 1; i++)
//     {
//         counter = 0;
//         for (int j = 0; j < i; j++)
//         {
//             unique = true;
//             for (int k = i; k < N; k++)
//             {
//                 if (S[j] == S[k] && unique == true)
//                 {
//                     printf("%d :S[%d] == %c\n", i, j, S[j]);
//                     counter++;
//                     unique = false;
//                 }
//                 if (max < counter)
//                 {
//                     max = counter;
//                 }
//             }
//         }
//     }
//     cout << max << endl;
//     return (0);
// }