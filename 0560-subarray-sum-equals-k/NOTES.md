Solution - I (Brute force, TLE)-

Since we are very obedient person and don't want to do anything extra from our side.
So, we will try to generate the sum of each subarray and if matches withk , then increment our answer.
Like, this is the most basic thing we can do.
Time Complexity --> O(n ^ 2) // where n is the size of the array
Space Complexity --> O(1) // we are not using anything extra from our side
-----------------
int subarraySum(vector<int>& arr, int k) {
        int n = arr.size(); // taking the size of the array
        
        int ans = 0; // ans variable to store our count
        
        for(int i = 0; i < n; i++) // traverse from the array
        {
            int sum = arr[i]; // provide sum with arr[i]
            
            if(sum == k) // if element itself equal to k, then also increment count
                ans++;
            
            for(int j = i + 1; j < n; j++) // now moving forward,
            {
                sum += arr[j]; // add elements with sum
                
                if(sum == k) // if at any point they become equal to k
                    ans++; // increment answer
            }
            
        }
        
        return ans; // and at last, return answer
    }
  -------------------------
  
Solution - II (Concept of prefix sum, Accepted)-

So, can we optimise our code.
Answer is yes, .
Instead of traversing the whole array every time, can we able to store prefix sum already and then check with that.
So, with the help of an unordered map, we will store sum.
  
----------------
  
