/* do not remove these definitions or replace them #includes */
#define NULL 0
typedef long size_t;
void *malloc(size_t size);
void *realloc(void *ptr, size_t size);
void free(void* ptr);
int printf(const char *format, ...);

/* The following #ifdef and its contents need to remain as-is. */
#ifndef TYPE
#define TYPE short
TYPE sentinel = -1234;
#else
extern TYPE sentinel;
#endif

/* typedefs needed for this task: */
typedef struct node_t { TYPE payload; struct node_t *next; } node;

int lengthOf(node *list) {
    int i=0; while(list) { list = (*list).next; i+=1; } return i;
}

int lengthOfT(TYPE *list) {
    int i=0; while(list[i] != sentinel) i+=1; return i;
}

TYPE * new_list;
TYPE * source_copy;
TYPE * holder;

TYPE *convert(node *list) {
  if(lengthOf(list) < 1){ new_list = malloc(sizeof(TYPE)); new_list[0] = sentinel; return new_list;}
  new_list = malloc(sizeof(TYPE) * (lengthOf(list) + 1));
  if(new_list){
  }
  else{
      free(malloc(sizeof(TYPE) * (lengthOf(list) + 1)));
  }
  int i=0;
  while(list){
    new_list[i] = list->payload;
    list = (*list).next;
    i += 1;
  }
  new_list[i] = sentinel;
  return new_list;
  
}
void append(TYPE **dest, TYPE *source) {
  int dest_length = lengthOfT(*dest);
  int source_length = lengthOfT(source);
  if(source_length <1){}
  else{
  *dest = realloc(*dest, (dest_length+source_length + 1)*sizeof(TYPE));
  TYPE * temp = *dest;
  
  while(*temp != sentinel){
     temp += 1;
   }
  while(*source != sentinel){
    *temp = *source;
    temp += 1;
    source += 1;
  }
  *temp = sentinel;

  }
}

void remove_if_equal(TYPE **dest, TYPE value) {
  TYPE * temp = *dest;
  while(*temp != sentinel){
    if(*temp == value){
      TYPE * hold = temp;
      while(*temp != sentinel){
      *temp = *(temp + 1);
      temp += 1;
      }
      temp = hold;

    }
    else{
      temp += 1;
    }
  }
}
