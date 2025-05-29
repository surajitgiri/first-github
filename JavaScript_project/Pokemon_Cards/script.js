var x=document.getElementById("main")
let arr=[
"https://i.pinimg.com/736x/ed/54/76/ed547659c33303e707de0e56957a26d9.jpg",
"https://i.pinimg.com/736x/27/e9/d2/27e9d24bfb7838e064817132a5b23015.jpg",
"https://i.pinimg.com/736x/e9/c3/3c/e9c33c982293949b25091fa6930943aa.jpg",
"https://i.pinimg.com/736x/91/f3/1e/91f31e030f9d64500f66cd6f87966e63.jpg",

"https://i.pinimg.com/736x/27/89/a6/2789a6cccc54738eb473411e0081b4f4.jpg",
"https://i.pinimg.com/736x/36/e7/ba/36e7ba2767f221dd17cfde23361d916c.jpg",
]
var s=""
for(let i=1;i<=120;i++){
    let x=Math.floor(Math.random()*6)
    s +=`<div class="card"><img src=${arr[x]}></div>`
}
x.innerHTML=s

