#include <stdio.h>

// ฟังก์ชันหาค่าเฉลี่ยของ 3 วิชา
float average(int a, int b, int c) {
return (a + b + c) / 3.0; // แบ่งด้วย 3.0 เพื่อให้ผลลัพธ์เป็นทศนิยม
}

int main() {
int math, physics, chemistry;
float avg;

// รับค่าคะแนนจากผู้ใช้
printf("Enter Math score: ");
scanf("%d", &math);

printf("Enter Physics score: ");
scanf("%d", &physics);

printf("Enter Chemistry score: ");
scanf("%d", &chemistry);

// เรียกใช้ฟังก์ชัน average() เพื่อหาค่าเฉลี่ย
avg = average(math, physics, chemistry);

// แสดงผลลัพธ์
printf("\nMath = %d\n", math);
printf("Physics = %d\n", physics);
printf("Chemistry = %d\n", chemistry);
printf("Average = %.2f\n", avg);

return 0;
}

//1. สร้างฟังก์ชัน float average(int a, int b, int c)
//รับค่าคะแนน 3 วิชาเป็น parameter
//นำมาบวกกันแล้วหาร 3.0 เพื่อให้ได้ค่าเฉลี่ยแบบทศนิยม
//return ค่าเฉลี่ยกลับไป
//2. ใน main() ประกาศตัวแปร math, physics, chemistry และ avg
//3. ใช้ scanf() รับค่าคะแนนทั้ง 3 วิชา
//4. เรียกใช้ฟังก์ชัน average() เพื่อหาค่าเฉลี่ย และเก็บค่าใน avg
//5. ใช้ printf() แสดงค่าคะแนนแต่ละวิชา และค่าเฉลี่ย (ทศนิยม 2 ตำแหน่ง)
//6. return 0; คืนค่าจบโปรแกรม