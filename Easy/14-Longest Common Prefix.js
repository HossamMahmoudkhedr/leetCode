/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    let shortest = strs[0];
    for(let i = 1; i < strs.length; i++){
        if(shortest.length > strs[i].length){
            shortest = strs[i];
        }
    }
    
    let i = 0;
    while(shortest && i <= strs.length - 1){
        if(strs[i].indexOf(shortest) !== 0){
           shortest = shortest.substring(0, shortest.length - 1)
           i = 0;
        }
        else{
            i++;
        }
    }

    return shortest
};
