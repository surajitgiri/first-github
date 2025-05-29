//print 1 to 10 but with delay of 1 sec after each number gets printed
// function print(i){
//    console.log(i,)
// }

for(let i=1;i<=10;i++){
  setTimeout(function(){    // for reverse printing
    console.log(11-i);
  },i*300)
}
// for(let i=1;i<=10;i++){
//     setTimeout(function(){
//       console.log(i);
//     },i*100)
//   }



    // it's possible

// setTimeout(function (){
//     console.log("hello")
// },3*1000)
// setTimeout(function (){
//     console.log("how are you? ")
// },2.5*1000)

// setTimeout(function(){
//     console.log("my name is surajit")
// },2*1000)