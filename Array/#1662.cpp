class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string A, B;
        bool result;
        for(int i=0; i<word1.size(); i++){
            A +=word1[i];
        }
        for(int i=0; i<word2.size(); i++){
            B +=word2[i];
        }
        if(A==B) result=true;
        else result = false;
        
        return result;
    }
};