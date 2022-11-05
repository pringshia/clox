#include <stdlib.h>

#include "memory.h"

// TODO: why is oldSize passed in here when the fn doesn't use it
void* reallocate(void* pointer, size_t oldSize, size_t newSize) {
  if (newSize == 0) {
    free(pointer);
    return NULL;
  }

  void* result = realloc(pointer, newSize);
  if (result == NULL) exit(1); // e.g, not enough memory
  return result;
}
