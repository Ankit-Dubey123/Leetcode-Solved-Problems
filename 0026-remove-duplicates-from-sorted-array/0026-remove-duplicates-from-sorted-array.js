/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    const sett = new Set();
    let ind = 0;
    for (const num of nums){
        if(!sett.has(num)){
            sett.add(num);
            
            nums[ind] = num;
            ind++;
        }
    }
    return ind ;
};