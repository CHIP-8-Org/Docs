#define RAM_SIZE 4096
#define SCREEN_SIZE 1024         // 128x64 pixels = 8192 bits = 1024 bytes
#define KEYPAD_SIZE 16

typedef struct {
    uint8_t RAM[RAM_SIZE];
    uint16_t I;                  // Index register
    uint16_t PC;                 // Program counter
    uint16_t stack[16];
    uint8_t SP;                  // Stack pointer
    uint8_t V[16];               // Variable registers
    uint8_t hp48_flags[8];       // HP-48's "RPL user flag" registers (S-CHIP)
    uint8_t screen[SCREEN_SIZE];
    uint8_t keypad[KEYPAD_SIZE];
    uint8_t wait_for_key;
    uint8_t DT;                  // Delay timer
    uint8_t ST;                  // Sound timer
    uint16_t opcode;             // Current opcode
    uint64_t rng;                // PRNG state
    int IPF;                     // No. instructions executed each frame
    bool hi_res;                 // Enable 128x64 hi-res mode (S-CHIP)
    bool screen_updated;         // Was the screen updated?
    Platform platform;           // CHIP-8, CHIP-48/S-CHIP 1.0 or S-CHIP 1.1 behavior?
} Chip8;

