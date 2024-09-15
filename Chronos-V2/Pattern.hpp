#pragma once

#include <Windows.h>
#include <stdint.h>

namespace Pattern
{
	uintptr_t Scan(const char* signature, bool bRelative = false, uint32_t offset = 0);
}