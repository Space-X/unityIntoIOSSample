﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;

#include "mscorlib_System_EventArgs.h"

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t274  : public EventArgs_t653
{
	// System.Object System.UnhandledExceptionEventArgs::exception
	Object_t * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;
};
