#include "common.h"
#include "chunk.h"
#include "debug.h"

#include <stdio.h>

int main(int argc, const char* argv[]) {
  Chunk chunk;
  initChunk(&chunk);

  int constant = addConstant(&chunk, 1.2);
  writeChunk(&chunk, OP_CONSTANT, 101);
  writeChunk(&chunk, constant, 101);

  writeChunk(&chunk, OP_RETURN, 101);

  disassembleChunk(&chunk, "test_chunk");
  freeChunk(&chunk);

  return 0;
}
