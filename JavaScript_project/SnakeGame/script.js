//game constants    & variables
let inputDir = {x: 0, y: 0};
const foodsound = new Audio("food.mp3");
const gameoversound = new Audio("gameover.mp3");
const movesound= new Audio("move.mp3");
const musicsound= new Audio("music.mp3");
let speed =5;
let score=0;
let lastPaintTime = 0;
let snakeArr=[
    {x:13 ,y:15}
]
food = {X:6, y:7};

//Game Function
function main(ctime){
    window.requestAnimationFrame(main);
    //console.log(ctime);
    if((ctime-lastPaintTime)/1000 < 1/speed){
        return ;
    }
    lastPaintTime=ctime;
   GameEngine();
}

function isCollide(sarr){
    return false;
}
 function GameEngine(){
            // part1 : updating the snake array & food
        if(isCollide(snakeArr)){
            gameoversound.play();
            musicsound.pause();
            inputDir={x:0,y:0};
            alert("Game Over. press any key to play again!");
            snakeArr=[{x:13,y:15}];
            musicsound.play();
            score=0;

        }

//  if snake have eaten the food, increament score and reGenarate the food
        if(snakeArr[0].y===food.y  && snakeArr[0].x===food.x){
            foodsound.play();
            snakeArr.unshift({x:snakeArr[0].x + inputDir.x , y:snakeArr[0].y + inputDir.y });
            let a= 2;
            let b= 16;
            food={x:Math.round(a+(b-a)*Math.random()) , y:Math.round(a+(b-a)*Math.random())}
        }

//moveing the snake
for (let i = snakeArr.length-2; i >=0; i--) {
    const element = array[i];
    snakeArr[i+1]={...snakeArr[i]}
}
snakeArr[0].x += inputDir.x;
snakeArr[0].y += inputDir.y;

            // part2 : Display the snake and food
            // Display the Snake
    board.innerHTML="";
    snakeArr.forEach((e, index)=>{
        snakeElement=document.createElement('div');
        snakeElement.style.gridRowStart = e.y;
        snakeElement.style.gridColumnStart = e.x;
       
        if(index===0){
            snakeElement.classList.add('head');
        }
        else{
            snakeElement.classList.add('snake');
        }
       
        board.appendChild(snakeElement);

    });
        //display the food
        
        foodElement=document.createElement('div');
        foodElement.style.gridRowStart = food.y;
        foodElement.style.gridColumnStart = food.x;
        foodElement.classList.add('food');
        board.appendChild(foodElement);
 }







// Main logic start here
window.requestAnimationFrame(main);
window.addEventListener('keydown', e=>{
    inputDir={x:0,y:1}  // start the game
    movesound.play();
    switch (e.key) {
        case "ArrowUp":
            console.log("ArrowUp");
            inputDir.x= 0;
            inputDir.y= -1;
            break;

        case "ArrowDown":
                console.log("ArrowDown");
                inputDir.x= 0;
            inputDir.y= 1;
                break;

        case "ArrowLeft":
               console.log("ArrowLeft");
               inputDir.x=-1 ;
            inputDir.y= 0;
               break;

        case "ArrowRight":
                console.log("ArrowRight");
                inputDir.x=1 ;
            inputDir.y=0 ;
                break;
    
        default:
            break;
    }

})