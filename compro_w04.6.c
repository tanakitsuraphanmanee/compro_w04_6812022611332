#include <stdio.h>
const int GLOBAL_RATE = 10;
void calculate() {
    const int LOCAL_BONUS = 50;
    printf("GLOBAL_RATE in calculate() = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS in calculate() = %d\n", LOCAL_BONUS);
}
int main() {
    calculate();
    printf("GLOBAL_RATE in main() = %d\n", GLOBAL_RATE); 
    return 0;
}
/*1. ค่าคงที่GLOBAL_RATE และ LOCAL_BONUS ต่างกันอย่างไร?   
  GLOBAL_RATE เป็นค่าคงที่ระดับ global:
- ถูกกำหนดไว้นอกฟังก์ชัน ใช้ได้ทุกที่ในไฟล์โปรแกรม
- เรียกใช้ได้ในทั้ง main() และ calculate()
  LOCAL_BONUS เป็นค่าคงที่ระดับ local:
- ถูกประกาศภายในฟังก์ชัน calculate() จึงสามารถใช้ได้เฉพาะภายในฟังก์ชันนั้นเท่านั้น
- ไม่สามารถเรียกใช้ใน main() ได้ (ถ้าพยายามจะ compile error)
  2.เกิดอะไรขึ้นถ้าเราเขียน GLOBAL_RATE = 20; หรือ
LOCAL_BONUS = 80;?
-แสดงค่าได้แต่ข้างนอกฟังชันแทนในฟังชัน
3.ทำไม LOCAL BONUS ถึงไม่สามารถเรียกใช้ใน main() ได้?
-เพราะ LOCAL_BONUS เป็นค่าคงที่ที่ประกาศในฟังก์ชัน calculate()
-ตัวแปรที่อยู่ในฟังก์ชัน จะมองไม่เห็นจากฟังก์ชันอื่น
4.อธิบาย และสรุปผลที่ได้จากการทดลองสิ่งที่ได้เรียนรู้
-global สามารถแสดงค่าได้ทุกฟังชัน
-local สามารถแสดงค่าได้ภายในฟังชันเพราะถูกกำหนดให้อยู่ในฟังชัน */