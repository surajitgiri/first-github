//object is kind of like map/dictionary  where we have "key-values" pairs

var details=["surajit",18,92.4,false]

let x ={
    name:"surajit",
    //"name":"surajit",            -> erokom o korte pari
    age:18,
    'percentage':92.4,
    ismarried: false
}
// console.log(x)
 //console.log(x.age,x.name,x.ismarried,x['percentage'])
// console.log(x['age']);
// console.log(x['name']);
// console.log(x['percentage']);

        //for replace in item
//x.age=65;
 //or  x['age']=65;
//console.log(x)

//use of loops

for (const key in x) {
   console.log(key,x[key]);
}