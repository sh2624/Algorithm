function solution(numLog) {
    let res = '';
    for (let i = 1; i < numLog.length; i++) {
        let prev = numLog[i - 1], now = numLog[i];
        if (prev + 1 === now) res += 'w';
        else if (prev - 1 === now) res += 's';
        else if (prev + 10 === now) res += 'd';
        else res += 'a';
    }
    
    return res;
}