#include<stdio.h>

char roman[20];

char * intToRoman(int num){
    int i = 0;

    while(num != 0){
        if (num <= 3){
            roman[i] = 'I';
            num-=1;
            i+=1;
        }
        else if (num == 4){
            roman[i] = 'I';
            i+=1;
            roman[i] = 'V';
            num-=4;
            i+=1;
        }
        else if (num >= 5 && num <= 8){
            roman[i] = 'V';
            num-=5;
            i+=1;
        }
        else if (num == 9){
            roman[i] = 'I';
            i+=1;
            roman[i] = 'X';
            num-=9;
            i+=1;
        }

        else if (num >= 10 && num <= 39){
            roman[i] = 'X';
            num-=10;
            i+=1;
        }

        else if (num >= 40 && num <= 49){
            roman[i] = 'X';
            i+=1;
            roman[i] = 'L';
            num-=40;
            i+=1;
        }

        else if (num >= 50 && num <= 89){
            roman[i] = 'L';
            num-=50;
            i+=1;
        }

        else if (num >= 90 && num <= 99){
            roman[i] = 'X';
            i+=1;
            roman[i] = 'C';
            num-=90;
            i+=1;
        }

        else if (num >= 100 && num <= 399){
            roman[i] = 'C';
            num-=100;
            i+=1;
        }

        else if (num >= 400 && num <= 499){
            roman[i] = 'C';
            i+=1;
            roman[i] = 'D';
            num-=400;
            i+=1;
        }

        else if (num >= 500 && num <= 899){
            roman[i] = 'D';
            num-=500;
            i+=1;
        }

        else if (num >= 900 && num <= 999){
            roman[i] = 'C';
            i+=1;
            roman[i] = 'M';
            num-=900;
            i+=1;
        }

        else if (num >= 1000 && num <= 3999){
            roman[i] = 'M';
            num-=1000;
            i+=1;
        }
        
    }

    return roman;
}

int main(){
    int num;
    scanf("%d",&num); getchar();

    intToRoman(num);
    printf("%s",roman);

    return 0;
}