function solution(num_list, n) {
    let m = 0;
    for (let i = 0; i < num_list.length; i++) {
        if (num_list[i] === n) m = 1;
    }
    
    return m;
}