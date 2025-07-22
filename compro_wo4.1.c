#include <stdio.h>  // ใช้เรียกฟังก์ชัน printf() จาก standard I/O library

int main() {        // 'int' = Keyword, 'main' = Identifier, '()' = Operator

    printf("Hello,\nC Tokens!\n");  // 'printf' = Identifier, ข้อความใน "" = Constant, '\n' = newline, ';' = Operator

    return 0;  // 'return' = Keyword, '0' = Constant, ';' = Operator
}
/*Token Type	ใช้อยู่ในโค้ด                  
Keyword	int, return
Identifier	main, printf
Constant	"Hello,\n", "C Tokens!\n", 0
Operator	(), ;, =   */