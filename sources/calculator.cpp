double sum(float a, float b) {
    return a+b;
}
double dev(float a, float b) {
    return a/b;
}
double mult(float a, float b) {
    return a*b;
}
double sub(float a, float b) {
    return a-b;
}
double pow(float a, float b) {
    double a2=a;
    for(int i=1; i<b; i++)
    {
        a2*=a;
    }
    return a2;
}
double sqrt(float a) {
    double y=0, x;
    x=a;
    while(y-x>0.00001 || y-x<-0.00001)
    {
        y=x;
        x=(y+a/x)/2;
    }
    return x;
}
