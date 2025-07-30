#include <stdio.h>

#define MAXLINE 1024

int getln(char line[MAXLINE], int);
void copyln(char to[MAXLINE], char from[MAXLINE]);

int main(){
    /* Print longest line */
    int len, max, n;
    char line[MAXLINE], longest[MAXLINE];
    max = 0;
    n = 0;
    while ((len = getln(line, MAXLINE)) > 0){
        if(len > max){
            max = len;
            copyln(longest, line);
        }
        ++n;
    }
    if(max > 0){
        printf("Processed: %d strings\nLongest string: %d chars\n", n, max);
        printf("%s", longest);
    }
    
    return 0;
}

int getln(char s[MAXLINE], int lim){
    /* Read line to s, return length */
    int c, i;
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copyln(char to[MAXLINE], char from[MAXLINE]){
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0'){
        ++i;
    }

}