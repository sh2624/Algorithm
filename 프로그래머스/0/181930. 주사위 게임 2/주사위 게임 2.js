function solution(a, b, c) {
    if (a !== b && b !== c && c !== a)
        return a + b + c;
    else if (a === b && b !== c || b === c && a !== b || a === c && a !== b)
        return (a + b + c) * (a ** 2 + b ** 2 + c ** 2);
    else
        return (a + b + c) * (a ** 2 + b ** 2 + c ** 2) * (a ** 3 + b ** 3 + c ** 3);
}