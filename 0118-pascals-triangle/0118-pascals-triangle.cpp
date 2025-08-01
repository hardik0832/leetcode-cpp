class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>result;
        vector<int> previous;
        while(n--){
            int ps=previous.size();
            vector<int> current;
            for(int i=0;i<=ps;i++){
                if( i==0 || i == ps){current.push_back(1);}
                else{
                    current.push_back(previous[i-1] + previous[i]);
                }
            }
            result.push_back(current);
            previous = current;
        }
        return result;
        
    }
};