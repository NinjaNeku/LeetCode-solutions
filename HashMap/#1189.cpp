class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(int i=0;i<text.length();i++)
        {
            mp[text[i]]++;
        }

        int c=0;

        c=min(mp['b'],min(mp['a'],min(mp['l']/2,min(mp['o']/2,mp['n']))));
        
        return c;
    }
};