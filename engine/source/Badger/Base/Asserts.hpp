#pragma once

#include "Badger/Base/Logging.hpp"

#include <iostream>

inline void LogAssertionFailure(const char *expr, const char *file, i32 line, const char* msg) {
    CoreLog(LOG_LEVEL_FATAL, "Assertion failed for expression %s. %s", file, line, expr, msg);
}

#define B_USE_ASSERTS // Disable asserts by removing this define.

#ifdef B_USE_ASSERTS
#define DebugBreak() __builtin_trap()

#define B_ASSERT(expr, msg)                                          \
    {                                                                \
        if (expr)                                                    \
        {                                                            \
        }                                                            \
        else                                                         \
        {                                                            \
            LogAssertionFailure(#expr, __FILE__, __LINE__, #msg);    \
            DebugBreak();                                            \
        }                                                            \
    }

        #ifdef _DEBUG
        #define B_DEBUGASSERT(expr, msg)                                     \
            {                                                                \
                if (expr)                                                    \
                {                                                            \
                }                                                            \
                else                                                         \
                {                                                            \
                    LogAssertionFailure(#expr, __FILE__, __LINE__, #msg);    \
                    DebugBreak();                                            \
                }                                                            \
            }
        #else
        #define B_DEBUGASSERT(expr, msg)
        #endif

#else
#define CX_ASSERT(expr)
#define CX_DEBUGASSERT(expr)
#endif