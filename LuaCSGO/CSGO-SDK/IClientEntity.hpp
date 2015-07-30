#pragma once

#include "Definitions.hpp"

#include"IClientNetworkable.hpp"
#include"IClientRenderable.hpp"
#include"IClientUnknown.hpp"
#include"IClientThinkable.hpp"

namespace SDK {
	class CMouthInfo;
	struct SpatializationInfo_t;
	//-----------------------------------------------------------------------------
	// Purpose: All client entities must implement this interface.
	//-----------------------------------------------------------------------------
	class IClientEntity : public IClientUnknown, public IClientRenderable, public IClientNetworkable, public IClientThinkable
	{
	public:
		virtual void			Release( void ) = 0;

		virtual const Vector	GetAbsOrigin( void ) const = 0;
		virtual const QAngle	GetAbsAngles( void ) const = 0;

		virtual CMouthInfo		*GetMouth( void ) = 0;

		virtual bool			GetSoundSpatialization( SpatializationInfo_t info ) = 0;

		virtual bool			IsBlurred( void ) = 0;
	};

}