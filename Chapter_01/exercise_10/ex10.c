#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 1){
		printf("ERROR: You need at least one argument.\n");
		// this is how you abort a program
		return 1;
	}
	int i = 0;
	for(int j=1; j<argc; j++){ 	
		for(i=0; argv[j][i] != '\0'; i++){
			char letter = argv[j][i];
			if (letter > 96){
				letter -= 32;
			}	
			switch (letter) {
				case 'A':
					printf("%d: 'A'\n", i);
					break;
       	                	case 'E':
       	                		printf("%d: 'E'\n", i);
					break;
       		               	case 'I':
       		               		printf("%d: 'I'\n", i);
					break;
       	        		case 'O':
       	        			printf("%d: 'O'\n", i);
					break;
       		         	case 'U':
       		         		printf("%d: 'U'\n", i);
       		         		break;
				case 'Y':
					if (i > 2) {
						//it's only sometimes Y
						printf("%d: 'Y'\n", i);
					}
					printf("%d: %c is not a vowel\n", i, letter);
					break;
				default:
					printf("%d: %c is not a vowel\n", i, letter);
			}
		}
	}
	return 0;
}

