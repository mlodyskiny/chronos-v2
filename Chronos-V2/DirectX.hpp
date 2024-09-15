#pragma once

#include <d3d11.h>

namespace DirectX
{
	long __stdcall PresentHook(IDXGISwapChain* p_swap_chain, UINT sync_interval, UINT flags);
}