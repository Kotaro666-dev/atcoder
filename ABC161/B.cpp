/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 20:20:00 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/04 22:15:37 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

int main(void)
{
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    // int ok = sum / (4 * M);
    // printf("ok = %d\n", ok);
    // printf("kari = %d\n", ok * 4 * M);
    // printf("sum = %d\n", sum);
    // printf("correct = %d", 276 * 4 * M);
    // if (sum / (4 * M) != ok * 4 * M)
    // {
    //     ok++;
    // }
    // printf("%d\n", sum);
    // printf("oki = %d\n", ok);

    sort(A.begin(), A.end(), greater<int>());
    int counter = 0;
    for (int i = 0; i < A.size(); i++)
    {
        // printf("%d ", A[i]);
        if (A[i] * 4 * M >= sum)
        {
            // printf("%d > sum\n", A[i], sum);
            counter++;
        }
        // if (A[i] >= ok)
        // {
        //     printf("%d >= %d\n", A[i], ok);
        //     counter++;
        // }
    }
    if (counter >= M)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return (0);
}