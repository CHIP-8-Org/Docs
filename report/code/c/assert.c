#define ASSERT(expr)             \
    if (!(expr)) {               \
        *(volatile int *) 0 = 0; \
    }
