class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) { 
        if(strs.size()==1)
            return strs[0];
        
        string substr="";
        for(int i=0;i<min(strs[0].size(),strs[1].size());i++){
            if(strs[0][i] == strs[1][i])
                substr += strs[0][i];
            else
                break;
        }
        
        if(strs.size()==2)
            return substr;
        else{//substr 跟接下來的比
            for(int i=2;i<strs.size();i++){
                cout << strs[i] << " ";
                string t_substr="";
                for(int j=0;j<min(substr.size(),strs[i].size());j++){
                    if(substr[j] == strs[i][j])
                        t_substr += substr[j];
                    else
                        break;
                }
                cout << t_substr << endl;
                if(t_substr == "")
                    return "";
                if(t_substr.size() < substr.size())
                    substr = t_substr;
            }
            
            
        }
        
        
        return substr;
    }
};
