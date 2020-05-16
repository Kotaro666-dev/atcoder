/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 11:53:02 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/16 12:13:54 by kkamashi         ###   ########.fr       */
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
    int N;
    cin >> N;
    vector<int> A(N);
    // set<int> st;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        // st.insert(A[i]);
    }
    sort(A.begin(), A.end(), greater<int>());
    A.erase(unique(A.begin(), A.end()), A.end());
    int ans = A[1];
    // int ans = *std::next(st.begin(), st.size() - 2);
    cout << ans << endl;
    return (0);
}