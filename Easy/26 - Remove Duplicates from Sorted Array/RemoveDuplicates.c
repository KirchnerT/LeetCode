public class Solution {
    public int RemoveDuplicates(int[] nums) {
        int numElements = 0;

        for (int i = 0; i < nums.Length; i++) {
            if (Array.IndexOf(nums, nums[i]) >= numElements) {
                nums[numElements] = nums[i];
                numElements++;
            }
        }

        return numElements;
    }
}
