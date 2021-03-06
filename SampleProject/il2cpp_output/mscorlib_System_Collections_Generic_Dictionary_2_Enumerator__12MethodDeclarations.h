﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1646;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10791_gshared (Enumerator_t1651 * __this, Dictionary_2_t1646 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10791(__this, ___dictionary, method) (( void (*) (Enumerator_t1651 *, Dictionary_2_t1646 *, const MethodInfo*))Enumerator__ctor_m10791_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10792_gshared (Enumerator_t1651 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10792(__this, method) (( Object_t * (*) (Enumerator_t1651 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10792_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t564  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10793_gshared (Enumerator_t1651 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10793(__this, method) (( DictionaryEntry_t564  (*) (Enumerator_t1651 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10793_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10794_gshared (Enumerator_t1651 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10794(__this, method) (( Object_t * (*) (Enumerator_t1651 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10794_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10795_gshared (Enumerator_t1651 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10795(__this, method) (( Object_t * (*) (Enumerator_t1651 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10795_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10796_gshared (Enumerator_t1651 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10796(__this, method) (( bool (*) (Enumerator_t1651 *, const MethodInfo*))Enumerator_MoveNext_m10796_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1622  Enumerator_get_Current_m10797_gshared (Enumerator_t1651 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10797(__this, method) (( KeyValuePair_2_t1622  (*) (Enumerator_t1651 *, const MethodInfo*))Enumerator_get_Current_m10797_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m10798_gshared (Enumerator_t1651 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10798(__this, method) (( Object_t * (*) (Enumerator_t1651 *, const MethodInfo*))Enumerator_get_CurrentKey_m10798_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t1514  Enumerator_get_CurrentValue_m10799_gshared (Enumerator_t1651 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10799(__this, method) (( KeyValuePair_2_t1514  (*) (Enumerator_t1651 *, const MethodInfo*))Enumerator_get_CurrentValue_m10799_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m10800_gshared (Enumerator_t1651 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10800(__this, method) (( void (*) (Enumerator_t1651 *, const MethodInfo*))Enumerator_VerifyState_m10800_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10801_gshared (Enumerator_t1651 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10801(__this, method) (( void (*) (Enumerator_t1651 *, const MethodInfo*))Enumerator_VerifyCurrent_m10801_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m10802_gshared (Enumerator_t1651 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10802(__this, method) (( void (*) (Enumerator_t1651 *, const MethodInfo*))Enumerator_Dispose_m10802_gshared)(__this, method)
