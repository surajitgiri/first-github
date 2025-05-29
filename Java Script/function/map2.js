function add10(x){
    return x+10;
}
let arr=[5,6,4,8,9]
console.log(arr)
let brr=arr.map(add10)
console.log(brr)


// arr=arr.map(function (ele){
//     return ele+10;
// })
// console.log(arr)

arr=arr.map(ele=>ele*2);
console.log(arr);
