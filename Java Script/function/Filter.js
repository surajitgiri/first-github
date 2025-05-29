    // filter out even element
function fun(ele){
        if(ele%2!=0) return true;
        else return false;
    }
let arr=[1,9,6,2,5,2,3,5,]
//console.log(arr)

// let brr=arr.filter(fun)
// console.log(brr)

// arr=arr.filter((ele)=>{
//     if(ele<5)  return true;
//     else return false;
// });
// console.log(arr)

    //using ternary operator
arr=arr.filter((ele)=>{
    return (ele<7)?true:false;  // true false na dileo hobe
})
console.log(arr)

    //shortcut
    arr=arr.filter(ele=> (ele<7) )
    console.log(arr)