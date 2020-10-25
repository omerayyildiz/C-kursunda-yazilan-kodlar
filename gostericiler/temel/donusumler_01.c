

int main()
{
    int x = 10;
    int *ip = x;        //int türünden int * türüne örtülü dönüşüm var. (Bu bildirim yanlış)
    double *dp = &x;    //int* türünden double * türüne örtülü dönüşüm var. (Bu bildirim yanlış)
}
