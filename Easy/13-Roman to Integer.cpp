// Search for any compinations
// calculate them
// remove them from the string
// calculate the rest of the numbers

class Solution {
public:

    // Call the string by reference
    int findCompinations(string comp, string &s){
        int number = 0;
        if(s.find(comp) != -1){
            if(comp == "IV"){
                number = 4;
            }else if(comp == "IX"){
                number = 9;
            }else if(comp == "XL"){
                number = 40;
            }else if(comp == "XC"){
                number = 90;
            }else if(comp == "CD"){
                number = 400;
            }else if(comp == "CM"){
                number = 900;
            }
            s.erase(s.find(comp), 2);
        }
        return (number);
    }

    int romanToInt(string s) {
        int result = 0;
        string romainNumbers = "IVXLCDM";
        int romainToInteger[7] = {1, 5, 10, 50, 100, 500, 1000};

        int findIV = findCompinations("IV", s);
        int findIX = findCompinations("IX", s);
        int findXL = findCompinations("XL", s);
        int findXC = findCompinations("XC", s);
        int findCD = findCompinations("CD", s);
        int findCM = findCompinations("CM", s);
        result += findIV + findIX + findXL + findXC + findCD + findCM;

        for (int i = 0; i < s.length();i++){
            int romainNumber = romainToInteger[romainNumbers.find(s[i])];
            result += romainNumber;
        }
        return (result);
    }
};
