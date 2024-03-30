
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <unordered_set>

using namespace std;


int main()
{
	string str,s;
	getline(cin,str);
    istringstream ss(str);
    unordered_set<string> set;

    while (ss >> s) {
        if (set.find(s) != set.end()) { //IN HERE IF WE CAN'T FIND THE KEY IT WILL EQUALS TO mp.end()
            cout << "no";
            return 0;
        }
        else
            set.insert(s);
    }

    cout << "yes";
	return 0;
}

//USING MAPS
/*
    string str,s;
    getline(cin,str);
    istringstream ss(str);
    unordered_map<string, int> mp;

    while (ss >> s) {
        if (mp.find(s) != mp.end()) { //IN HERE IF WE CAN'T FIND THE KEY IT WILL EQUALS TO mp.end()
            cout << "no";
            return 0;
        }
        else
            mp[s] = 1;
    }

    cout << "yes";
    return 0;
*/

//USING FOR LOOPS
/*
    string str,s;
    getline(cin,str);
    vector<string> v1;
    istringstream ss(str);
    bool isyes = false;
    while (ss >> s)
    {
        for (auto& x : s)
            x = tolower(x);
        v1.push_back(s);
    }

    for (int i = 0; i < v1.size()-1; i++) {
        for (int j = i + 1;j< v1.size(); j++) {
            if (v1[i] == v1[j]) {
                isyes = true;
                break;
            }
        }
    }

    if (isyes) {
        cout << "no";
    }
    else
        cout << "yes";
*/