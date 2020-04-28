class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int T) 
    {
        unordered_map<int,int> max_ends(clips.size());
        for(vector<int> &clip:clips)                                            //Get max end for each starting point.
            max_ends[clip[0]]=max(max_ends[clip[0]],clip[1]);
        int selectedEnd=-1,reachableEnd=0,count=0;
        for(int i=0;i<=T;i++)
        {
            if(reachableEnd>=T||i>reachableEnd)        //If there is a break between clips or we already reached the end, return
                break;
            if(max_ends.count(i))                                 //If clip with i as starting point exists.
            {
                if(i>selectedEnd)                   //Increase the count if starting point is greater than previously selected clip end
                    count++,selectedEnd=reachableEnd;              //New selected clip ends at max end
                reachableEnd=max(reachableEnd,max_ends[i]);//Maximize reachable end till starting point is less than or equal to previously selected clip
            }
        }
        return reachableEnd>=T?count:-1;
    }
 
};