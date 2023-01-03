class Solution {
    public int maxRotateFunction(int[] nums) {
        int sum = 0, F = 0, n = nums.length;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            F += i * nums[i];
        }
        int max = F;
        for (int i = n - 1; i > 0; i--) {
            F = F + sum - n * nums[i];
            max = Math.max(max, F);
        }
        return max;

    }
}

//Run time = 13ms
//Memory = 85.9MB
