int romanToInt(char * s){
    int s_len = strlen(s);
    int i = 0;
    int decimal = 0;

    while(s[i] != '\0'){
        if (s[i] == 'M'){
            decimal += 1000;
        }

        else if (s[i] == 'D'){
            decimal += 500;
        }

        else if (s[i] == 'C'){
            if(s[i+1] == 'M' || s[i+1] == 'D'){
                decimal -= 100;
            }
            else{
                decimal += 100;
            }
        }

        else if (s[i] == 'L'){
            decimal += 50;
        }

        else if (s[i] == 'X'){
            if(s[i+1] == 'C' || s[i+1] == 'L'){
                decimal -= 10;
            }
            else{
                decimal += 10;
            }
        }

        else if (s[i] == 'V'){
            decimal += 5;
        }

        else if (s[i] == 'I'){
            if(s[i+1] == 'X' || s[i+1] == 'V'){
                decimal -= 1;
            }
            else{
                decimal += 1;
            }
        }

        else

        
        i++;
    }

    return (decimal);
}
