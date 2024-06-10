/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    let occurrence = -1;
    for(let i = 0; i<haystack.length; i++){
        if(needle[0] === haystack[i]){
            occurrence = i;
            
            for(let j = 1;j<needle.length;j++){
                if(needle[j] !== haystack[i+j]){
                    occurrence = -1;
                    break;
                }
            }
            
            if(occurrence !== -1){
                break;
            }
        }
    }
    return occurrence;
};
