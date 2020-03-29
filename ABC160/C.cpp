/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 16:11:49 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/29 11:47:04 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
◯さんと◯さんの家の距離で最も長いところを探して、全体の距離から最大の長さを引くと最短距離
https://www.youtube.com/watch?v=PqpfgFt8tsM
 */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;

int main(void)
{
    int K, N;
    cin >> K >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int longest = 0;
    for (int i = 0; i < N; i++)
    {
        longest = max(longest, A[i + 1] - A[i]);
    }
    longest = max(longest, K + A[0] - A[N - 1]);
    cout << K - longest << endl;
    return (0);
}

// int main(void)
// {
//     int K, N;
//     cin >> K >> N;

//     int size = N * 2 + 1;
//     vector<int> A(size + 1);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//     }
//     A[N] = K;

//     for (int i = N + 1; i < size; i++)
//     {
//         A[i] += A[i - N] + A[N];
//     }

//     // If there is no zero in it
//     bool isZero = false;
//     for (int i = 0; i < size; i++)
//     {
//         if (A[i] == 0)
//         {
//             isZero = true;
//         }
//     }
//     if (isZero == false)
//     {
//         A[size] = 0;
//         sort(A.begin(), A.end());
//         N = N + 1;
//         size = size + 1;
//     }

//     // for (int i = 0; i < size; i++)
//     // {
//     //     printf("%d = %d\n", i, A[i]);
//     // }

//     // input minimum
//     int minimum;
//     for (int i = 0; i < N - 1; i++)
//     {
//         minimum += abs(A[i] - A[i + 1]);
//     }
//     // printf("minimum = %d\n", minimum);

//     // left way
//     // counter == N stop
//     int counter, sum;
//     sum = 0;
//     counter = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += abs(A[i] - A[i + 1]);
//         counter++;
//         if (counter == N - 1)
//         {
//             minimum = min(sum, minimum);
//             counter = 0;
//             sum = 0;
//         }
//     }
//     // printf("%d", minimum);

//     // right way
//     sum = 0;
//     counter = 0;
//     for (int i = size - 1; i >= 0; i--)
//     {
//         sum += abs(A[i] - A[i - 1]);
//         counter++;
//         // if (i == 4)
//         // {
//         //     printf("%d %d %d\n", i, A[i], A[i - 1]);
//         //     printf("sum = %d\n", sum);
//         // }
//         if (counter == N - 1)
//         {
//             minimum = min(sum, minimum);
//             counter = 0;
//             sum = 0;
//         }
//     }
//     printf("%d\n", minimum);
//     return (0);
// }

// int main(void)
// {
//     int K, N;
//     cin >> K >> N;

//     int size = N * 2 + 1;
//     vector<int> A(size);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//     }
//     A[N] = K;

//     for (int i = N + 1; i < size; i++)
//     {
//         A[i] += A[i - N] + A[N];
//     }

//     // for (int i = 0; i < size; i++)
//     // {
//     //     printf("%d = %d\n", i, A[i]);
//     // }

//     // input minimum
//     int minimum;
//     for (int i = 0; i < N - 1; i++)
//     {
//         minimum += abs(A[i] - A[i + 1]);
//     }
//     // printf("minimum = %d\n", minimum);

//     // left way
//     // counter == N stop
//     int counter, sum;
//     for (int i = 0; i < N; i++)
//     {
//         sum = 0;
//         counter = 0;
//         for (int j = i; j < size; j++)
//         {
//             sum += abs(A[j] - A[j + 1]);
//             counter++;
//             if (counter == N - 1)
//             {
//                 minimum = min(sum, minimum);
//                 break;
//             }
//         }
//     }
//     // printf("%d", minimum);

//     // right way
//     for (int i = N; i < size; i++)
//     {
//         sum = 0;
//         counter = 0;
//         for (int j = i; j >= 0; j--)
//         {
//             sum += abs(A[j] - A[j - 1]);
//             counter++;
//             // if (i == 4)
//             // {
//             //     printf("%d %d %d\n", j, A[j], A[j - 1]);
//             //     printf("sum = %d\n", sum);
//             // }
//             if (counter == N - 1)
//             {
//                 minimum = min(sum, minimum);
//                 break;
//             }
//         }
//     }
//     printf("%d\n", minimum);
//     return (0);
// }