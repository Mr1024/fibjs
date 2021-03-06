/***************************************************************************
 *                                                                         *
 *   This file was automatically generated using idlc.js                   *
 *   PLEASE DO NOT EDIT!!!!                                                *
 *                                                                         *
 ***************************************************************************/

#ifndef _Fiber_base_H_
#define _Fiber_base_H_

/**
 @author Leo Hoo <lion@9465.net>
 */

#include "../object.h"

namespace fibjs
{

class Fiber_base : public object_base
{
public:
	// Fiber_base
	virtual result_t join() = 0;
	virtual result_t get_caller(obj_ptr<Fiber_base>& retVal) = 0;

	DECLARE_CLASSINFO(Fiber_base);

public:
	static void s_join(const v8::FunctionCallbackInfo<v8::Value>& args);
	static void s_get_caller(v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Value> &args);
};

}

namespace fibjs
{
	inline ClassInfo& Fiber_base::class_info()
	{
		static ClassData::ClassMethod s_method[] = 
		{
			{"join", s_join}
		};

		static ClassData::ClassProperty s_property[] = 
		{
			{"caller", s_get_caller, block_set}
		};

		static ClassData s_cd = 
		{ 
			"Fiber", NULL, 
			1, s_method, 0, NULL, 1, s_property, NULL, NULL,
			&object_base::class_info()
		};

		static ClassInfo s_ci(s_cd);
		return s_ci;
	}

	inline void Fiber_base::s_get_caller(v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Value> &args)
	{
		obj_ptr<Fiber_base> vr;

		PROPERTY_ENTER();
		PROPERTY_INSTANCE(Fiber_base);

		hr = pInst->get_caller(vr);

		METHOD_RETURN();
	}

	inline void Fiber_base::s_join(const v8::FunctionCallbackInfo<v8::Value>& args)
	{
		METHOD_INSTANCE(Fiber_base);
		METHOD_ENTER(0, 0);

		hr = pInst->join();

		METHOD_VOID();
	}

}

#endif

