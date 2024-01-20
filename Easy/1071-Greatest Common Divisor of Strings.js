//The idea is to use recursion.

var gcdOfStrings = function(str1, str2) {
    //chosse the bigger string
    if(str1.length < str2.length){
        // recur wit (str2, str1)
        return gcdOfStrings(str2, str1)
    }else if(!str1.startsWith(str2)){
        // If the bigger string doesn't start with the smallesr one then return ""
        return ""
    }else if(str2.length == 0){
        // if the second string is empty that means str1 consists of multible str2 concatinated with each othre
        return str1
    }else{
        return gcdOfStrings(str1.substring(str2.length), str2)
    }
}
