// callback function ek esa function hota hai jo ek function ke ander ke andder pass hota hai

// function product(a,b,c){
//     return a*b*c;
// }

// function fun(x,y){
//    let a =x(2,5,4);
//    console.log(a-y)
// }

// fun(product,7)

function product(a,b,c){
    return a*b*c;
}
function fun(x,y){
    let a=x(2,5,4);
    console.log(a-y);
}
fun(product,7);