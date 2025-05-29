let x=document.getElementById("ele1")
x.addEventListener("click",function(){
    x.style.backgroundColor="yellow"
    x.style.color="red"
})

x.addEventListener("mouseleave",function(){
    x.style.backgroundColor="white"
    x.style.color="black"
})


let y=document.getElementById("ele2")
y.addEventListener("mousemove",function(){  //mousemove/mouseenter
    y.style.backgroundColor="orange"
    y.style.color="white"
})


y.addEventListener("mouseleave",function(){  //mousemove/mouseenter
    y.style.backgroundColor="white"
    y.style.color="black"
})


let z=document.getElementById("ele3");
y.addEventListener("click",function(){
    z.style.color="white";
    z.style.backgroundColor="purple"
})

z.addEventListener("click",function(){
    x.innerHTML="Surajit"
    x.style.color="white";
    x.style.backgroundColor="blue";
})

