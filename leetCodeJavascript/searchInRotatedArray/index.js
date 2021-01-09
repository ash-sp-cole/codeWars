const arr = [1,2,3,4,5,6];

let low = 0;
let high = (arr.length -1);
let target = 5;


while ( low <= high ){

    let mid = (low + high) / 2;
   
    if ( arr[mid] === target){

        console.log(mid)
    
    }
    if (arr[mid] > target){
        console.log("test else if hgih")
        high = mid-1
    }
    else{
        console.log("test else if" , [mid])
        low = mid + 1
    }

}



