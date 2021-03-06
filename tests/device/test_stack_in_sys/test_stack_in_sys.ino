#include <BSTest.h>

BS_ENV_DECLARE();

#include <cont.h>

void setup()
{
    Serial.begin(115200);
    BS_RUN(Serial);
}

bool pretest()
{
    return true;
}

TEST_CASE("stack in SYS ram", "[bs]")
{
    bool sysstack = (((unsigned long)g_pcont) >> 16) == 0x3fff;
    CHECK(sysstack);
}

void loop ()
{
}
