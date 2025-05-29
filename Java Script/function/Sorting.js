let arr=[1,9,2,7]
//console.log(arr)

// arr=arr.sort();     //increasing order
// console.log(arr)

// arr=arr.sort(function(a,b){      //decresing order
//     return b-a;
// })
// console.log(arr)

//shortcut
// arr=arr.sort((a,b)=>b-a)
// console.log(arr)


    //😭😭😭😭😭 it's problem
let brr=[1,-9,-2,7]
brr=brr.sort()
console.log(brr)

        //right away
// brr=brr.sort((a,b)=>a-b);
// console.log(brr)

brr=brr.sort((a,b)=>Math.abs(a)-Math.abs(b))  //important
console.log(brr)