/// @file
/// @brief core environment interface - provides a set of common interfaces

#pragma once

struct IMemoryManager;
struct IConfig;
struct ICvarRegistry;
struct ICmdRegistry;
struct ICmdProcessor;
struct IPhysics;
struct INetwork;

struct ICoreEnv
{
	///
	virtual IMemoryManager *GetMemoryManager() const = 0;
	
	///
	virtual IConfig *GetConfig() const = 0;
	
	///
	virtual ICvarRegistry *GetCvarRegistry() const = 0;
	
	///
	virtual ICmdRegistry *GetCmdRegistry() const = 0;
	
	///
	virtual ICmdProcessor *GetCmdProcessor() const = 0;
	
	///
	virtual IPhysics *GetPhysics() const = 0;
	
	///
	virtual INetwork *GetNetwork() const = 0;
	
	///
	virtual void Stop() = 0;
	
	///
	//virtual void SendCmd(const char *asText) = 0;
};