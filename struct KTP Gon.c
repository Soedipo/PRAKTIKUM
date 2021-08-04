#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct ktp{
	int id;
	char name[100];
};

void traverse(struct ktp *arr[10001], int testcase, int search_id){
	int i;
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%d", &testcase);
    for(i = 0 ; i < testcase ; i++){
    	scanf("%d %c", (*arr[i]).id, (*arr[i]).name);
	}
	
	scanf("%d", search_id);
}

int main() {
	struct ktp emp[10001];
  	struct ktp *arr[10001];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
