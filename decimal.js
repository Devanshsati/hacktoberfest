function decimal(number){

    let decaNumber = "";

    while(number !==0){

        decaNumber += (number % 2).toString();

        number = Math.floor(number/2);
    }

    decaNumber = decaNumber.split("").reverse();
    decaNumber = parseInt(decaNumber.join(""));

    return decaNumber;
}

console.log(decimal(10110));