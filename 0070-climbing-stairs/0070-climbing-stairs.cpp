class Solution {
public:
    int climbStairs(int n) {
        if(n <= 3) {
            return n;
        }
        else {
            vector<int> array(n);
            array[0] = 1;
            array[1] = 2;
            array[2] = 3;
            
            for(int i = 3; i < n; ++i) {
                array[i] = array[i-1] + array[i-2];
            }
            return array[n-1];
        }
    }
};
