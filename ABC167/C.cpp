/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:48:37 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/10 22:15:06 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int N, M, X;
    cin >> N >> M >> X;

    vector<int> points(M, X);
    int length = M + 1;
    vector<vector<int>> A(N, vector<int>(length));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cin >> A[i][j];
            if (j > 0)
            {
                points[j - 1] -= A[i][j];
            }
        }
    }

    // sort by cost
    sort(A.begin(), A.end(), [](const vector<int> &alpha, const vector<int> &beta) { return alpha[0] < beta[0]; });

    printf("\ndebug\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << A[i][j] << " ";
        }
        printf("\n");
    }

    // exeption
    for (int i = 0; i < M; i++)
    {
        if (points[i] > 0)
        {
            printf("-1\n");
            return (0);
        }
    }

    vector<int> check(M, X);
    int cost;
    int counter;
    // int min_cost = 0;
    for (int i = 0; i < N - 1; i++)
    {
        cost = 0;
        counter = 0;
        for (int j = i + 1; j < N; j++)
        {
            for (int k = 0; k < length; k++)
            {
                if (k == 0)
                {
                    cost += A[j][k];
                }
                check[k] -= A[j][k];
            }
        }
        for (int i = 0; i < M; i++)
        {
            if (check[i] > 0)
            {
                counter++;
            }
            if (counter == 0)
            {
                cout << cost << endl;
                return (0);
            }
        }
    }
    return (0);
}