/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNonDuplicate = function(nums) {
    let i = 0;
    let j = nums.length - 1 ;
    while (i <= j){
        if (nums[i] == nums[i+1]){
            i ++ ;
        }
        else {
            return nums [i];
        }
        if(nums[j] == nums [j-1]){
            j--;
        }
        else {
            return nums[j];
        }
        i++;
        j--;
    }
    return -1;
};

// [1,1,2,3,3,4,4,8,8]