 class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int size = m + n;
        
        
        vector<int> add(size);

         
        for (int i = 0; i < m; i++) {
            add[i] = nums1[i];
        }

        
        for (int i = 0; i < n; i++) {
            add[m + i] = nums2[i];
        }

        
        sort(add.begin(), add.end());

        
        for (int i = 0; i < size; i++) {
            nums1[i] = add[i];
        }
    }
};
