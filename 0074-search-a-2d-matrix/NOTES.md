---------1st approach
Traverse all matrix , T.C-> O(m*n)

---------2nd Approach
in every row apply binary search , T.C->O(n*logm)

---------3rd Approach
![image](https://user-images.githubusercontent.com/97017655/204081899-c21991a0-642e-4a87-9240-2bd56fdca838.png)

 int i=0;
        int j=matrix[0].size()-1;
        while(i<matrix.size() and j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]<target){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
        
-----------4th very optimal
imagine it is like a long array of m*n elements
 int row=matrix.size();
        int col=matrix[0].size();
        int start=0;
        int end=row*col-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(matrix[mid/col][mid%col]==target)return true;
            else if(matrix[mid/col][mid%col]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
