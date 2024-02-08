while (game == -1) {
  WriteMenu(&lcd, x, y, &font, font_h, font_w, g_size, &games, pages, modes[i_modes], freqs[i_freqs]);

  for (int i = 0; i < 16; i++) {
    if (vm.keypad[i]) {
      switch (i) {
      case 0: i_modes = (i_modes + 1) % 3; break;
      case 7: if (pages > 0) { pages--; FillScreen(&lcd, RgbTo565(255, 0, 0)); } break;
      case 8: i_freqs = (i_freqs + 1) % 4; break;
      case 15: if (pages < g_size / 12){ pages++; FillScreen(&lcd, RgbTo565(255, 0, 0)); } break;
      default:
          if (i >= 1 && i <= 6) { game = i - 1 + pages * 12; }
          else { game = i - 9 + 6 + pages * 12; }
          break;
      }
      releaseKey(&vm, i);
    }
  }
}
