typedef struct {
    uint8_t RAM[4096];
    uint16_t I;                  // Index register
    uint16_t PC;                 // Program counter
    uint16_t stack[16];
    uint8_t SP;                  // Stack pointer
    uint8_t V[16];               // Variable registers
    uint8_t screen[1024];        // 128x64 pixels = 8192 bits = 1024 bytes
    uint8_t keypad[16];
    uint8_t DT;                  // Delay timer
    uint8_t ST;                  // Sound timer
    uint16_t opcode;             // Current opcode
} Chip8;

