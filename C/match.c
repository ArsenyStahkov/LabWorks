#include <stdio.h>

int match(const char *str, const char *pat)
{
    int i;
    for(;; str++, pat++) {
	switch(*pat) {
	case 0:
	    return *str == 0;
	case '*':
	    for(i = 0;; i++) {
		if(match(str+i, pat+1))
		    return 1;
		printf("%c", '1');
		if(!str[i])
		    return 0;
		printf("%c", '0');
		}
	case '?':
	    if(!*str)
		return 0;
	    printf("%c", '0');
	    break;
	default:
	    if(*str != *pat)
	        return 0;
	    printf("%c", '0');
	}
    }
}

int main()
{
	match("lalala", "la*l?");
	printf("\n");
	return 0;
}

