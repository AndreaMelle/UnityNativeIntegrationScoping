#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Binder
struct Binder_t748;
// System.Type[]
struct TypeU5BU5D_t720;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t749;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t764;
// System.Object[]
struct ObjectU5BU5D_t146;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes.h"
#include "mscorlib_System_Reflection_MemberTypes.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_TypeCode.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Type::.ctor()
extern "C" void Type__ctor_m9836 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Type::.cctor()
extern "C" void Type__cctor_m9837 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterName_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterName_impl_m9838 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterNameIgnoreCase_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterNameIgnoreCase_impl_m9839 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterAttribute_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterAttribute_impl_m9840 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Type::get_Attributes()
extern "C" int32_t Type_get_Attributes_m9841 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_DeclaringType()
extern "C" Type_t * Type_get_DeclaringType_m9842 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_HasElementType()
extern "C" bool Type_get_HasElementType_m9843 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
extern "C" bool Type_get_IsAbstract_m9844 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C" bool Type_get_IsArray_m9845 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsByRef()
extern "C" bool Type_get_IsByRef_m9846 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsClass()
extern "C" bool Type_get_IsClass_m9847 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsContextful()
extern "C" bool Type_get_IsContextful_m9848 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
extern "C" bool Type_get_IsEnum_m9849 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsExplicitLayout()
extern "C" bool Type_get_IsExplicitLayout_m9850 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
extern "C" bool Type_get_IsInterface_m9851 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsMarshalByRef()
extern "C" bool Type_get_IsMarshalByRef_m9852 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPointer()
extern "C" bool Type_get_IsPointer_m9853 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPrimitive()
extern "C" bool Type_get_IsPrimitive_m9854 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSealed()
extern "C" bool Type_get_IsSealed_m9855 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSerializable()
extern "C" bool Type_get_IsSerializable_m9856 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C" bool Type_get_IsValueType_m9857 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Type::get_MemberType()
extern "C" int32_t Type_get_MemberType_m9858 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_ReflectedType()
extern "C" Type_t * Type_get_ReflectedType_m9859 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1602  Type_get_TypeHandle_m9860 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Object)
extern "C" bool Type_Equals_m9861 (Type_t * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Type)
extern "C" bool Type_Equals_m9862 (Type_t * __this, Type_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::EqualsInternal(System.Type)
extern "C" bool Type_EqualsInternal_m9863 (Type_t * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_handle(System.IntPtr)
extern "C" Type_t * Type_internal_from_handle_m9864 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_name(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Type_internal_from_name_m9865 (Object_t * __this /* static, unused */, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String)
extern "C" Type_t * Type_GetType_m7943 (Object_t * __this /* static, unused */, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C" Type_t * Type_GetType_m3777 (Object_t * __this /* static, unused */, String_t* ___typeName, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCodeInternal(System.Type)
extern "C" int32_t Type_GetTypeCodeInternal_m9866 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCode(System.Type)
extern "C" int32_t Type_GetTypeCode_m9867 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" Type_t * Type_GetTypeFromHandle_m333 (Object_t * __this /* static, unused */, RuntimeTypeHandle_t1602  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::GetTypeHandle(System.Object)
extern "C" RuntimeTypeHandle_t1602  Type_GetTypeHandle_m9868 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_subtype_of(System.Type,System.Type,System.Boolean)
extern "C" bool Type_type_is_subtype_of_m9869 (Object_t * __this /* static, unused */, Type_t * ___a, Type_t * ___b, bool ___check_interfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_assignable_from(System.Type,System.Type)
extern "C" bool Type_type_is_assignable_from_m9870 (Object_t * __this /* static, unused */, Type_t * ___a, Type_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsSubclassOf(System.Type)
extern "C" bool Type_IsSubclassOf_m9871 (Type_t * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsAssignableFrom(System.Type)
extern "C" bool Type_IsAssignableFrom_m9872 (Type_t * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsInstanceOfType(System.Object)
extern "C" bool Type_IsInstanceOfType_m9873 (Type_t * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Type::GetHashCode()
extern "C" int32_t Type_GetHashCode_m9874 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
extern "C" MethodInfo_t * Type_GetMethod_m9875 (Type_t * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
extern "C" MethodInfo_t * Type_GetMethod_m9876 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * Type_GetMethod_m9877 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t748 * ___binder, TypeU5BU5D_t720* ___types, ParameterModifierU5BU5D_t749* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * Type_GetMethod_m9878 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t748 * ___binder, int32_t ___callConvention, TypeU5BU5D_t720* ___types, ParameterModifierU5BU5D_t749* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
extern "C" PropertyInfo_t * Type_GetProperty_m9879 (Type_t * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
extern "C" PropertyInfo_t * Type_GetProperty_m9880 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type)
extern "C" PropertyInfo_t * Type_GetProperty_m9881 (Type_t * __this, String_t* ___name, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type,System.Type[])
extern "C" PropertyInfo_t * Type_GetProperty_m9882 (Type_t * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t720* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * Type_GetProperty_m9883 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t748 * ___binder, Type_t * ___returnType, TypeU5BU5D_t720* ___types, ParameterModifierU5BU5D_t749* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsArrayImpl(System.Type)
extern "C" bool Type_IsArrayImpl_m9884 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsValueTypeImpl()
extern "C" bool Type_IsValueTypeImpl_m9885 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsContextfulImpl()
extern "C" bool Type_IsContextfulImpl_m9886 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsMarshalByRefImpl()
extern "C" bool Type_IsMarshalByRefImpl_m9887 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
extern "C" ConstructorInfo_t764 * Type_GetConstructor_m9888 (Type_t * __this, TypeU5BU5D_t720* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t764 * Type_GetConstructor_m9889 (Type_t * __this, int32_t ___bindingAttr, Binder_t748 * ___binder, TypeU5BU5D_t720* ___types, ParameterModifierU5BU5D_t749* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t764 * Type_GetConstructor_m9890 (Type_t * __this, int32_t ___bindingAttr, Binder_t748 * ___binder, int32_t ___callConvention, TypeU5BU5D_t720* ___types, ParameterModifierU5BU5D_t749* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Type::ToString()
extern "C" String_t* Type_ToString_m9891 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSystemType()
extern "C" bool Type_get_IsSystemType_m9892 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Type::GetGenericArguments()
extern "C" TypeU5BU5D_t720* Type_GetGenericArguments_m9893 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_ContainsGenericParameters()
extern "C" bool Type_get_ContainsGenericParameters_m9894 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericTypeDefinition()
extern "C" bool Type_get_IsGenericTypeDefinition_m9895 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition_impl()
extern "C" Type_t * Type_GetGenericTypeDefinition_impl_m9896 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition()
extern "C" Type_t * Type_GetGenericTypeDefinition_m9897 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericType()
extern "C" bool Type_get_IsGenericType_m9898 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type,System.Type[])
extern "C" Type_t * Type_MakeGenericType_m9899 (Object_t * __this /* static, unused */, Type_t * ___gt, TypeU5BU5D_t720* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type[])
extern "C" Type_t * Type_MakeGenericType_m9900 (Type_t * __this, TypeU5BU5D_t720* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericParameter()
extern "C" bool Type_get_IsGenericParameter_m9901 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsNested()
extern "C" bool Type_get_IsNested_m9902 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Type::GetPseudoCustomAttributes()
extern "C" ObjectU5BU5D_t146* Type_GetPseudoCustomAttributes_m9903 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
