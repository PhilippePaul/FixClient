#include <iostream>
#include <exception>

#include <curlpp/cURLpp.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>
#include <curlpp/Easy.hpp>
#include "message.h"

int writeDebug(curl_infotype, char* data, size_t size)
{
	std::cout << "Debug: " << std::endl;
	std::cout << data << std::endl;
	return size;
}

int main()
{
	std::cout << "Fix client started..." << std::endl;

	try
	{	
		curlpp::Cleanup cleaner;

		curlpp::Easy easyhandle;
		easyhandle.setOpt<curlpp::options::Url>("http://google.com");
		easyhandle.setOpt(curlpp::options::DebugFunction(writeDebug));
		easyhandle.setOpt(curlpp::options::Verbose(true));
		easyhandle.perform();
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	

	std::cout << "Fix client stopped." << std::endl;

	int x;
	std::cin >> x;
	return 0;
}
