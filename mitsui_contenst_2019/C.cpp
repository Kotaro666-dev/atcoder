/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 11:14:38 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/29 11:23:35 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

/*
    100 to 105
 */

/* After reading the answer */
int main(){
    int x;
    cin >> x;
    int a = x/100;
    int b = x%100;
    if(a*5<b){
        cout << '0' << endl;
    }else{
        cout << '1' << endl;
    }
    return 0;
}

/* MY STUPID IDEA */
// int main()
// {
//     int sum;
//     cin >> sum;

//     vector<int> item(6);
//     int base = 100;
//     for (int i = 0; i < 6; i++)
//     {
//         item.at(i) = base + i;
//     }

//     bool found = false;

//     for (int i = 0; i < 100; i++)
//     {
//         for (int j = 0; j < 100; j++)
//         {
//             for (int k = 0; k < 100; k++)
//             {
//                 for (int l = 0; l < 100; l++)
//                 {
//                     for (int m = 0; m < 100; m++)
//                     {
//                         for (int n = 0; n < 100; n++)
//                         {
//                             if ((item.at(0) * i) + (item.at(1) * j) + (item.at(2) * k) + (item.at(3) * l) + (item.at(4) * m) + (item.at(5) * n) == sum)
//                             {
//                                 found = true;
//                                 goto end;
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     end:
//     cout << found << endl;
// }
    
