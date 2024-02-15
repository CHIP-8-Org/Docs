void PrintScreen(struct ILI9341_t *ili, unsigned char screen[]) {
  SetDrawingArea(ili, 0, SCREEN_WIDTH - 1, 0, SCREEN_HEIGHT - 1);
  WriteCommand(ili, CMD_MEMORY_WRITE);

  for (int i = 0; i < SCREEN_SIZE; i++) {
    for (int j = 0; j < 8; j++) {
      if (!!((screen[i] << j) & 0x80) == 1) {
        WriteData(ili, 0xFFFF >> 8); WriteData(ili, 0xFFFF);
      } else {
        WriteData(ili, 0x0000 >> 8); WriteData(ili, 0x0000);
      }
    }
  }
}
