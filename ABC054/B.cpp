/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 10:53:00 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/04 13:23:21 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

/*
Couldnt either solve or undestand the solution

 */

int main(void)
{
    int N, M;
    cin >> N >> M;

    vector<vector<char>> A(N, vector<char>(N));
    vector<vector<char>> B(M, vector<char>(M));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> B[i][j];
        }
    }

    bool exist = false;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i + M - 1 >= N || j + M - 1 >= N)
            {
                continue;
            }

            bool match = true;
            for (int k = 0; k < M; k++)
            {
                for (int l = 0; l < M; l++)
                {
                    if (A[i + k][j + l] != B[k][l])
                    {
                        match = false;
                    }
                }
            }
            if (match == true)
            {
                exist = true;
            }
        }
    }

    if (exist == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return (0);
}