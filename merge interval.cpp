  
  
   int n = intervals.size();
        vector<vector<int>> ans;
        
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);
        
        for(int i = 1; i<n; i++)
        {
            if(ans.back()[1] >= intervals[i][0])    
            {
                if(ans.back()[1] < intervals[i][1])
                    ans.back() = {ans.back()[0], intervals[i][1]};
                
				else                      
                    continue;   
            }
            else                          
                ans.push_back(intervals[i]);
        }
        return ans;