class Solution {
public:
    int countTriples(int n) {
        int squares[n+1];
        int count = 0;
        int left, right, sum;
        for (int i = 0; i < n+1; ++i) {
            squares[i] = i * i;
            left = 0;
            right = i - 1;
            while (left < right) {
                sum = squares[left] + squares[right];
                if (sum == squares[i]) {
                    count += 2;
                    left++;
                    continue;
                }
                if (sum < squares[i]) {
                    left++;
                    continue;
                }
                right--;
            }
        }
        return count;
    }
};