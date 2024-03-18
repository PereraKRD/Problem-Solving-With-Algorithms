#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int F(int n) {
    if (n == 0)return 0;
    if (n == 1)return 1;
    return F(n - 1) + F(n - 2);
}

int main() {

    /*
    string s, str;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            str = s.substr(i);
            break;
        }
    }

    cout << str;
    */

    /*
    int num;
    cin >> num;
    cout << ceil(log2(num)) + 1;
    */

    /*
    int p,j;
    cin >> p;
    vector<int> v;


    for (int i = 0; i < p; i++) {
        cin >> j;
        v.push_back(j);
    }
    sort(v.rbegin(), v.rend());

    int count_A = 0, count_B = 0;

    for (int i = 0; i < p; i++) {
        if (i % 2 == 0) count_A += v[i];
        else count_B += v[i];
    }

    cout << count_A << " " << count_B;
    */

    int one = 2, two = 1, three = 1;
    int n;
    cin >> n;

    if (n == 1) {
        one = 1;
    }
    else{
    for (int i = 0; i < n - 2; i++) {
        int temp = one, temp2 = two;
        one = one + two + three;
        two = temp;
        three = temp2;
    }
    }

    cout << one;

    return 0;
}