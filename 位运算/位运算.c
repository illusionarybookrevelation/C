#include <stdio.h>

int main()
{
	printf("%d\n",5 & 2); /*&按位与，任何值与0得0，与1保持不变*/    /*0*/
	printf("%d\n",5 | 2); /*|按位或，任何值或1得1，或0保持不变*/    /*7*/
	printf("%d\n",~5); /*按位取反，1变0，0变1*/     /*-6*/
	printf("%d\n",5 ^ 2); /*相异得1，相同得0*/      /*7*/
	printf("%d\n",5 >> 2); /*右移2位*/
	printf("%d\n",5 << 2); /*左移2位*/
	return 0;
}
/*关于取反5十进制为何变为-6？
5的二进制：
0000 0000 0000 0000 0000 0000 0000 0101

5的二进制使用~取反：
1111 1111 1111 1111 1111 1111 1111 1010     补码

1111 1111 1111 1111 1111 1111 1111 1001     反码(补码转反码要-1)

1000 0000 0000 0000 0000 0000 0000 0110     原码(反码转原码同样取反，符号位是1，结果为-6) 
*/
