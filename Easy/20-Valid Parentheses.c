bool isValid(char* s) {
    char arr[10000];
    // Better for space complexity
    // int n = strlen(s);
    // char* arr = (char*)malloc(n);
    int top=0, i=0;
    while(s[i]!='\0')
    {
        if(top==0)
        {
            arr[top] = s[i];
            top++;
        }else
        {
            if(s[i] == ')' && arr[top-1] == '(')
            {
                top--;
            }else if(s[i] == ']' && arr[top-1] == '[')
            {
                top--;
            }else if(s[i] == '}' && arr[top-1] == '{')
            {
                top--;
            }else{
                arr[top] = s[i];
                top++;
            }
        }
        i++;
    }
    if(top == 0)
    {
        return true;
    }else
    {
        return false;
    }
}
