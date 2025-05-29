function OnetoN(n){
    for(let i=1;i<=n;i++){
        console.log(i)
    }
    console.log( );
}

// OnetoN(20)
// OnetoN(7)

function eqn( a,b){
    return  Math.abs(a*a*a) + Math.abs(b*b*b);
}
let a=eqn(2,3)
console.log(a)
// let a=-2;
// let b=3
// console.log(Math.abs(a*a*a)+Math.abs(b*b*b))