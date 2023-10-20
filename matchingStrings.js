function matchingStrings(stringList, queries) {

    let arr = [];
    let count = 0;

    for(let i=0; i<queries.length; i++){
        for(let j=0; j<stringList.length; j++){
            if(queries[i] === stringList[j]){
                count += 1;
            }
        }
        arr[i] = count;
        count = 0;
    }
    return arr;    
}

console.log(matchingStrings(stringList=['ab','ab', 'abc'], queries=['ab', 'abc', 'bc']));