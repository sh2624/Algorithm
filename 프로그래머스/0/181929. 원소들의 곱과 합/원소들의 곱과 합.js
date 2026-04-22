function solution(num_list) {
    let sum = 0, mul = 1;
    for (let i = 0; i < num_list.length; i++) {
        sum += num_list[i];
        mul *= num_list[i];
    }
    
    if (mul < sum ** 2) return 1;
    return 0;
}