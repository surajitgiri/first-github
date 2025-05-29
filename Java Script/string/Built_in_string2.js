let s="surajit giri is a student at jadavpur university"
console.log(s)
let arr=s.split(' ');   // here gap ka bais pe split hota hay
console.log(arr)
for(const ele of arr){
    console.log(ele);
}

let s2="a,gh,hk,ram,"
let brr=s2.split(',')        // here comma (,) ka bais pe split hota hay
for(const ele of brr){
    console.log(ele)
}
console.log(s2.split(','));