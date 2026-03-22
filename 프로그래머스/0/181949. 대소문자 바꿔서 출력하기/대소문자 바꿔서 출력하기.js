const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];

rl.on('line', function (line) {
    input = [line];
}).on('close',function(){
    str = input[0];
    
    let res = "";
    
    for (let i = 0; i < str.length; i++) {
        let char = str[i];
        
        if (char === char.toUpperCase()) {
            res += char.toLowerCase();
        } else {
            res += char.toUpperCase();
        }
    }
    
    console.log(res);
});