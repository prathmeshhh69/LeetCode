class Solution {
public:
    string simplifyPath(string path) {
       vector<string>directories;
       stringstream ss(path);
       string token;

       while(getline(ss,token,'/')){
        if(token=="" || token==".")continue;

        else if(token==".."){
            if(!directories.empty())directories.pop_back();
        }
        else {
            directories.push_back(token);
        }
       }
       string ans="";
       for(string lun: directories){
        ans+="/"+lun;
       }
       if(ans.empty())ans+="/";
       return ans;
    }
};