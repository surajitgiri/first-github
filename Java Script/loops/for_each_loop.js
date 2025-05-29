arr=[3,5,8,9,7,6]
console.log(arr);
// arr.forEach((ele,arr) => {
//     //console.log(ele,i,arr);
//     ele*=2;
//     console.log(ele)
// });
// console.log(arr);

// arr.forEach((ele,arr )=> {
//     ele*=2;
// });
// console.log(arr)

for (let ele of arr){
    arr=arr.push(ele*ele) ;
}
console.log(arr)