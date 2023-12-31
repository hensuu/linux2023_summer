#include <stdint.h>
#include <stdio.h>

static inline uintptr_t align_up(uintptr_t sz, size_t alignment)
{
    uintptr_t mask = alignment - 1;
    if ((alignment & mask) == 0) { /* power of two? */
        return (sz + mask) & ~mask;
    }
    return (((sz + mask) / alignment) * alignment);
}

int main()
{
    // Sample output
    printf("align_up(120, 4) = %lu\n", align_up(120, 4));
    printf("align_up(121, 4) = %lu\n", align_up(121, 4));
    printf("align_up(122, 4) = %lu\n", align_up(122, 4));
    printf("align_up(123, 4) = %lu\n", align_up(123, 4));

    // Custom test cases
    printf("align_up(99, 8) = %lu\n", align_up(99, 8));
    printf("align_up(67, 16) = %lu\n", align_up(67, 16));
    printf("align_up(88, 32) = %lu\n", align_up(88, 32));
    return 0;
}