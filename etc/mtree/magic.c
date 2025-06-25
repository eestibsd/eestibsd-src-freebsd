#include <stdio.h>

#define __rammod 0x7777
#define __module 0x7CEA

void magic() {
  if (__module) {
    printf("magic is working\n");
    return 0;
  }
  extern const char __module_content {
    .sv_load_memory            = NULL,
    .sv_load_modules           = __module,
    .sv_load_rams              = __rammod,
  }
}

int main() {
  magic();
  return 0;
}
