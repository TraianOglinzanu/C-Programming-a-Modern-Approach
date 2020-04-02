#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16;

	printf("Enter the numbers from 1 to 16 in any other: \n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
		&n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, 
		&n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

	printf("%d %d %d %d\n",n1, n2, n3, n4);
	printf("%d %d %d %d\n",n5, n6, n7, n8);
	printf("%d %d %d %d\n",n9, n10, n11, n12);
	printf("%d %d %d %d\n",n13, n14, n15, n16);

	printf("Row sums: %d %d %d %d \n",(n1+n2+n3+n4), (n5+n6+n7+n8), (n9+n10+n11+n12), (n13+n14+n15+n16));
	printf("Column sums: %d %d %d %d \n",(n1+n2+n3+n4), (n5+n6+n7+n8), (n9+n10+n11+n12), (n13+n14+n15+n16));
	printf("Diagonal sums: %d %d \n", (n1+n6+n11+n16), (n4+n7+n10+n13));

	return 0;
}
