/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let charStack = [];
    charStack.push(s[0])
    for(let i = 1; i<s.length; i++){
        let top = charStack[charStack.length - 1];
        if((top === '(' && s[i] === ')') || (top === '{' && s[i] === '}') || (top === '[' && s[i] === ']')){
            charStack.pop()
        }else{
            charStack.push(s[i])
        }
    }
    if(charStack.length === 0){
        return true
    }else{
        return false
    }
};
