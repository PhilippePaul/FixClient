#include <src/fixDefines.hpp>
#include <src/message.h>

void Handle(Message message)
{
	//Move this to LogonMessage.Handle?
	if(message.GetType() == "A")//Logon
	{
		auto logonMessage = static_cast<LogonMessage>(message);
		int encryptMethod = logonMessage.GetEncryptMethod();
		//HeartbeatInt
		//ResetSeqNumFlag
		//Username
		//Password
		//DefaultAppVerId	
	} 
}
