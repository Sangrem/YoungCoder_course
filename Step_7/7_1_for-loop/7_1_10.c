int main() {
    int n,d=0;
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        if ((n%i)==0) {
            d++;  printf("%d ",i);
        }
    }
    printf("\n%d",d);
    return 0;
}
