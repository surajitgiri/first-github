arr=[3,7,8,9,6,5]
// console.log(arr)
// for(let i=0;i<arr.length;i++){
//     arr[i]*=2
// }
// console.log(arr)

for (let ele of arr) {      // this called as 'for of' loop
    ele*=2;
    console.log(ele)    // use this loop  index is not printable
}
console.log(arr);