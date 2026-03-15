/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    let count0 = 0;
    let count1 = 0;
    let count2 = 0;

    for (const num of nums){
        if (num == 0){
            count0++;
        }
        else if (num == 1){
            count1++;
        }
        else if (num == 2){
            count2++;
        }
    }
    
    let index = 0;
    // while(count0--){
    //     nums[index++] = 0;
    // }
    for ( let i = 0; i < count0 ; i++){
        nums[index++] = 0;
    }
    while(count1--){
        nums[index++] = 1;
    }
    while(count2--){
        nums[index++] = 2;
    }
};