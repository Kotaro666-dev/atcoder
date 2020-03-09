/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 22:19:48 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/09 14:27:23 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main(void)
{
    string S;
    cin >> S;
    deque<char> dq;
    for (int i = 0; i < S.size(); i++)
    {
        dq.push_back(S.at(i));
    }

    int Q;
    cin >> Q;

    long long memo = 0;
    for (int i = 0; i < Q; i++)
    {
        int T;
        cin >> T;
        if (T == 1)
        {
            // swap(S.at(0), S.at(S.size() - 1));
            memo++;
        }
        else if (T == 2)
        {
            int F = 0;
            cin >> F;
            if (F == 1)
            {
                char C;
                cin >> C;
                if (memo % 2 == 0)
                {
                    dq.push_front(C);
                }
                else
                {
                    dq.push_back(C);
                    // S.insert(0, C);
                }
            }
            else if (F == 2)
            {
                char C;
                cin >> C;
                if (memo % 2 == 1)
                    dq.push_front(C);
                else
                    dq.push_back(C);
                // S.push_back(C.at(i));
            }
        }
    }

    if (memo % 2 != 0)
    {
        reverse(dq.begin(), dq.end());
    }
    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq.at(i);
    }
    cout << endl;
    // cout << S << endl;
    return (0);
}

/* 
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 2147483647//int max
const int MOD = 1000000007;
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    deque<char> c;
    rep(i,s.length())c.push_back(s[i]);
    int q;
    cin >> q;
    ll memo = 0;
    rep(i,q){
        int t;
        cin >> t;
        if(t == 1){//t=1のとき
            //reverse(c.begin(),c.end());
            memo++;
        }else{
            int f = 0;
            cin >> f;
            if(f == 1){
                char ch;
                cin >> ch;
                if(memo%2 == 0)c.push_front(ch);
                else c.push_back(ch);
            }else{
                char ch;
                cin >> ch;
                if(memo%2 == 1)c.push_front(ch);
                else c.push_back(ch);
            }
        }
    }
    if(memo%2 != 0)reverse(c.begin(),c.end());
    rep(i,c.size())cout << c[i];
    cout << "\n";
    return 0;
}
*/