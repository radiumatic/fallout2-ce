#include "mapper/mp_targt.h"

namespace fallout {

// 0x559DBC
static bool tgt_overriden = false;

// 0x49B2F0
void target_override_protection()
{
    // TODO: Incomplete.
}

// 0x49B2F0
bool target_overriden()
{
    return tgt_overriden;
}

// 0x49B424
int target_init()
{
    // TODO: Incomplete.

    return 0;
}

// 0x49B434
int target_exit()
{
    // TODO: Incomplete.

    return 0;
}

} // namespace fallout
