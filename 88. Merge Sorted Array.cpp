class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int sm=m-1,sn=n-1,total=m+n-1;
        while(sm>=0 && sn>=0)
        {
                if(nums1[sm]<nums2[sn])
                {
                    nums1[total]=nums2[sn];
                    sn--;
                    total--;
                }
                else
                {
                    nums1[total]=nums1[sm];
                    sm--;
                    total--;
                }            
        }
        while(sn>=0)
        {
            nums1[total]=nums2[sn];    
            sn--;
            total--;
        }

    }
};