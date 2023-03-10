class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long mn = INT_MAX, cnt = 0, sum = 0;
        for(auto r : matrix) {
            for(int i : r) {
                if(i < 0) cnt++;
                mn = min(mn, (long long)abs(i));
                sum += abs(i);
            }
        }
        return cnt % 2 ? sum - 2 * mn : sum;
    }
};
