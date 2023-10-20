class Conversion{
    constructor(number){
        this.number = number;
    }
    decimal(){
        console.log("decimal", this.number);
    }
}

const numbers = new Conversion();
numbers.decimal(25);