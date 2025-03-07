/*

Problem link - https://leetcode.com/problems/median-of-two-sorted-arrays/description/

Leetcode 4 - Median of Two Sorted Arrays

Date- 07/03/2025

TC - O(Log(Min(Nums1.Size(),Nums2.Size())))
SC - O(1)

*/
class Solution {
    public:
        double ans(vector<int>& small, vector<int>& large,int high){
            int low=0;
            int totalSize=(small.size()+large.size())/2;
            while(low<=high){
                int mid=low+((high-low)/2);
                int leftSmall=(mid>0)?small[mid-1]:INT_MIN;
                int leftLarge=(totalSize-mid>0)?large[totalSize-mid-1]:INT_MIN;
                int rightSmall=(mid<small.size())?small[mid]:INT_MAX;
                int rightLarge=(totalSize-mid<large.size())?large[totalSize-mid]:INT_MAX;
                if(leftSmall<=rightLarge && leftLarge<=rightSmall){
                    if((small.size()+large.size())%2==0){
                        return (double)(max(leftSmall,leftLarge)+min(rightSmall,rightLarge))/2;
                    }
                    return min(rightSmall,rightLarge);
                }
                else if(leftSmall>rightLarge){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }

            }
            return 0;
        }
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            int size=min(nums1.size(),nums2.size());
            if(size==nums1.size()){
                return ans(nums1,nums2,size);
            }
            return ans(nums2,nums1,size);
        }
    };