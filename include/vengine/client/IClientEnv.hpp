/// @file
/// @brief client-side engine environment interface - contains a set of interfaces accessible to use by the client-side game

#pragma once

struct ICmdRegistry;
struct ICvarRegistry;
struct IPhysics;
struct IResourceManager;

struct IEngineEnv
{
	///
	virtual ICmdRegistry *GetCmdRegistry() const = 0;
	
	///
	virtual ICvarRegistry *GetCvarRegistry() const = 0;
	
	///
	virtual IPhysics *GetPhysics() const = 0;
	
	///
	virtual IResourceManager *GetResourceManager() const = 0;
};