bool isValid(char* s) {
    int len = strlen(s);
    if(len%2) return false;
    
    int limit = len/2;
    char *stack = malloc(limit);
    int idx = 0;
    
    for(int i=0; i<len; ++i){
        char cur = s[i];
        if(cur=='(' || cur=='{' || cur=='['){
            if(idx == limit) return false;
            stack[idx++] = cur;
        }else{
            if(idx == 0) return false;
            if(cur == '}' && stack[idx-1] == '{' || cur == ']' && stack[idx-1] == '[' || cur == ')' && stack[idx-1] == '('){
                idx--;
            }else{
                return false;
            }
        }
    }
    
    free(stack);
    return idx==0;
}
