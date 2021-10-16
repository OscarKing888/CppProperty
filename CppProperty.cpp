// CppProperty.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Core.h"

enum class ETestEnum : int
{
    EnumValue1,
    EnumValue2
};

//
// declare the enum converter
//
class ETestEnumConverter : public AbstractEnumDescriptor
{
public:

    ETestEnumConverter()
    {

		M_AddEnumToDescriptorEx(ETestEnum::EnumValue1, DisplayValue1);
		M_AddEnumToDescriptorEx(ETestEnum::EnumValue2, DisplayValue1);

		AbstractEnumDescriptor::Init();
    }
};

M_ImpEnumDescriptor(ETestEnumConverter);


//
// build a test class
//
class TestProperty : public PropertyObject
{

    DeclProp(ETestEnum, EnumValue);
    DeclProp(int, IntValue);
    DeclPropConstRef(String, StringValue);
    DeclPropConstRef(StringMap, StringMapValue);

public:


    TestProperty();

    void BuildPropertyMap() override;

};


TestProperty::TestProperty()
    : IntValue(8)
    , StringValue("Demo String")
{

    for (int i = 0; i < 5; ++i)
    {
        String str = formatString("Str_%d", i);
        StringMapValue.insert(std::make_pair(str, str));
    }
}

void TestProperty::BuildPropertyMap()
{
    AddEnumProp(ETestEnumConverter,ETestEnum, EnumValue, TestProperty, "Desc of EnumValue", "Test Prop");
    AddProp(Property_Int, IntValue, TestProperty, "Desc of IntValue", "Test Prop");
    AddProp(Property_String, StringValue, TestProperty, "Desc of StringValue", "Test Prop");
    AddProp(Property_StringMap, StringMapValue, TestProperty, "Desc of StringMapValue", "Test Prop");
}


int main()
{
    std::cout << "Hello World!\n";

    TestProperty obj;
    
    // manual call build the properties
    obj.BuildPropertyMap();

    const PropertyMap& properties = obj.GetProperties();
    for (PropertyMap::const_iterator it = properties.begin(); it != properties.end(); ++it)
    {
        String outStr = formatString("%s = %s", it->first.c_str(), it->second->ToString().c_str());
        std::cout << outStr << std::endl;
    }
}