
#include "testlib_core.h"
#include "testclass.h"

#ifndef NULL
#define NULL (0L)
#endif

static testclass *c = NULL;

int init(void)
{
    if (c != NULL)
    {
        delete c;
    }
    c = new testclass();
    return 0;
}

int store(int a)
{
    if (c == NULL) return -1;
    return c->store(a);
}

int get(void)
{
    if (c == NULL) return -1;
    return c->get();
}

int clear(void)
{
    return store(0);
}

int destroy(void)
{
    if (c != NULL) delete c;
    c = NULL;
    return 0;
}
