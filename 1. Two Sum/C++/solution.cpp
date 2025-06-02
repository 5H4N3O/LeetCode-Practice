#include <vector>
#include <iostream>
//
// Created by shane on 6/2/2025.
//
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    result = {i,j};
                }
            }
        }
        return result;
    }
};