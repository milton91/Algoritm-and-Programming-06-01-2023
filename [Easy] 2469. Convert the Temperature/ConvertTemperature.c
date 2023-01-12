/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize){
    *returnSize = 2;
    double *temp = (double*)malloc(2*sizeof(double));

    temp[0] = celsius + 273.15;
    temp[1] = celsius*9/5+32;

    return temp;
}
