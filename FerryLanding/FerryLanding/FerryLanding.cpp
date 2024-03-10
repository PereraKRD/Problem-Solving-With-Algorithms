#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n > 0) {
        int l, m;
        cin >> l >> m;
        queue<int> right;
        queue<int> left;
        for (int i = 0; i < m; i++) {
            int len;
            string side;

            cin >> len >> side;
            if (side == "left") {
                left.push(len);
            }
            else
                right.push(len);
        }
        int count = 0;
        while (left.size() > 0 || right.size() > 0) {
            int l_remain = l;
            while (left.size() > 0 && left.front() <= l_remain) {
                l_remain -= left.front();
                left.pop();
            }
        count++;

        if (left.size() == 0 && right.size() == 0) {
            break;
        }
        int r_remain = l;
        while (right.size() > 0 && right.front() <= r_remain) {
            r_remain -= right.front();
            right.pop();
        }
        count++;
        }
        cout << count << endl;
        n--;
    }
    
}



//
//#include <iostream>
//#include <vector>
//#include <string>
//#include <queue>
//
//using namespace std;
//
//int main() {
//    int cases;
//    cin >> cases;
//
//    while (cases--) {
//        int size, cars;
//        cin >> size >> cars;
//        size *= 100;
//
//
//        queue<int> r;
//        queue<int> l;
//        for (int i = 0; i < cars; i++) {
//            int size;
//            string side;
//            cin >> size >> side;
//
//            if (side == "left") {
//                l.push(size);
//            }
//            if (side == "right") {
//                r.push(size);
//            }
//        }
//
//        int trips = 0;
//        while (l.size() > 0 || r.size() > 0) {
//            int l_remaining = size;
//            while (l.size() > 0 && l.front() <= l_remaining) {
//                l_remaining -= l.front();
//                l.pop();
//            }
//            trips++;
//
//            if (l.size() == 0 && r.size() == 0) {
//                break;
//            }
//
//            int r_remaining = size;
//            while (r.size() > 0 && r.front() <= r_remaining) {
//                r_remaining -= r.front();
//                r.pop();
//            }
//            trips++;
//        }
//
//        cout << trips << endl;
//    }
//}
























//
//#include <iostream>
//#include <unordered_map>
//#include <string>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//    int t;
//    vector<int> v1;
//    cin >> t;
//
//    for (int i = 0; i < t; i++) {
//        double l, m;
//        int ans = 0;
//        cin >> l >> m;
//        unordered_map<string, int> map;
//
//        for (int i = 0; i < m; i++) {
//            string s;
//            double len;
//            cin >> len >> s;
//            map[s] += len;
//        }
//        if (map["right"] == 0) {
//            ans = 2 * ceil((map["left"] / (l * 100.0))) - 1;
//        }
//        else if (map["left"] == 0) {
//            ans = 2 * ceil((map["right"] / (l * 100.0)));
//        }
//        else if (ceil((map["left"] / (l * 100.0))) == 1 && ceil(1.0 * (map["right"] / (l * 100.0))) == 1) {
//            ans = 2;
//        }
//        else if (2 * ceil((map["left"] / (l * 100.0))) < ceil(1.0 * (map["right"] / (l * 100.0)))) {
//            ans = 2 * ceil((map["right"] / (l * 100.0))) - 1;
//        }
//        else 
//            ans = 2 * ceil((map["left"] / (l * 100.0))) - ceil(1.0 * (map["right"] / (l * 100.0)));
//
//        v1.push_back(ans);
//    }
//
//    for (int x : v1) {
//        cout << x << endl;
//    }
//}
