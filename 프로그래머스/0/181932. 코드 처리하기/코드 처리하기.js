function solution(code) {
    let mode = 0;
    let ret = "";
    
    for (let idx = 0; idx < code.length; idx++) {  
        // 모드 검사
        if (code[idx] === "1") {
            mode = (mode === 0 ? 1 : 0);
            continue;
        }
        
        // 모드에 따른 처리
        if (mode === 0) {
            if (idx % 2 === 0) ret += code[idx];
        }
        else {
            if (idx % 2 === 1) ret += code[idx];
        }
    }
    
    return (ret === "") ? "EMPTY" : ret;
}