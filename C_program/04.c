/*
 1. 修改猜数字游戏：
     - 限制玩家最多猜 10 次。
     - 如果猜错 10 次，显示游戏失败。
 */

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void) {
//    int target, guess, num;
//
//    srand((unsigned)time(NULL));
//    target = rand() % 100 + 1;
//
//    num = 0;
//
//    printf("欢迎来到猜数字游戏！\n");
//    printf("系统已生成一个 1~100 的数字，请猜测：\n");
//
//    while (1) {
//        if (num >= 10) {
//            printf("你已经猜了 10 次，游戏失败！\n");
//            break;
//        }
//        printf("请输入你的猜测：");
//        scanf("%d", &guess);
//
//        if (guess < target) {
//            printf("太小了，请再试一次！\n");
//        } else if (guess > target) {
//            printf("太大了，请再试一次！\n");
//        } else {
//            printf("恭喜你，猜对了！\n");
//            break;
//        }
//        num++;
//    }
//
//    return 0;
//}

/*
 2. 编写程序，判断一个输入的年份是否是闰年。
 
    满足以下条件之一的年份为闰年：
     • 能被4整除，但不能被100整除。
     • 能被400整除。
 */

//#include <stdio.h>
//
//int main(void) {
//    int year;
//    printf("Enter a year: ");
//    scanf("%d", &year);
//
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//        printf("%d is a leap year.\n", year);
//    } else {
//        printf("%d is not a leap year.\n", year);
//    }
//    
//    return 0;
//}
