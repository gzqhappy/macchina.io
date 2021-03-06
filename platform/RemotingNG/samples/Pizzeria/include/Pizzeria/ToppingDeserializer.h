//
// ToppingDeserializer.h
//
// Package: Generated
// Module:  TypeDeserializer
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2006-2016, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#ifndef TypeDeserializer_Pizzeria_Topping_INCLUDED
#define TypeDeserializer_Pizzeria_Topping_INCLUDED


#include "Pizzeria/Topping.h"
#include "Poco/RemotingNG/TypeDeserializer.h"


namespace Poco {
namespace RemotingNG {


template <>
class TypeDeserializer<Pizzeria::Topping>
{
public:
	static bool deserialize(const std::string& name, bool isMandatory, Deserializer& deser, Pizzeria::Topping& value)
	{
		bool ret = deser.deserializeStructBegin(name, isMandatory);
		if (ret)
		{
			deserializeImpl(deser, value);
			deser.deserializeStructEnd(name);
		}
		return ret;
	}

	static void deserializeImpl(Deserializer& deser, Pizzeria::Topping& value)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"name","price"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool ret = false;
		std::string gen_name;
		ret = TypeDeserializer<std::string >::deserialize(REMOTING__NAMES[0], true, deser, gen_name);
		if (ret) value.setName(gen_name);
		Poco::UInt32 gen_price;
		ret = TypeDeserializer<Poco::UInt32 >::deserialize(REMOTING__NAMES[1], true, deser, gen_price);
		if (ret) value.setPrice(gen_price);
	}

};


} // namespace RemotingNG
} // namespace Poco


#endif // TypeDeserializer_Pizzeria_Topping_INCLUDED

