int start = 0;
        int end = nums.size() - 1;
        int ind = -1;
        int target = x;
        int found = 0;

        while(start <= end){
            int mid = start + (end-start)/2;

            if(nums[mid] == target){
                start = mid+1;
            }

            else if(nums[mid] < target){
                start = mid+1;
            }

            else{
                end = mid-1;
                ind = mid;
                
            }
        }
        if(ind == -1){
            return nums.size();
        }
        else{
            return ind;
        }