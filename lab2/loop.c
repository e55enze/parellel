#include <stdio.h>
#include <stdlib.h>

void heavy_task(int task_num){
  printf("\tSequential task #%d started\n", task_num);
  int result = 0;

  for(int i=0; i < 1e8; i++){
    result += i;
  }

  printf("\tSequential task #%d finished\n", task_num);
}

void loop(int sequence_len){

  for(int i =0; i < sequence_len; i++){
    printf("MAIN: starting sequential task: %d\n", i);
    heavy_task(i);
  }
}

int main(int argc, char** argv){
  int task_num = atoi(argv[1]);
  loop(task_num);
  return 0;
}