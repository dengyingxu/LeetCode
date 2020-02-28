/*************************************************************************
	> File Name: LeetCode-287.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 13时13分03秒
 ************************************************************************/
class Solution {
    public int findDuplicate(int[] nums) {
        int slow = 0;
        int fast = 0;
        slow = nums[slow];
        fast = nums[nums[fast]];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        int pre1 = 0;
        int pre2 = slow;
        while(pre1 != pre2){
            pre1 = nums[pre1];
            pre2 = nums[pre2];
        }
        return pre1;
    }
}

