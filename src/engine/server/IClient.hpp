/// @file
/// @brief connected client interface

#pragma once

struct IClient
{
	/// Disconnect the client with a reason
	virtual void Disconnect(const char *asReason, ...) = 0;
	
	///
	virtual bool IsConnected() const = 0;
};