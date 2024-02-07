static uint8_t rand_byte(uint64_t *s) {
    *s = *s * 0x3243f6a8885a308d + 1;
    return *s >> 56;
}
