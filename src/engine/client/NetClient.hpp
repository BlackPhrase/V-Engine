/// @file

#pragma once

#include "INetClient.hpp"

class CNetClient final : public INetClient
{
public:
	CNetClient();
	~CNetClient();
	
	bool Connect(const char *hostname) override;
	void Disconnect(const char *reason, ...) override;
	
	bool IsConnected() const override;
	
	INetAdr *GetNetAdr() const override {return mpAdr;}
private:
	INetAdr *mpAdr{nullptr};
	
	bool mbConnected{false};
};