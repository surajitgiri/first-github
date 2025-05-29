// let arr=[1,-6,-3,8];
// console.log(arr)
// let brr=[]
// for (const ele of arr) {
//     brr.push(Math.abs(ele))
// }
// console.log(brr)


    //alternative

// function add10(ele){
//     return ele+10;
// }
// let arr=[1,-6,-3,8];
// console.log(arr)
// let brr=arr.map(add10)
// console.log(brr);


    //changing element

// function add10(ele){
//     return ele+10;
// }
// let arr=[1,-6,-3,8];
// console.log(arr)
// arr=arr.map((ele)=>{
//     return ele*ele
// })
// console.log(arr);


let arr=[1,-6,-3,8];
console.log(arr)
let brr=[];
for(let ele of arr){
    brr.push(Math.abs(ele))
}   
console.log(brr);

arr=arr.map(ele=>ele*2);
console.log(arr)
