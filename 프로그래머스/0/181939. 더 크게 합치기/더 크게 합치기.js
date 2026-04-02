function solution(a, b) {
    var answer = 0;
    let x = a.toString() + b.toString();
    let y = b.toString() + a.toString();
    
    if (x > y) answer = parseInt(x);
    else answer = parseInt(y);
    
    return answer;
}