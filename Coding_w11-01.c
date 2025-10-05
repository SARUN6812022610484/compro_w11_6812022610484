#include <stdio.h>

void inputAndShow() {
int math, physics, chemistry;

// รับค่าคะแนนจากผู้ใช้
printf("Enter Math: ");
scanf("%d", &math);

printf("Enter Physics: ");
scanf("%d", &physics);

printf("Enter Chemistry: ");
scanf("%d", &chemistry);

// แสดงผลคะแนน
printf("\nScores: Math = %d, Physics = %d, Chemistry = %d\n",
math, physics, chemistry);
}

int main() {
 inputAndShow();
}

//1. include <stdio.h> ใช้สำหรับฟังก์ชัน printf และ scanf
//2. void inputAndShow()  ประกาศฟังก์ชันแบบไม่มีการคืนค่า ใช้สำหรับรับค่าและแสดงผล
//3. ภายในฟังก์ชัน inputAndShow() ประกาศตัวแปร math, physics, chemistry แล้วรับค่าจากผู้ใช้ผ่าน scanf()
//4. หลังจากรับค่าแล้ว ใช้ printf() แสดงผลคะแนนที่รับเข้า
//5. main() จะเรียกใช้ฟังก์ชัน inputAndShow() เพื่อทำงานตามที่กำหนด