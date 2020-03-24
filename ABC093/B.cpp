/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 13:02:43 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/24 13:49:17 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main()
{
    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);
    for (int i = a; i <= min(b, a + k - 1); i++)
        printf("%d\n", i);
    for (int i = max(b - k + 1, a + k); i <= b; i++)
        printf("%d\n", i);
    return (0);
}

/* 
int main(void)
{
    ll A, B;
    cin >> A >> B;
    int K;
    cin >> K;

    vector<ll> container;
    // 小さい方からK番目以内
    for (int i = A; i < min(A + K, B); i++)
    {
        container.push_back(i);
    }

    //大きい方からK番目以内
    for (int i = max(B - K + 1, A); i <= B; i++)
    {
        container.push_back(i);
    }

    sort(container.begin(), container.end());
    bool unique;
    for (int i = 0; i < container.size() - 1; i++)
    {
        unique = true;
        for (int j = i + 1; j < container.size(); j++)
        {
            if (container[i] == container[j])
            {
                unique = false;
            }
        }
        if (unique == true)
        {
            cout << container[i] << endl;
        }
    }
    cout << container[container.size() - 1] << endl;

    return (0);
}
*/