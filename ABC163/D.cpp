/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 16:20:12 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/19 22:38:48 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int arraySum(vector<int> &v)
{
    int initial_sum = 0;
    return accumulate(v.begin(), v.end(), initial_sum);
}

int permutate(vector<int> &box, int K)
{
    vector<int> perm_box(100000);
    do
    {
        return arraySum(box);
    } while (next_permutation(box.begin(), box.end()));
}

int main(void)
{
    int N, K;
    cin >> N >> K;

    vector<int> box(N + 1, 0);
    box[0] = 1000000;
    for (int i = 1; i < N + 1; i++)
    {
        box[i] = i + 1000000;
    }

    // debug
    // for (int i = 0; i < N + 1; i++)
    // {
    //     cout << box[i] << endl;
    // }

    // int ans = 0;
    // deque<ll> sum(LINF);

    // 順列のパターンをgetする
    for (int i = K; i <= box.size() + 1; i++)
    {

        permutate(box, K);
    }

    // cout << ans << endl;
    return (0);
}
