class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(m);
        int i;
        for(i=0;i<m;++i)
        {
            temp[i]=nums1[i];
        }
        int j = 0, k = 0;  
        // Initialize j to 0
        i=0;
        while(i<m && j<n)
        {
            if(temp[i]<=nums2[j])
            {
                nums1[k]=temp[i];
                ++i;
            }
            
            else
            {
                nums1[k]=nums2[j];
                ++j;
            }
            ++k;
        }
        while(i<m)
        {
            nums1[k]=temp[i];
            ++i;
            ++k;
        }
        while(j<n)
        {
            nums1[k]=nums2[j];
            ++j;
            ++k;
        }
        
    }
};
