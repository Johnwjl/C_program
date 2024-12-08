#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[100];
    int frequency[26] = {0};  // 用于统计字母出现的次数

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  // 读取整行输入

    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            frequency[sentence[i] - 'a']++;
        } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            frequency[sentence[i] - 'A']++;
        }
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            printf("%c: %d\n", i + 'a', frequency[i]);
        }
    }

    return 0;
}
