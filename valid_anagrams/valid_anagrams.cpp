#include <iostream>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    unordered_map<char, int> umap;
    for (auto ch : s) {
        umap[ch]++;
    }
    for (auto ch : t) {
        umap[ch]--;
        if (umap[ch] < 0) {
            return false;
        }
    }
    return true;
}

bool isAnagram2(string s, string t) { 
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t; 
    }

int main() {
    string s = "garden";
    string t = "danger";
    cout << isAnagram2(s, t) << endl;
    return 0;
}