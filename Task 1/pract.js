// let stack = [];
// stack.length == 0 ? console.log('stack is empty') : console.log("stack is not empty")
// stack.unshift(1);
// console.log(stack)
// stack.unshift(2);
// stack.unshift(3);
// console.log(stack)
// stack.shift()
// console.log(stack);

const reverseString = (str) => {
    let stack = [], reversed; //hello
    for(let char of str){
        stack.unshift(char);
    }
    for(let ele of stack){
        reversed+=ele;
    }
    console.log(reversed)

}

reverseString('hello')