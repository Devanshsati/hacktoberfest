function getNumber(binary){
    let number = 0;

    binary = binary.split("");

    for(let i=0; i<binary.length; i++){

        number += Math.pow(2, binary.length - (i+1)) * binary[i];
    }

    return number
}

console.log(getNumber(binary = "10110"));