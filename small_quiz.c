#include <stdio.h>
#include <stdlib.h>

struct questions {
  char questions[4][100];
};

int main(int argc, char const *argv[]) {

  int j = 1;
  int x = 65;
  int a = 4;
  int score = 0;
  char user_input;

  char questions[4][50] = {
    "How Old Are You?",
    "What Is Your Name?",
    "Interests?",
    "Do You Like Money?"
  };

  char arrs[4][4][30] = {
    {"Hello There", "Hi Friend", "Select Me", "Pick Me"},
    {"Hello Buddy", "Hi There", "Select This One", "Pick Me Please"},
    {"What's Up?", "How's It Going?", "Hiya!", "Hey There"},
    {"What's Good?", "How's It Hangin'?", "Heya!", "Hey Man"}
  };

  char ans[4][2] = {"A", "B", "C", "D"};

  // struct questions quest_1;

  printf("\nCurrent Score: { %d }\n", score);

  for (int i = 0; i < a; i++) {
    printf("\n%d: %s\n", j, questions[i]);
    for (int h = 0; h < a; h++) {
      printf("  %c: %s\n", x, arrs[i][h]);
      x++;
    }
    if (i == 0) {
      printf("Please Press Enter And Then Begin Answering.\n");
    }
    while ((getchar()) != '\n');
    user_input = getchar();
    if (user_input == ans[i][0]) {
      printf("\nCorrect!\n");
      score += 100;
    } else {
      printf("\nIncorrect...\n");
      printf("%c\n", ans[i][0]);
    }
    x = 65;
    j++;
    if (i < a - 1) {
      printf("\nCurrent Score: { %d }\n", score);
    } else {
      printf("\nFinal Score: { %d }\n", score);
    }
  }

  // typedef char String[30];
  //
  // String money = "Hello There Friends";
  //
  // char string[30] = "Hello There Friends";
  //
  // printf("This is TypeDef String: %s\n", money);
  // printf("This is Character String: %s\n", string);







  return 0;
}
