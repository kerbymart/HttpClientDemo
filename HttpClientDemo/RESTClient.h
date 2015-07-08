#include <string>
#include <map>

#pragma once
class RESTClient
{
public:
	/**
	* public data definitions
	*/
	typedef std::map<std::string, std::string> headermap;

	/** response struct for queries */
	typedef struct
	{
		int code;
		std::string body;
		headermap headers;
	} response;
	RESTClient();
	~RESTClient();
	RESTClient::response get(std::string url);
	std::string post(std::string url, std::string type, std::string payload);
	std::string put(std::string url, std::string type, std::string payload);
	std::string del(std::string url);
};

