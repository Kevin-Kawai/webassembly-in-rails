#include <stdio.h>
#include <emscripten/emscripten.h>

int main(int argc,char ** argv) {
  printf("I am the fib master\n");
  printf("Hello World\n");
}

#ifdef __cplusplus
extern "C" {
#endif

int EMSCRIPTEN_KEEPALIVE myFunction(int n) {
  if (n == 0) {
    return 0;
  }
  if ( n == 1 ) {
    return 1;
  }
  return myFunction(n-1) + myFunction(n-2);
}

#ifdef __cplusplus
}
#endif
