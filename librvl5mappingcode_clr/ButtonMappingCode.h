#pragma once

#include "ButtonMappingHeader.h"
#include <string>

namespace librvl5mappingcode {
	class ButtonMappingCode
	{
	private:
		std::string _name;
		uint16_t* _dataStart;
		uint16_t* _dataEnd;
	public:
		ButtonMappingCode(std::string name, std::string data);
		ButtonMappingCode(std::string name, const void* data, size_t dataLength);
		std::vector<ButtonMappingHeader*> getButtonMappings();
		std::string getName();
		std::string toString();
		~ButtonMappingCode();
	};
}
