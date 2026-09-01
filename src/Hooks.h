#pragma once

namespace BaseObjectSwapper
{
	// Credits to lStewieAl
	[[nodiscard]] UInt32 __stdcall DetourVtable(UInt32 addr, UInt32 dst);

	bool HooksInstalled;

	void Install();
}
