class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char,int> roman_numerals={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };

        int result=0;
        for(int i=0;i<s.length();i++){
            int current_value=roman_numerals[s[i]];
            if(i>0 && current_value>roman_numerals[s[i-1]]){
                result+=current_value-2*roman_numerals[s[i-1]];
            }
            else{
                result+=current_value;
            }
        }
        return result;
    }
};