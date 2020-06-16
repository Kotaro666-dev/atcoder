/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 19:03:43 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/16 20:11:25 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ’+‘から’+‘の間で0が出てこなかったら答えにカウントするというようにして実装
// ノートに数式を書いて、数学的法則を考えるべきだった

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    string S;
    cin >> S;

    ll plus = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '+')
        {
            plus++;
        }
    }

    bool isZero = S[0] == '0' ? true : false;
    bool finalZero = false;
    ll ans = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '+')
        {
            if (isZero == false)
            {
                ans++;
            }
            isZero = false;
            plus--;
        }
        if (S[i] == '0' && plus > 0)
        {
            isZero = true;
        }

        if (plus == 0)
        {
            if (S[i] == '0')
            {
                finalZero = true;
            }
        }
    }
    if (finalZero == false)
    {
        ans++;
    }
    cout << ans << endl;
}

// int main(void)
// {
//     string S;
//     cin >> S;

//     stack<char> box;
//     ll res = 0;
//     for (int i = 0; i < S.size() - 1; i++)
//     {
//         if (S[i] == '*')
//         {
//             // check if stack box is empty
//             // if not the stack box is not empty
//             ll num = box.top() - '0';
//             box.pop();

//             // cout << (S[i + 1] - '0') << " * " << num << endl;
//             string temp = to_string((S[i + 1] - '0') * num);
//             box.push(temp);
//         }
//         else
//         {
//             box.push(S[i]);
//         }
//     }

//     while (box.empty() != true)
//     {
//         cout << box.top() << " ";
//         box.pop();
//     }

//     return (0);
// }