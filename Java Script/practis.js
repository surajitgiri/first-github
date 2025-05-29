function fun(ele){
    if(ele%2!=0) return true;
    else return false;
}

let brr=[]
let arr=[2,5,8,9,7,6,3,2];
arr=arr.filter((ele)=>{
    return (ele<7)?true:false;
})
console.log(arr);

 brr=arr.filter(fun)
console.log(brr);