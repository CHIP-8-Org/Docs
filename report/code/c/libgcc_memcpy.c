static void
*memcpy_(void *dest, const void *src, uint64_t len)
{
    char *d = dest; const char *s = src;
    while (len--)
        *d++ = *s++;
    return dest;
}
