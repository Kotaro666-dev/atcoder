/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 11:41:19 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/10 11:55:14 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p.at(i);
    }

    vector<int> three_num(3);
    int ans = 0;
    int check_pi;
    for (int i = 1; i < n - 1; i++)
    {
        check_pi = p.at(i);
        three_num = {p.at(i - 1),
                     p.at(i),
                     p.at(i + 1)};

        sort(three_num.begin(), three_num.end());
        if (three_num.at(1) == check_pi)
            ans++;
    }

    /*
    for(int i = 1; i < n - 1; i++) 
    {
        if((p[i - 1] < p[i]) && (p[i] < p[i + 1]))
            ans++;
        else if((p[i - 1] > p[i]) && (p[i] > p[i + 1]))
            ans++;
    }
    
     */
    cout << ans << endl;
    return 0;
}
