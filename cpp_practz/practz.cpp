#include <iostream>
#include <vector>
#include <cstring>
#include <unordered_map>

using namespace std;

void pyPat12(int n){
    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pyPat1(int n){
    for(int i = 1; i <= n ; i++){
        int count = i;
        while(count > 0){
            cout << i;
            count--;
        }
        cout<<endl;
    }
}

void pyPat2(int n){
    int k = n;
    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(j >= k) cout<<i;
            else cout << " ";
        }
        k--;
        cout<<endl;
    }
}

void pyPat3(int n){
    int k = n;
    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(j >= k) cout<< i <<" ";
            else cout << " ";
        }
        k--;
        cout<<endl;
    }
}

vector<int> bubbleSort(vector<int> nums){
    for(int i = 0 ; i < nums.size() ; i++){
        for(int j = 0; j < nums.size()-1-i; j++){
            if(nums[j] > nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    
    return nums;
}

vector<int> selectionSort(vector<int> nums){
    int min;
    for(int i = 0 ; i < nums.size()-1 ; i++){
        min = i;
        for(int j = i+1; j < nums.size(); j++){
            if(nums[min] > nums[j]){
                min = j;
            }
        }
        if(min != i){
            int temp = nums[min];
            nums[min] = nums[i];
            nums[i] = temp;
        }
    }
    
    return nums;
}

vector<int> insertionSort(vector<int> nums){
    int key;
    for(int i = 1 ; i < nums.size() ; i++){
        key = nums[i];
        int j = i-1;
        while(j>=0 && nums[j] > key){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
    }
    
    return nums;
}

bool isAnagram(string s, string t){
    if(s.length() != t.length()) return false;
    
    int arr[26];
    memset(arr,0,sizeof(arr));
    
    for(auto ch : s) arr[ch - 'a']++;
    for(auto ch : t) {
        if(arr[ch - 'a'] > 0 ) arr[ch - 'a']--;
        else return false;
    }
    
    return true;
}

vector<int> twoSum(vector<int> nums, int target){
    unordered_map<int,int> map;
    for(int i = 0 ; i < nums.size() ; i++){
        if(map.find(target - nums[i]) != map.end()){
            return {i,map[target - nums[i]]};
        }
        else map[nums[i]] = i;
    }
    return {-1,-1};
}

int main (){
    vector<int> nums = {11,46,7,4,21,57,3,1};
    vector<int> ans = twoSum(nums,24);
    
    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;
    cout << isAnagram("hello" , "llaeh");
    return 0;
}