class Solution {
public:
    int getSecondLargest(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        auto it = arr.rbegin();
        while (*it == *(++it))continue;
        if (it != arr.rend())return *it;
        else return -1;
    }
};