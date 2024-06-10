/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    let occurrence = -1;
    for(let i = 0; i<haystack.length; i++){
        if(needle[0] === haystack[i]){
            let j
            for( j = 1;j<needle.length;j++){
                if(needle[j] !== haystack[i+j]){
                    break;
                }
            }
            
            if(j === needle.length){
                occurrence = i;
                break;
            }
        }
    }
    return occurrence;
};
