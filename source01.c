#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct status{                  //�L�����X�e�[�^�X�̍\����
  char name[255];
  int attack;
  int avoid;
  int skill;
  int tool;
  int luck;
  int point;
}Status;                                //�Ȍ�A���̍\���̂�Status�Ƃ���B

Status status(Status a);                //�X�e�[�^�X���쎞�̊֐�

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

  printf("�L�����N�^�[�̃X�e�[�^�X�����肵�܂��B\n");
  printf("�L�����N�^�[�̖��O����͂��Ă��������B(�󔒂Ȃ�)\n");
  scanf("%s",a.name);
  while(1){
    int chk = 0;
    printf("�|�C���g��U�蕪���܂��B���݂̃|�C���g��%d�ł�\n",a.point);
    printf("����x�z�������|�C���g�͖߂����Ƃ��ł��܂���B\n");
    printf("�U�蕪�����ނ�ԍ��œ��͂��Ă��������B\n");
    printf("1 �U��%3d   2 ���%3d\n3 ��p%3d    4 ����%3d\n5 �^ %3d    6 �I��\n"
    ,a.attack,a.avoid,a.skill,a.tool,a.luck);
    scanf("%d",&chk);

    int point;

    if(chk == 6)break;

    switch (chk) {
      case 1:
      printf("�U��\n");
      printf("�U�蕪����|�C���g������͂��Ă��������B\n");
      scanf("%d",&point);
      if(point > a.point)continue;
      a.point -= point;
      a.attack += point;
      break;

      case 2:
      printf("���\n");
      printf("�U�蕪����|�C���g������͂��Ă��������B\n");
      scanf("%d",&point);
      if(point > a.point)continue;
      a.point -= point;
      a.avoid += point;
      break;

      case 3:
      printf("��p\n");
      printf("�U�蕪����|�C���g������͂��Ă��������B\n");
      scanf("%d",&point);
      if(point > a.point)continue;
      a.point -= point;
      a.skill += point;
      break;

      case 4:
      printf("����\n");
      printf("�U�蕪����|�C���g������͂��Ă��������B\n");
      scanf("%d",&point);
      if(point > a.point)continue;
      a.point -= point;
      a.tool += point;
      break;

      case 5:
      printf("�^\n");
      printf("�U�蕪����|�C���g������͂��Ă��������B\n");
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
