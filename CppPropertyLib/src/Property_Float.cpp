// *************************************************************************************
// 
// 	Copyright (c) 2007 XGames
// 
// 	All Rights Reserved 
// 
// 	Created by		:		Oscar.Chen
// 	Create Date		:		2008-07-18
// *************************************************************************************

#include "pch.h"
#include "Property_Float.h"



Property_Float::Property_Float(SetFunType setFun, GetFunType getFun)
	: Base(setFun, getFun)
	, _rangeMin(0.0f)
	, _rangeMax(1.0f)
	, _isRangeLimited(false)
{
}

void Property_Float::FromString(const String& val)
{
	float v = StringConverter::parseFloat(val);
	SetValue(v);
}

String Property_Float::ToString() const
{
	float v = GetValue();
	return StringConverter::toString(v);
}
