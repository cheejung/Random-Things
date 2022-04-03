#include<stdio.h>
#include<string.h>

// void str_arg(char * str);

// int main(){
// 	str_arg("Hello World");

// 	printf("%s\n", "Hello World");
// 	printf("%s\n", "Hello World" + 1); //ello world
// 	printf("%s\n", "Hello World" + 2); //llo world conlcusion: "" is an address value

// 	return 0;
// }

// void str_arg(char * str){
// 	printf("%s\n", (str + 6));
// }

void conv_char(char * str);

int main(){
	char str[] = "Happy Birthday"; //dont need number of elenets in [] becuase auto

	printf("%s\n", str);

	conv_char(str);

	printf("%s\n", str);
}

void conv_char(char * str){
	int i;

	for(i = 0; *(str + i) != '\0'; i++){
		if((*(str + i) >= 97) && (*(str + i)<= 122)){
			*(str + i) -= 32;
		} else { //if you dont put else then it'll run the first if and then do second if 
			*(str + i) += 32;
		}
	}
	
	// for(i = 0; i < strlen(str); i++){
	// 	if((str[i] >= 97) && (str[i] <= 122)){
	// 		str[i] -= 32;
	// 	} else if((str[i] >= 65) && (str[i] <= 90)){ //if you dont put else then it'll run the first if and then do second if 
	// 		str[i] += 32;
	// 	}
	// }

	//printf("%s\n", str);
}
