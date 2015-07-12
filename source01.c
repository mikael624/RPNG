#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct status{                  //キャラステータスの構造体
  char name[255];
  int attack;
  int avoid;
  int skill;
  int tool;
  int luck;
  int point;
}Status;                                //以後、この構造体をStatusとする。

Status status(Status a);                //ステータス操作時の関数

int main(void)
{
    Status player;

    player = status(player);

    return 0;
}

Status status(Status a)
{
  a.attack = 0;
  a.avoid = 0;
  a.skill = 0;
  a.tool = 0;
  a.luck = 0;
  a.point = 48;

  printf("キャラクターのステータスを決定します。\n");
  printf("キャラクターの名前を入力してください。(空白なし)\n");
  scanf("%s",a.name);
  while(1){
    int chk = 0;
    printf("ポイントを振り分けます。現在のポイントは%dです\n",a.point);
    printf("※一度配分したポイントは戻すことができません。\n");
    printf("振り分ける種類を番号で入力してください。\n");
    printf("1 攻撃%3d   2 回避%3d\n3 器用%3d    4 道具%3d\n5 運 %3d    6 終了\n"
    ,a.attack,a.avoid,a.skill,a.tool,a.luck);
    scanf("%d",&chk);

    int point;

    if(chk == 6)break;

    switch (chk) {
      case 1:
      printf("攻撃\n");
      printf("振り分けるポイント数を入力してください。\n");
      scanf("%d",&point);
      if(point > a.point)continue;
      a.point -= point;
      a.attack += point;
      break;

      case 2:
      printf("回避\n");
      printf("振り分けるポイント数を入力してください。\n");
      scanf("%d",&point);
      if(point > a.point)continue;
      a.point -= point;
      a.avoid += point;
      break;

      case 3:
      printf("器用\n");
      printf("振り分けるポイント数を入力してください。\n");
      scanf("%d",&point);
      if(point > a.point)continue;
      a.point -= point;
      a.skill += point;
      break;

      case 4:
      printf("道具\n");
      printf("振り分けるポイント数を入力してください。\n");
      scanf("%d",&point);
      if(point > a.point)continue;
      a.point -= point;
      a.tool += point;
      break;

      case 5:
      printf("運\n");
      printf("振り分けるポイント数を入力してください。\n");
      scanf("%d&",point);
      if(point > a.point)continue;
      a.point -= point;
      a.luck += point;
      break;
    }
    if(a.point == 0)break;
  }
  return a;
}
