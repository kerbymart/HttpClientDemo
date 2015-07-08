#include "stdafx.h"
#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/asio/ssl.hpp>

#include "RESTClient.h"

using boost::asio::ip::tcp;

int main(int argc, char* argv[])
{
	try
	{
		//if (argc != 3)
		//{
		//	std::cout << "Usage: https_client <server> <path>\n";
		//	return 1;
		//}

		//argv[1] = "httpbin.org";
		//argv[2] = "/get";
		RESTClient restclient;

		RESTClient::response resp = restclient.get("");
		std::cout << "Response: " + resp.body;

	}
	catch (std::exception& e)
	{
		std::cout << "Exception: " << e.what() << "\n";
	}

	return 0;
}