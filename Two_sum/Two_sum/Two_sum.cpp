// Two_sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i < (nums.size() - 1); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}

vector<int> twoSum1(vector<int> &nums, int target)
{

    unordered_map<int, int> map;

    for (int index = 0; index < nums.size(); index++)
    {
        if (map.find(target - nums[index]) != map.end())
        {

            return {map[target - nums[index]], index};
        }
        map[nums[index]] = index;
    }
    return {};
}

int main()
{
    vector<int> v1{2, 7, 11, 15};
    int target = 18;
    vector<int> ans = twoSum1(v1, target);

    for (int x : ans)
    {
        cout << x << " ";
    }
}
