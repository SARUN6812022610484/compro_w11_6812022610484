#include <stdio.h>

// ฟังก์ชันรับคะแนนของนักเรียน 3 คน (แต่ละคน 3 วิชา)
void inputScores(float arr[3][3]) {
for (int i = 0; i < 3; i++) {
printf("Enter scores for Student %d:\n", i + 1);
printf(" Math: ");
scanf("%f", &arr[i][0]);
printf(" Physics: ");
scanf("%f", &arr[i][1]);
printf(" Chemistry: ");
scanf("%f", &arr[i][2]);
}
}

// ฟังก์ชันแสดงตารางคะแนน
void printTable(float arr[3][3]) {
printf("\nScore Table:\n");
printf("Student  Math   Physics   Chemistry\n");
for (int i = 0; i < 3; i++) {
printf("%-8d %-8.2f %-8.2f %-8.2f\n",
i + 1, arr[i][0], arr[i][1], arr[i][2]);
}
}

// ฟังก์ชันแสดงค่าเฉลี่ยของแต่ละวิชา
void printAverage(float arr[3][3]) {
float sumMath = 0, sumPhysics = 0, sumChemistry = 0;

for (int i = 0; i < 3; i++) {
sumMath += arr[i][0];
sumPhysics += arr[i][1];
sumChemistry += arr[i][2];
}

printf("\nAverage per subject:\n");
printf("Math: %.2f\n", sumMath / 3.0);
printf("Physics: %.2f\n", sumPhysics / 3.0);
printf("Chemistry: %.2f\n", sumChemistry / 3.0);
}

int main() {
float scores[3][3]; //  เก็บข้อมูลนักเรียน 3 คน × 3 วิชา

// เรียกใช้ฟังก์ชัน
inputScores(scores);
printTable(scores);
printAverage(scores);

return 0;
}

//1. ใช้  array scores[3][3] เก็บคะแนนนักเรียน 3 คน × 3 วิชา
// คอลัมน์ 0 = Math, 1 = Physics, 2 = Chemistry
//2. inputScores()  วนลูป i = 0 ถึง 2 เพื่อรับคะแนน Math, Physics, Chemistry ของแต่ละคน
//3. printTable()  แสดงตารางคะแนนของนักเรียนแต่ละคน จัดรูปแบบทศนิยม 2 ตำแหน่ง
//4.printAverage()  วนลูปหาผลรวมของแต่ละวิชา แล้วหารด้วย 3 เพื่อหาค่าเฉลี่ย
//5. main()  เรียกใช้ฟังก์ชันทั้ง 3 ตามลำดับ