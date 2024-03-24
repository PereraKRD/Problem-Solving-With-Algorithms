// Two_sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < (nums.size()-1); i++) {
        for (int j = i + 1;j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return { i,j };
            }
        }
    }
    return {};
}


int main()
{
    vector<int> v1{2, 7, 11, 15};
    int target = 18;
    vector<int> ans = twoSum(v1, target);

    for (int x : ans) {
        cout<<x << " ";
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
