#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single>
struct Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,System.Single>
struct Dictionary_2_tD6336C1E43D33973F64744AF3B0B1E66CB234D61;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter>
struct ExposedRegistrationList_1_t7932F633A860258335FD94BBFDE46AC92B1CF84B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo>
struct Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct HashSetList_1_tB0E5508E89C533C11CEB3536E5482FFDC036DABE;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable>
struct HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct HashSetList_1_tE0EFB7DD0405CCE9F3D8363787AA148691CAA84B;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor>
struct HashSetList_1_tF4597D6E0634CA8A9A545B12E6AEF4E7F4E95EB5;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct IEqualityComparer_1_tE07E55CA1B6313FD9AAEFCF707E6F2EC0C7B0791;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct KeyCollection_t564282972C01B8565FB9A5F85D864C59560D1808;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tC6684CD164AA8009B3DC3C06499A47813321B877;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint>
struct List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>[]
struct EntryU5BU5D_tC99B1D6C4116074FF4FF32881026E7AEC3E25093;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6;
// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor
struct IXRHoverInteractor_tE2EF7002213610DA0D67421CFA21B1A95113BA61;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup
struct IXRInteractionGroup_tAD9069A6C37036CE5C97D68CF2F97B1F25044D5D;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache
struct RegisteredUIInteractorCache_t81419313AA113B206AF3FF94CD9D3B64A09CE413;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// UnityEngine.XR.Content.Interaction.XRKnob
struct XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126;
// UnityEngine.XR.Content.Interaction.XRLever
struct XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510;
// UnityEngine.XR.Content.Interaction.XRPushButton
struct XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3;
// UnityEngine.XR.Content.Interaction.XRSlider
struct XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51;
// UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent
struct ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150;
// UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent
struct ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17;
// UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo
struct PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C;
// UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent
struct ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer
struct RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D;
// UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent
struct ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC99B1D6C4116074FF4FF32881026E7AEC3E25093* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t564282972C01B8565FB9A5F85D864C59560D1808* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* ____dictionary_0;
};

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo
struct PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::m_Interactor
	RuntimeObject* ___m_Interactor_0;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::m_InPressRegion
	bool ___m_InPressRegion_1;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::m_WrongSide
	bool ___m_WrongSide_2;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.PhysicsScene
struct PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE 
{
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation
struct TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3 
{
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::m_BaseAngle
	float ___m_BaseAngle_0;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::m_CurrentOffset
	float ___m_CurrentOffset_1;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::m_AccumulatedAngle
	float ___m_AccumulatedAngle_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB  : public UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008
{
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832  : public UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0  : public UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8
{
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6  : public UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B
{
};

// UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent
struct ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent
struct ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent
struct ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent
struct ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::registered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::unregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___unregistered_7;
	// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<getDistanceOverride>k__BackingField
	Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF* ___U3CgetDistanceOverrideU3Ek__BackingField_8;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_9;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_10;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_11;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_12;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/DistanceCalculationMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_DistanceCalculationMode
	int32_t ___m_DistanceCalculationMode_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_14;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeInteraction
	bool ___m_AllowGazeInteraction_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeSelect
	bool ___m_AllowGazeSelect_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OverrideGazeTimeToSelect
	bool ___m_OverrideGazeTimeToSelect_18;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_GazeTimeToSelect
	float ___m_GazeTimeToSelect_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OverrideTimeToAutoDeselectGaze
	bool ___m_OverrideTimeToAutoDeselectGaze_20;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_TimeToAutoDeselectGaze
	float ___m_TimeToAutoDeselectGaze_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeAssistance
	bool ___m_AllowGazeAssistance_22;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_FirstHoverEntered_23;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_LastHoverExited_24;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_25;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_26;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_FirstSelectEntered_27;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_LastSelectExited_28;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_29;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_30;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Activated
	ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* ___m_Activated_31;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Deactivated
	DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D* ___m_Deactivated_32;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractorsHovering
	HashSetList_1_tB0E5508E89C533C11CEB3536E5482FFDC036DABE* ___m_InteractorsHovering_33;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractorsSelecting
	HashSetList_1_tE0EFB7DD0405CCE9F3D8363787AA148691CAA84B* ___m_InteractorsSelecting_34;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_35;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_36;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_37;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_38;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_39;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingInteractionStrengthFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingInteractionStrengthFilters_40;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionStrengthFilters
	ExposedRegistrationList_1_t7932F633A860258335FD94BBFDE46AC92B1CF84B* ___m_InteractionStrengthFilters_41;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_42;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_AttachPoseOnSelect_43;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_LocalAttachPoseOnSelect_44;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_ReticleCache
	Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137* ___m_ReticleCache_45;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_VariableSelectInteractors
	HashSetList_1_tF4597D6E0634CA8A9A545B12E6AEF4E7F4E95EB5* ___m_VariableSelectInteractors_46;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionStrengths
	Dictionary_2_tD6336C1E43D33973F64744AF3B0B1E66CB234D61* ___m_InteractionStrengths_47;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_48;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnFirstHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnFirstHoverEntered_51;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnLastHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnLastHoverExited_52;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverEntered_53;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverExited_54;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectEntered_55;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectExited_56;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectCanceled
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectCanceled_57;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnActivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnActivate_58;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnDeactivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnDeactivate_59;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<hoveringInteractors>k__BackingField
	List_1_tC6684CD164AA8009B3DC3C06499A47813321B877* ___U3ChoveringInteractorsU3Ek__BackingField_60;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_7;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_8;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<containingGroup>k__BackingField
	RuntimeObject* ___U3CcontainingGroupU3Ek__BackingField_9;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_10;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_11;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DisableVisualsWhenBlockedInGroup
	bool ___m_DisableVisualsWhenBlockedInGroup_14;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_15;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_17;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_20;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_22;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_23;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_24;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesHovered
	HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945* ___m_InteractablesHovered_25;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesSelected
	HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0* ___m_InteractablesSelected_26;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_27;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_28;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_29;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_30;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_31;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_32;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_33;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_34;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengthInteractables
	HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2* ___m_InteractionStrengthInteractables_35;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengths
	Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2* ___m_InteractionStrengths_36;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_38;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_41;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CtargetsForSelectionU3Ek__BackingField_42;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_43;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_44;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_45;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_46;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_47;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_48;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_49;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_50;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_TargetPriorityMode
	int32_t ___m_TargetPriorityMode_51;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_52;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_53;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_54;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_55;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_56;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_57;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_58;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_59;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_60;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_61;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_62;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_63;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverAudioWhileSelecting
	bool ___m_AllowHoverAudioWhileSelecting_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_65;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_66;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_67;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_68;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_69;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_71;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_72;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_73;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_74;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_75;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_76;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_77;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_78;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_79;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_80;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_81;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_82;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverHapticsWhileSelecting
	bool ___m_AllowHoverHapticsWhileSelecting_83;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_84;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_85;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_86;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_87;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_89;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_90;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_91;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_EffectsAudioSource_92;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3CvalidTargetsU3Ek__BackingField_93;
};

// UnityEngine.XR.Content.Interaction.XRKnob
struct XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRKnob::m_Handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Handle_62;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_Value
	float ___m_Value_63;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRKnob::m_ClampedMotion
	bool ___m_ClampedMotion_64;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_MaxAngle
	float ___m_MaxAngle_65;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_MinAngle
	float ___m_MinAngle_66;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_AngleIncrement
	float ___m_AngleIncrement_67;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_PositionTrackedRadius
	float ___m_PositionTrackedRadius_68;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_TwistSensitivity
	float ___m_TwistSensitivity_69;
	// UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRKnob::m_OnValueChange
	ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* ___m_OnValueChange_70;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Content.Interaction.XRKnob::m_Interactor
	RuntimeObject* ___m_Interactor_71;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRKnob::m_PositionDriven
	bool ___m_PositionDriven_72;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRKnob::m_UpVectorDriven
	bool ___m_UpVectorDriven_73;
	// UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation UnityEngine.XR.Content.Interaction.XRKnob::m_PositionAngles
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3 ___m_PositionAngles_74;
	// UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation UnityEngine.XR.Content.Interaction.XRKnob::m_UpVectorAngles
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3 ___m_UpVectorAngles_75;
	// UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation UnityEngine.XR.Content.Interaction.XRKnob::m_ForwardVectorAngles
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3 ___m_ForwardVectorAngles_76;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_BaseKnobRotation
	float ___m_BaseKnobRotation_77;
};

// UnityEngine.XR.Content.Interaction.XRLever
struct XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRLever::m_Handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Handle_62;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::m_Value
	bool ___m_Value_63;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::m_LockToValue
	bool ___m_LockToValue_64;
	// System.Single UnityEngine.XR.Content.Interaction.XRLever::m_MaxAngle
	float ___m_MaxAngle_65;
	// System.Single UnityEngine.XR.Content.Interaction.XRLever::m_MinAngle
	float ___m_MinAngle_66;
	// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRLever::m_OnLeverActivate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnLeverActivate_67;
	// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRLever::m_OnLeverDeactivate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnLeverDeactivate_68;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Content.Interaction.XRLever::m_Interactor
	RuntimeObject* ___m_Interactor_69;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::<lockToValue>k__BackingField
	bool ___U3ClockToValueU3Ek__BackingField_70;
};

// UnityEngine.XR.Content.Interaction.XRPushButton
struct XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRPushButton::m_Button
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Button_61;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_PressDistance
	float ___m_PressDistance_62;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_PressBuffer
	float ___m_PressBuffer_63;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_ButtonOffset
	float ___m_ButtonOffset_64;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_ButtonSize
	float ___m_ButtonSize_65;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::m_ToggleButton
	bool ___m_ToggleButton_66;
	// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRPushButton::m_OnPress
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnPress_67;
	// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRPushButton::m_OnRelease
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnRelease_68;
	// UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRPushButton::m_OnValueChange
	ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* ___m_OnValueChange_69;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::m_Pressed
	bool ___m_Pressed_70;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::m_Toggled
	bool ___m_Toggled_71;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_Value
	float ___m_Value_72;
	// UnityEngine.Vector3 UnityEngine.XR.Content.Interaction.XRPushButton::m_BaseButtonPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_BaseButtonPosition_73;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo> UnityEngine.XR.Content.Interaction.XRPushButton::m_HoveringInteractors
	Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* ___m_HoveringInteractors_74;
};

// UnityEngine.XR.Content.Interaction.XRSlider
struct XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRSlider::m_Handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Handle_61;
	// System.Single UnityEngine.XR.Content.Interaction.XRSlider::m_Value
	float ___m_Value_62;
	// System.Single UnityEngine.XR.Content.Interaction.XRSlider::m_MaxPosition
	float ___m_MaxPosition_63;
	// System.Single UnityEngine.XR.Content.Interaction.XRSlider::m_MinPosition
	float ___m_MinPosition_64;
	// UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRSlider::m_OnValueChange
	ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* ___m_OnValueChange_65;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Content.Interaction.XRSlider::m_Interactor
	RuntimeObject* ___m_Interactor_66;
};

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76  : public XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E
{
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LineType
	int32_t ___m_LineType_98;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_BlendVisualLinePoints
	bool ___m_BlendVisualLinePoints_99;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_MaxRaycastDistance
	float ___m_MaxRaycastDistance_100;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RayOriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RayOriginTransform_101;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ReferenceFrame_102;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Velocity
	float ___m_Velocity_103;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Acceleration
	float ___m_Acceleration_104;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalGroundHeight
	float ___m_AdditionalGroundHeight_105;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalFlightTime
	float ___m_AdditionalFlightTime_106;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointDistance
	float ___m_EndPointDistance_107;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointHeight
	float ___m_EndPointHeight_108;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointDistance
	float ___m_ControlPointDistance_109;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointHeight
	float ___m_ControlPointHeight_110;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SampleFrequency
	int32_t ___m_SampleFrequency_111;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitDetectionType
	int32_t ___m_HitDetectionType_112;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SphereCastRadius
	float ___m_SphereCastRadius_113;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastMask_114;
	// UnityEngine.QueryTriggerInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastTriggerInteraction
	int32_t ___m_RaycastTriggerInteraction_115;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/QuerySnapVolumeInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastSnapVolumeInteraction
	int32_t ___m_RaycastSnapVolumeInteraction_116;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitClosestOnly
	bool ___m_HitClosestOnly_117;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverToSelect
	bool ___m_HoverToSelect_118;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverTimeToSelect
	float ___m_HoverTimeToSelect_119;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AutoDeselect
	bool ___m_AutoDeselect_120;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TimeToAutoDeselect
	float ___m_TimeToAutoDeselect_121;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EnableUIInteraction
	bool ___m_EnableUIInteraction_122;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AllowAnchorControl
	bool ___m_AllowAnchorControl_123;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UseForceGrab
	bool ___m_UseForceGrab_124;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RotateSpeed
	float ___m_RotateSpeed_125;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TranslateSpeed
	float ___m_TranslateSpeed_126;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotateReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AnchorRotateReferenceFrame_127;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/AnchorRotationMode UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotationMode
	int32_t ___m_AnchorRotationMode_128;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::<currentNearestValidTarget>k__BackingField
	RuntimeObject* ___U3CcurrentNearestValidTargetU3Ek__BackingField_129;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_130;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeHoveredObjectChanged
	float ___m_LastTimeHoveredObjectChanged_131;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedHoverTimeToSelect
	bool ___m_PassedHoverTimeToSelect_132;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeAutoSelected
	float ___m_LastTimeAutoSelected_133;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedTimeToAutoDeselect
	bool ___m_PassedTimeToAutoDeselect_134;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_RaycastHits_135;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitsCount
	int32_t ___m_RaycastHitsCount_136;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitComparer
	RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D* ___m_RaycastHitComparer_137;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___m_SamplePoints_138;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePointsFrameUpdated
	int32_t ___m_SamplePointsFrameUpdated_139;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitEndpointIndex
	int32_t ___m_RaycastHitEndpointIndex_140;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIRaycastHitEndpointIndex
	int32_t ___m_UIRaycastHitEndpointIndex_141;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ControlPoints_142;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitChordControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_HitChordControlPoints_143;
	// UnityEngine.PhysicsScene UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LocalPhysicsScene
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___m_LocalPhysicsScene_146;
	// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RegisteredUIInteractorCache
	RegisteredUIInteractorCache_t81419313AA113B206AF3FF94CD9D3B64A09CE413* ___m_RegisteredUIInteractorCache_147;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>

// UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo

// UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.Single>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs

// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation

// UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent

// UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent

// UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent

// UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent

// UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent

// UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent

// UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent

// UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent

// UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_49;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_50;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable

// UnityEngine.XR.Content.Interaction.XRKnob

// UnityEngine.XR.Content.Interaction.XRKnob

// UnityEngine.XR.Content.Interaction.XRLever

// UnityEngine.XR.Content.Interaction.XRLever

// UnityEngine.XR.Content.Interaction.XRPushButton

// UnityEngine.XR.Content.Interaction.XRPushButton

// UnityEngine.XR.Content.Interaction.XRSlider

// UnityEngine.XR.Content.Interaction.XRSlider

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_Results
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___s_Results_94;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchSamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___s_ScratchSamplePoints_144;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_ScratchControlPoints_145;
};

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___0_arg0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
inline void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, const RuntimeMethod*))UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::ValueToRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::SetKnobRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___0_angle, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24 (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2 (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40 (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602 (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::get_interactorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C (SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::UpdateBaseKnobRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_UpdateBaseKnobRotation_m59532D40C91665CAB7CBBE2C463DF6D4364BF670 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::UpdateRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_UpdateRotation_m0E4BD48C3FFF352C9228A01ACA40EAA0F523B397 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, bool ___0_freshCheck, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, int32_t ___0_updatePhase, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_isSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::SetBaseFromVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::SetTargetFromVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3 (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::get_totalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
inline void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, float, const RuntimeMethod*))UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared)(__this, ___0_arg0, method);
}
// System.Single UnityEngine.Mathf::LerpUnclamped(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mBC41FCEA0AA4690860AE97314638CE07A22C2372 (ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::ShortestAngleDistance(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ShortestAngleDistance_mD9CB60A4DA2B17654A28956C9FFD6AC828611979 (float ___0_start, float ___1_end, float ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRLever::SetValue(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, bool ___0_isOn, bool ___1_forceRotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRLever::UpdateValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_UpdateValue_m9E36BF1D16C71BEADDAB1BC298C8580663F989FA (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Content.Interaction.XRLever::GetLookDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRLever_GetLookDirection_m60D20489074AC4ADA156F2E6C6D58EA798D3A10B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRLever::SetHandleAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, float ___0_angle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::SetButtonHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, float ___0_height, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::IsHoverableBy(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractable_IsHoverableBy_mA746CF4F19A39315495C004ED35EF6AF75AA8429 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, RuntimeObject* ___0_interactor, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_hoverEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4 (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008*, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_hoverExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8 (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26*, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33 (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008*, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26*, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___0_call, method);
}
// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs::get_interactorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoverEnterEventArgs_get_interactorObject_m9735CAB1FCE64F6DD65498458C582463A0FB5D19 (HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressInfo__ctor_m772C95227A64BD660EBF391384EED3B0BEFCFC15 (PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::Add(TKey,TValue)
inline void Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, RuntimeObject* ___0_key, PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, RuntimeObject*, PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::get_interactorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoverExitEventArgs_get_interactorObject_m0018175DBF0540C147451C1E11B5EE5DA64CB150 (HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::Remove(TKey)
inline bool Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::get_Count()
inline int32_t Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::UpdatePress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_UpdatePress_m3ED769AB20F6E97BFAFAD1D5E05114F3A7589906 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::get_Values()
inline ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::GetEnumerator()
inline Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6 (ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB (*) (ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::Dispose()
inline void Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::get_Current()
inline PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_inline (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB* __this, const RuntimeMethod* method)
{
	return ((  PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* (*) (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::MoveNext()
inline bool Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885 (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::.ctor()
inline void Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9 (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::SetSliderPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::UpdateSliderPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_UpdateSliderPosition_m816CAAC7F9DAECFD0C0822B62B195B71680F4D87 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_m36E0FB628F57A83BB57A575FD914FAA4C5CCABB4 (ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mB08B11080CE454CBC4CB39B37FD66F817EA51D49 (ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRKnob::get_handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRKnob_get_handle_m7F6B8F24D831A17AB8CD99A79B626BBF83AC4D39 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Handle;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Handle_62;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_handle(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_handle_m1CFBFCA56E72D9A549283A38765E40E3E8F5CA6B (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Handle = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___m_Handle_62 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handle_62), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_get_value_m036F021BC339E0693B7124D00AD9875CB861EF4A (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Value;
		float L_0 = __this->___m_Value_63;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_value_m8AD52C0F9D6013794943E32005C0FF0F62E64C0C (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// SetValue(value);
		float L_0 = ___0_value;
		XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51(__this, L_0, NULL);
		// SetKnobRotation(ValueToRotation());
		float L_1;
		L_1 = XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127(__this, NULL);
		XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRKnob::get_clampedMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRKnob_get_clampedMotion_m4EF4962B0C2434D133706267F161CC9124D09AFA (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ClampedMotion;
		bool L_0 = __this->___m_ClampedMotion_64;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_clampedMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_clampedMotion_mFEB66402DC0BF4BF5E15A9BF90B6F3CD473E9934 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ClampedMotion = value;
		bool L_0 = ___0_value;
		__this->___m_ClampedMotion_64 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::get_maxAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_get_maxAngle_m39B05E0691B03E142AE17FCF074B29A292FA3FBA (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxAngle;
		float L_0 = __this->___m_MaxAngle_65;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_maxAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_maxAngle_mADDF8207D8313AC4D6AF2115FB24A849F282015C (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_MaxAngle = value;
		float L_0 = ___0_value;
		__this->___m_MaxAngle_65 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::get_minAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_get_minAngle_mF2F223E11482E07D52EC7190FA57EAB4E128DAE8 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MinAngle;
		float L_0 = __this->___m_MinAngle_66;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_minAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_minAngle_m98EA7CA2B323D43AB5A132506B03D92E170A5AAD (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_MinAngle = value;
		float L_0 = ___0_value;
		__this->___m_MinAngle_66 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::get_positionTrackedRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_get_positionTrackedRadius_m06D2C86AD84AED23FF77EE96153C467E36B493F5 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PositionTrackedRadius;
		float L_0 = __this->___m_PositionTrackedRadius_68;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_positionTrackedRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_positionTrackedRadius_mA486838E52AFC38306FAE8BBF931B6054B38B1A2 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_PositionTrackedRadius = value;
		float L_0 = ___0_value;
		__this->___m_PositionTrackedRadius_68 = L_0;
		return;
	}
}
// UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRKnob::get_onValueChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* XRKnob_get_onValueChange_m920F1FD70F30013B5F7D4581458D1905E262FFF6 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// public ValueChangeEvent onValueChange => m_OnValueChange;
		ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* L_0 = __this->___m_OnValueChange_70;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_Start_m54A81813A1E7AA065B75DBC4F2655532956F9963 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// SetValue(m_Value);
		float L_0 = __this->___m_Value_63;
		XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51(__this, L_0, NULL);
		// SetKnobRotation(ValueToRotation());
		float L_1;
		L_1 = XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127(__this, NULL);
		XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_OnEnable_m4579BC2D391B93DB43B31FE5E6D7073406695460 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// selectEntered.AddListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_0, L_1, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_2, L_3, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_OnDisable_mDA8DD83B30DF53874BEAED4465593BA1A2EFA095 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectEntered.RemoveListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_0, L_1, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_2, L_3, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::StartGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___0_args, const RuntimeMethod* method) 
{
	{
		// m_Interactor = args.interactorObject;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___0_args;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		__this->___m_Interactor_71 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_71), (void*)L_1);
		// m_PositionAngles.Reset();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_2 = (&__this->___m_PositionAngles_74);
		TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E(L_2, NULL);
		// m_UpVectorAngles.Reset();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_3 = (&__this->___m_UpVectorAngles_75);
		TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E(L_3, NULL);
		// m_ForwardVectorAngles.Reset();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_4 = (&__this->___m_ForwardVectorAngles_76);
		TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E(L_4, NULL);
		// UpdateBaseKnobRotation();
		XRKnob_UpdateBaseKnobRotation_m59532D40C91665CAB7CBBE2C463DF6D4364BF670(__this, NULL);
		// UpdateRotation(true);
		XRKnob_UpdateRotation_m0E4BD48C3FFF352C9228A01ACA40EAA0F523B397(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::EndGrab(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___0_args, const RuntimeMethod* method) 
{
	{
		// m_Interactor = null;
		__this->___m_Interactor_71 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_71), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_ProcessInteractable_m85660AF86FF7C80552D7B88BA601FDE0E930C6D3 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, int32_t ___0_updatePhase, const RuntimeMethod* method) 
{
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___0_updatePhase;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___0_updatePhase;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		// if (isSelected)
		bool L_2;
		L_2 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// UpdateRotation();
		XRKnob_UpdateRotation_m0E4BD48C3FFF352C9228A01ACA40EAA0F523B397(__this, (bool)0, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::UpdateRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_UpdateRotation_m0E4BD48C3FFF352C9228A01ACA40EAA0F523B397 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, bool ___0_freshCheck, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// var interactorTransform = m_Interactor.GetAttachTransform(this);
		RuntimeObject* L_0 = __this->___m_Interactor_71;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_0, __this);
		V_0 = L_1;
		// var localOffset = transform.InverseTransformVector(interactorTransform.position - m_Handle.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_Handle_62;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_6, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044(L_2, L_7, NULL);
		V_1 = L_8;
		// localOffset.y = 0.0f;
		(&V_1)->___y_3 = (0.0f);
		// var radiusOffset = transform.TransformVector(localOffset).magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(L_9, L_10, NULL);
		V_8 = L_11;
		float L_12;
		L_12 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_8), NULL);
		V_2 = L_12;
		// localOffset.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_1), NULL);
		// var localForward = transform.InverseTransformDirection(interactorTransform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_0;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_13, L_15, NULL);
		V_3 = L_16;
		// var localY = Math.Abs(localForward.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_3;
		float L_18 = L_17.___y_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_19;
		L_19 = fabsf(L_18);
		V_4 = L_19;
		// localForward.y = 0.0f;
		(&V_3)->___y_3 = (0.0f);
		// localForward.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_3), NULL);
		// var localUp = transform.InverseTransformDirection(interactorTransform.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_0;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_21, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_20, L_22, NULL);
		V_5 = L_23;
		// localUp.y = 0.0f;
		(&V_5)->___y_3 = (0.0f);
		// localUp.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_5), NULL);
		// if (m_PositionDriven && !freshCheck)
		bool L_24 = __this->___m_PositionDriven_72;
		if (!L_24)
		{
			goto IL_00c3;
		}
	}
	{
		bool L_25 = ___0_freshCheck;
		if (L_25)
		{
			goto IL_00c3;
		}
	}
	{
		// radiusOffset *= (1.0f + k_ModeSwitchDeadZone);
		float L_26 = V_2;
		V_2 = ((float)il2cpp_codegen_multiply(L_26, (1.10000002f)));
	}

IL_00c3:
	{
		// if (radiusOffset >= m_PositionTrackedRadius)
		float L_27 = V_2;
		float L_28 = __this->___m_PositionTrackedRadius_68;
		if ((!(((float)L_27) >= ((float)L_28))))
		{
			goto IL_00ee;
		}
	}
	{
		// if (!m_PositionDriven || freshCheck)
		bool L_29 = __this->___m_PositionDriven_72;
		bool L_30 = ___0_freshCheck;
		if (!((int32_t)(((((int32_t)L_29) == ((int32_t)0))? 1 : 0)|(int32_t)L_30)))
		{
			goto IL_00f5;
		}
	}
	{
		// m_PositionAngles.SetBaseFromVector(localOffset);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_31 = (&__this->___m_PositionAngles_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_1;
		TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B(L_31, L_32, NULL);
		// m_PositionDriven = true;
		__this->___m_PositionDriven_72 = (bool)1;
		goto IL_00f5;
	}

IL_00ee:
	{
		// m_PositionDriven = false;
		__this->___m_PositionDriven_72 = (bool)0;
	}

IL_00f5:
	{
		// if (!freshCheck)
		bool L_33 = ___0_freshCheck;
		if (L_33)
		{
			goto IL_0116;
		}
	}
	{
		// if (!m_UpVectorDriven)
		bool L_34 = __this->___m_UpVectorDriven_73;
		if (L_34)
		{
			goto IL_010c;
		}
	}
	{
		// localY *= (1.0f - (k_ModeSwitchDeadZone * 0.5f));
		float L_35 = V_4;
		V_4 = ((float)il2cpp_codegen_multiply(L_35, (0.949999988f)));
		goto IL_0116;
	}

IL_010c:
	{
		// localY *= (1.0f + (k_ModeSwitchDeadZone * 0.5f));
		float L_36 = V_4;
		V_4 = ((float)il2cpp_codegen_multiply(L_36, (1.04999995f)));
	}

IL_0116:
	{
		// if (localY > 0.707f)
		float L_37 = V_4;
		if ((!(((float)L_37) > ((float)(0.707000017f)))))
		{
			goto IL_0142;
		}
	}
	{
		// if (!m_UpVectorDriven || freshCheck)
		bool L_38 = __this->___m_UpVectorDriven_73;
		bool L_39 = ___0_freshCheck;
		if (!((int32_t)(((((int32_t)L_38) == ((int32_t)0))? 1 : 0)|(int32_t)L_39)))
		{
			goto IL_015f;
		}
	}
	{
		// m_UpVectorAngles.SetBaseFromVector(localUp);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_40 = (&__this->___m_UpVectorAngles_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_5;
		TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B(L_40, L_41, NULL);
		// m_UpVectorDriven = true;
		__this->___m_UpVectorDriven_73 = (bool)1;
		goto IL_015f;
	}

IL_0142:
	{
		// if (m_UpVectorDriven || freshCheck)
		bool L_42 = __this->___m_UpVectorDriven_73;
		bool L_43 = ___0_freshCheck;
		if (!((int32_t)((int32_t)L_42|(int32_t)L_43)))
		{
			goto IL_015f;
		}
	}
	{
		// m_ForwardVectorAngles.SetBaseFromVector(localForward);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_44 = (&__this->___m_ForwardVectorAngles_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_3;
		TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B(L_44, L_45, NULL);
		// m_UpVectorDriven = false;
		__this->___m_UpVectorDriven_73 = (bool)0;
	}

IL_015f:
	{
		// if (m_PositionDriven)
		bool L_46 = __this->___m_PositionDriven_72;
		if (!L_46)
		{
			goto IL_0173;
		}
	}
	{
		// m_PositionAngles.SetTargetFromVector(localOffset);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_47 = (&__this->___m_PositionAngles_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_1;
		TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3(L_47, L_48, NULL);
	}

IL_0173:
	{
		// if (m_UpVectorDriven)
		bool L_49 = __this->___m_UpVectorDriven_73;
		if (!L_49)
		{
			goto IL_018a;
		}
	}
	{
		// m_UpVectorAngles.SetTargetFromVector(localUp);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_50 = (&__this->___m_UpVectorAngles_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_5;
		TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3(L_50, L_51, NULL);
		goto IL_0196;
	}

IL_018a:
	{
		// m_ForwardVectorAngles.SetTargetFromVector(localForward);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_52 = (&__this->___m_ForwardVectorAngles_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
		TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3(L_52, L_53, NULL);
	}

IL_0196:
	{
		// var knobRotation = m_BaseKnobRotation - ((m_UpVectorAngles.totalOffset + m_ForwardVectorAngles.totalOffset) * m_TwistSensitivity) - m_PositionAngles.totalOffset;
		float L_54 = __this->___m_BaseKnobRotation_77;
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_55 = (&__this->___m_UpVectorAngles_75);
		float L_56;
		L_56 = TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D(L_55, NULL);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_57 = (&__this->___m_ForwardVectorAngles_76);
		float L_58;
		L_58 = TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D(L_57, NULL);
		float L_59 = __this->___m_TwistSensitivity_69;
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_60 = (&__this->___m_PositionAngles_74);
		float L_61;
		L_61 = TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D(L_60, NULL);
		V_6 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_54, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_56, L_58)), L_59)))), L_61));
		// if (m_ClampedMotion)
		bool L_62 = __this->___m_ClampedMotion_64;
		if (!L_62)
		{
			goto IL_01e6;
		}
	}
	{
		// knobRotation = Mathf.Clamp(knobRotation, m_MinAngle, m_MaxAngle);
		float L_63 = V_6;
		float L_64 = __this->___m_MinAngle_66;
		float L_65 = __this->___m_MaxAngle_65;
		float L_66;
		L_66 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_63, L_64, L_65, NULL);
		V_6 = L_66;
	}

IL_01e6:
	{
		// SetKnobRotation(knobRotation);
		float L_67 = V_6;
		XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0(__this, L_67, NULL);
		// var knobValue = (knobRotation - m_MinAngle) / (m_MaxAngle - m_MinAngle);
		float L_68 = V_6;
		float L_69 = __this->___m_MinAngle_66;
		float L_70 = __this->___m_MaxAngle_65;
		float L_71 = __this->___m_MinAngle_66;
		V_7 = ((float)(((float)il2cpp_codegen_subtract(L_68, L_69))/((float)il2cpp_codegen_subtract(L_70, L_71))));
		// SetValue(knobValue);
		float L_72 = V_7;
		XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51(__this, L_72, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::SetKnobRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___0_angle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AngleIncrement > 0)
		float L_0 = __this->___m_AngleIncrement_67;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// var normalizeAngle = angle - m_MinAngle;
		float L_1 = ___0_angle;
		float L_2 = __this->___m_MinAngle_66;
		// angle = (Mathf.Round(normalizeAngle / m_AngleIncrement) * m_AngleIncrement) + m_MinAngle;
		float L_3 = __this->___m_AngleIncrement_67;
		float L_4;
		L_4 = bankers_roundf(((float)(((float)il2cpp_codegen_subtract(L_1, L_2))/L_3)));
		float L_5 = __this->___m_AngleIncrement_67;
		float L_6 = __this->___m_MinAngle_66;
		___0_angle = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, L_5)), L_6));
	}

IL_0031:
	{
		// if (m_Handle != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___m_Handle_62;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		// m_Handle.localEulerAngles = new Vector3(0.0f, angle, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___m_Handle_62;
		float L_10 = ___0_angle;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.0f), L_10, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_9, L_11, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (m_ClampedMotion)
		bool L_0 = __this->___m_ClampedMotion_64;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// value = Mathf.Clamp01(value);
		float L_1 = ___0_value;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		___0_value = L_2;
	}

IL_0010:
	{
		// if (m_AngleIncrement > 0)
		float L_3 = __this->___m_AngleIncrement_67;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// var angleRange = m_MaxAngle - m_MinAngle;
		float L_4 = __this->___m_MaxAngle_65;
		float L_5 = __this->___m_MinAngle_66;
		V_0 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// var angle = Mathf.Lerp(0.0f, angleRange, value);
		float L_6 = V_0;
		float L_7 = ___0_value;
		float L_8;
		L_8 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), L_6, L_7, NULL);
		V_1 = L_8;
		// angle = Mathf.Round(angle / m_AngleIncrement) * m_AngleIncrement;
		float L_9 = V_1;
		float L_10 = __this->___m_AngleIncrement_67;
		float L_11;
		L_11 = bankers_roundf(((float)(L_9/L_10)));
		float L_12 = __this->___m_AngleIncrement_67;
		V_1 = ((float)il2cpp_codegen_multiply(L_11, L_12));
		// value = Mathf.InverseLerp(0.0f, angleRange, angle);
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15;
		L_15 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline((0.0f), L_13, L_14, NULL);
		___0_value = L_15;
	}

IL_005b:
	{
		// m_Value = value;
		float L_16 = ___0_value;
		__this->___m_Value_63 = L_16;
		// m_OnValueChange.Invoke(m_Value);
		ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* L_17 = __this->___m_OnValueChange_70;
		float L_18 = __this->___m_Value_63;
		NullCheck(L_17);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_17, L_18, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::ValueToRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// return m_ClampedMotion ? Mathf.Lerp(m_MinAngle, m_MaxAngle, m_Value) : Mathf.LerpUnclamped(m_MinAngle, m_MaxAngle, m_Value);
		bool L_0 = __this->___m_ClampedMotion_64;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		float L_1 = __this->___m_MinAngle_66;
		float L_2 = __this->___m_MaxAngle_65;
		float L_3 = __this->___m_Value_63;
		float L_4;
		L_4 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0020:
	{
		float L_5 = __this->___m_MinAngle_66;
		float L_6 = __this->___m_MaxAngle_65;
		float L_7 = __this->___m_Value_63;
		float L_8;
		L_8 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::UpdateBaseKnobRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_UpdateBaseKnobRotation_m59532D40C91665CAB7CBBE2C463DF6D4364BF670 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// m_BaseKnobRotation = Mathf.LerpUnclamped(m_MinAngle, m_MaxAngle, m_Value);
		float L_0 = __this->___m_MinAngle_66;
		float L_1 = __this->___m_MaxAngle_65;
		float L_2 = __this->___m_Value_63;
		float L_3;
		L_3 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_0, L_1, L_2, NULL);
		__this->___m_BaseKnobRotation_77 = L_3;
		// }
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::ShortestAngleDistance(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ShortestAngleDistance_mD9CB60A4DA2B17654A28956C9FFD6AC828611979 (float ___0_start, float ___1_end, float ___2_max, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var angleDelta = end - start;
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// var angleSign = Mathf.Sign(angleDelta);
		float L_2 = V_0;
		float L_3;
		L_3 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_2, NULL);
		V_1 = L_3;
		// angleDelta = Math.Abs(angleDelta) % max;
		float L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_5;
		L_5 = fabsf(L_4);
		float L_6 = ___2_max;
		V_0 = (fmodf(L_5, L_6));
		// if (angleDelta > (max * 0.5f))
		float L_7 = V_0;
		float L_8 = ___2_max;
		if ((!(((float)L_7) > ((float)((float)il2cpp_codegen_multiply(L_8, (0.5f)))))))
		{
			goto IL_0023;
		}
	}
	{
		// angleDelta = -(max - angleDelta);
		float L_9 = ___2_max;
		float L_10 = V_0;
		V_0 = ((-((float)il2cpp_codegen_subtract(L_9, L_10))));
	}

IL_0023:
	{
		// return angleDelta * angleSign;
		float L_11 = V_0;
		float L_12 = V_1;
		return ((float)il2cpp_codegen_multiply(L_11, L_12));
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_OnDrawGizmosSelected_mA7FC5CE9A43661870BBB78F34B316E97D61F5264 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// if (m_PositionTrackedRadius <= Mathf.Epsilon)
		float L_0 = __this->___m_PositionTrackedRadius_68;
		float L_1 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		if ((!(((float)L_0) <= ((float)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var circleCenter = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		V_0 = L_3;
		// if (m_Handle != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_Handle_62;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// circleCenter = m_Handle.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___m_Handle_62;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		V_0 = L_7;
	}

IL_0034:
	{
		// var circleX = transform.right;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_8, NULL);
		V_1 = L_9;
		// var circleY = transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		V_2 = L_11;
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_12, NULL);
		// var segmentCounter = 0;
		V_3 = 0;
		goto IL_00f2;
	}

IL_005d:
	{
		// var startAngle = (float)segmentCounter * k_SegmentRatio * 2.0f * Mathf.PI;
		int32_t L_13 = V_3;
		V_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_13), (0.0625f))), (2.0f))), (3.14159274f)));
		// segmentCounter++;
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		// var endAngle = (float)segmentCounter * k_SegmentRatio * 2.0f * Mathf.PI;
		int32_t L_15 = V_3;
		V_5 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_15), (0.0625f))), (2.0f))), (3.14159274f)));
		// Gizmos.DrawLine(circleCenter + (Mathf.Cos(startAngle) * circleX + Mathf.Sin(startAngle) * circleY) * m_PositionTrackedRadius,
		//     circleCenter + (Mathf.Cos(endAngle) * circleX + Mathf.Sin(endAngle) * circleY) * m_PositionTrackedRadius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		float L_17 = V_4;
		float L_18;
		L_18 = cosf(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_18, L_19, NULL);
		float L_21 = V_4;
		float L_22;
		L_22 = sinf(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_22, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_24, NULL);
		float L_26 = __this->___m_PositionTrackedRadius_68;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		float L_30 = V_5;
		float L_31;
		L_31 = cosf(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_31, L_32, NULL);
		float L_34 = V_5;
		float L_35;
		L_35 = sinf(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_35, L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_33, L_37, NULL);
		float L_39 = __this->___m_PositionTrackedRadius_68;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_38, L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_29, L_40, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_28, L_41, NULL);
	}

IL_00f2:
	{
		// while (segmentCounter < k_CircleSegments)
		int32_t L_42 = V_3;
		if ((((int32_t)L_42) < ((int32_t)((int32_t)16))))
		{
			goto IL_005d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_OnValidate_mB08147D8DC4B8E860E6B7D09696CC81082CC9F22 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// if (m_ClampedMotion)
		bool L_0 = __this->___m_ClampedMotion_64;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// m_Value = Mathf.Clamp01(m_Value);
		float L_1 = __this->___m_Value_63;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		__this->___m_Value_63 = L_2;
	}

IL_0019:
	{
		// if (m_MinAngle > m_MaxAngle)
		float L_3 = __this->___m_MinAngle_66;
		float L_4 = __this->___m_MaxAngle_65;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0033;
		}
	}
	{
		// m_MinAngle = m_MaxAngle;
		float L_5 = __this->___m_MaxAngle_65;
		__this->___m_MinAngle_66 = L_5;
	}

IL_0033:
	{
		// SetKnobRotation(ValueToRotation());
		float L_6;
		L_6 = XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127(__this, NULL);
		XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob__ctor_mE285342CE8BB3795515A292269CFA539A4882F20 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float m_Value = 0.5f;
		__this->___m_Value_63 = (0.5f);
		// bool m_ClampedMotion = true;
		__this->___m_ClampedMotion_64 = (bool)1;
		// float m_MaxAngle = 90.0f;
		__this->___m_MaxAngle_65 = (90.0f);
		// float m_MinAngle = -90.0f;
		__this->___m_MinAngle_66 = (-90.0f);
		// float m_PositionTrackedRadius = 0.1f;
		__this->___m_PositionTrackedRadius_68 = (0.100000001f);
		// float m_TwistSensitivity = 1.5f;
		__this->___m_TwistSensitivity_69 = (1.5f);
		// ValueChangeEvent m_OnValueChange = new ValueChangeEvent();
		ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* L_0 = (ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17*)il2cpp_codegen_object_new(ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueChangeEvent__ctor_mBC41FCEA0AA4690860AE97314638CE07A22C2372(L_0, NULL);
		__this->___m_OnValueChange_70 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnValueChange_70), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::get_totalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, const RuntimeMethod* method) 
{
	{
		// public float totalOffset => m_AccumulatedAngle + m_CurrentOffset;
		float L_0 = __this->___m_AccumulatedAngle_2;
		float L_1 = __this->___m_CurrentOffset_1;
		return ((float)il2cpp_codegen_add(L_0, L_1));
	}
}
IL2CPP_EXTERN_C  float TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3*>(__this + _offset);
	float _returnValue;
	_returnValue = TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, const RuntimeMethod* method) 
{
	{
		// m_BaseAngle = 0.0f;
		__this->___m_BaseAngle_0 = (0.0f);
		// m_CurrentOffset = 0.0f;
		__this->___m_CurrentOffset_1 = (0.0f);
		// m_AccumulatedAngle = 0.0f;
		__this->___m_AccumulatedAngle_2 = (0.0f);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3*>(__this + _offset);
	TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::SetBaseFromVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) 
{
	{
		// m_AccumulatedAngle += m_CurrentOffset;
		float L_0 = __this->___m_AccumulatedAngle_2;
		float L_1 = __this->___m_CurrentOffset_1;
		__this->___m_AccumulatedAngle_2 = ((float)il2cpp_codegen_add(L_0, L_1));
		// m_BaseAngle = Mathf.Atan2(direction.z, direction.x) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_direction;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_direction;
		float L_5 = L_4.___x_2;
		float L_6;
		L_6 = atan2f(L_3, L_5);
		__this->___m_BaseAngle_0 = ((float)il2cpp_codegen_multiply(L_6, (57.2957802f)));
		// m_CurrentOffset = 0.0f;
		__this->___m_CurrentOffset_1 = (0.0f);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method)
{
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3*>(__this + _offset);
	TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B(_thisAdjusted, ___0_direction, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::SetTargetFromVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3 (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var targetAngle = Mathf.Atan2(direction.z, direction.x) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_direction;
		float L_1 = L_0.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_direction;
		float L_3 = L_2.___x_2;
		float L_4;
		L_4 = atan2f(L_1, L_3);
		V_0 = ((float)il2cpp_codegen_multiply(L_4, (57.2957802f)));
		// m_CurrentOffset = ShortestAngleDistance(m_BaseAngle, targetAngle, 360.0f);
		float L_5 = __this->___m_BaseAngle_0;
		float L_6 = V_0;
		float L_7;
		L_7 = XRKnob_ShortestAngleDistance_mD9CB60A4DA2B17654A28956C9FFD6AC828611979(L_5, L_6, (360.0f), NULL);
		__this->___m_CurrentOffset_1 = L_7;
		// if (Mathf.Abs(m_CurrentOffset) > 90.0f)
		float L_8 = __this->___m_CurrentOffset_1;
		float L_9;
		L_9 = fabsf(L_8);
		if ((!(((float)L_9) > ((float)(90.0f)))))
		{
			goto IL_0066;
		}
	}
	{
		// m_BaseAngle = targetAngle;
		float L_10 = V_0;
		__this->___m_BaseAngle_0 = L_10;
		// m_AccumulatedAngle += m_CurrentOffset;
		float L_11 = __this->___m_AccumulatedAngle_2;
		float L_12 = __this->___m_CurrentOffset_1;
		__this->___m_AccumulatedAngle_2 = ((float)il2cpp_codegen_add(L_11, L_12));
		// m_CurrentOffset = 0.0f;
		__this->___m_CurrentOffset_1 = (0.0f);
	}

IL_0066:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method)
{
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3*>(__this + _offset);
	TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3(_thisAdjusted, ___0_direction, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mBC41FCEA0AA4690860AE97314638CE07A22C2372 (ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRLever::get_handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRLever_get_handle_mCF7B3AE06DB26AF7F8E4D681D8225E18694E779C (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Handle;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Handle_62;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_handle(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_handle_mE5BAD09602B4EFD3AF101E6A3D82CF7E403E9B3B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Handle = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___m_Handle_62 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handle_62), (void*)L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLever_get_value_mC5E857376181178F64CCDE9D5C0DBA8B65372903 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Value;
		bool L_0 = __this->___m_Value_63;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_value(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_value_m2082393D4D4491A7C05E680F3DC38E8C11A75B5B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => SetValue(value, true);
		bool L_0 = ___0_value;
		XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::get_lockToValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLever_get_lockToValue_m1DC8895C6D1F39B8AA3D7BE7471C72A7030D9BC7 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// public bool lockToValue { get; set; }
		bool L_0 = __this->___U3ClockToValueU3Ek__BackingField_70;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_lockToValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_lockToValue_mE299BCBA0E8205E7874B946A39E6C1C9EF46311E (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool lockToValue { get; set; }
		bool L_0 = ___0_value;
		__this->___U3ClockToValueU3Ek__BackingField_70 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRLever::get_maxAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRLever_get_maxAngle_m08FC1610AE5A2DB59C982BAFCF5723932D2B013A (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxAngle;
		float L_0 = __this->___m_MaxAngle_65;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_maxAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_maxAngle_m0D574192F2F3B9D4C716A20D5A1E3DAC29715B17 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_MaxAngle = value;
		float L_0 = ___0_value;
		__this->___m_MaxAngle_65 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRLever::get_minAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRLever_get_minAngle_m4BE047FF9E577DE3A778E303E8281EEC61A9893E (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MinAngle;
		float L_0 = __this->___m_MinAngle_66;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_minAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_minAngle_m91F2D95580C056E33366B47AC937786BE8EFA11A (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_MinAngle = value;
		float L_0 = ___0_value;
		__this->___m_MinAngle_66 = L_0;
		return;
	}
}
// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRLever::get_onLeverActivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* XRLever_get_onLeverActivate_m4F52F081278D0A80B0905BEB7ECBF85914066138 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onLeverActivate => m_OnLeverActivate;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnLeverActivate_67;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRLever::get_onLeverDeactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* XRLever_get_onLeverDeactivate_mFD732BB5033E3078BF393DD8A106B8915C0C2D1B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onLeverDeactivate => m_OnLeverDeactivate;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnLeverDeactivate_68;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_Start_m932E14A276B231886FDA59F07EF089121B26040A (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// SetValue(m_Value, true);
		bool L_0 = __this->___m_Value_63;
		XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_OnEnable_m73A3D7AAFB7D2378B60BFC267815F6CEDEE05A79 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// selectEntered.AddListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_0, L_1, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_2, L_3, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_OnDisable_mAA4D78C35CE78760B960A97743B983B7E24351C1 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectEntered.RemoveListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_0, L_1, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_2, L_3, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::StartGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___0_args, const RuntimeMethod* method) 
{
	{
		// m_Interactor = args.interactorObject;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___0_args;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		__this->___m_Interactor_69 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_69), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::EndGrab(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___0_args, const RuntimeMethod* method) 
{
	{
		// SetValue(m_Value, true);
		bool L_0 = __this->___m_Value_63;
		XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9(__this, L_0, (bool)1, NULL);
		// m_Interactor = null;
		__this->___m_Interactor_69 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_69), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_ProcessInteractable_m8CCE4D0C01A198A3A54E3BBE40CB2DDF7B8D1D3C (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, int32_t ___0_updatePhase, const RuntimeMethod* method) 
{
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___0_updatePhase;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___0_updatePhase;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		// if (isSelected)
		bool L_2;
		L_2 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// UpdateValue();
		XRLever_UpdateValue_m9E36BF1D16C71BEADDAB1BC298C8580663F989FA(__this, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.Content.Interaction.XRLever::GetLookDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRLever_GetLookDirection_m60D20489074AC4ADA156F2E6C6D58EA798D3A10B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = m_Interactor.GetAttachTransform(this).position - m_Handle.position;
		RuntimeObject* L_0 = __this->___m_Interactor_69;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_0, __this);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Handle_62;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_4, NULL);
		V_0 = L_5;
		// direction = transform.InverseTransformDirection(direction);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_6, L_7, NULL);
		V_0 = L_8;
		// direction.x = 0;
		(&V_0)->___x_2 = (0.0f);
		// return direction.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		return L_9;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::UpdateValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_UpdateValue_m9E36BF1D16C71BEADDAB1BC298C8580663F989FA (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		// var lookDirection = GetLookDirection();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = XRLever_GetLookDirection_m60D20489074AC4ADA156F2E6C6D58EA798D3A10B(__this, NULL);
		V_0 = L_0;
		// var lookAngle = Mathf.Atan2(lookDirection.z, lookDirection.y) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		float L_2 = L_1.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___y_3;
		float L_5;
		L_5 = atan2f(L_2, L_4);
		V_1 = ((float)il2cpp_codegen_multiply(L_5, (57.2957802f)));
		// if (m_MinAngle < m_MaxAngle)
		float L_6 = __this->___m_MinAngle_66;
		float L_7 = __this->___m_MaxAngle_65;
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_0042;
		}
	}
	{
		// lookAngle = Mathf.Clamp(lookAngle, m_MinAngle, m_MaxAngle);
		float L_8 = V_1;
		float L_9 = __this->___m_MinAngle_66;
		float L_10 = __this->___m_MaxAngle_65;
		float L_11;
		L_11 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_0055;
	}

IL_0042:
	{
		// lookAngle = Mathf.Clamp(lookAngle, m_MaxAngle, m_MinAngle);
		float L_12 = V_1;
		float L_13 = __this->___m_MaxAngle_65;
		float L_14 = __this->___m_MinAngle_66;
		float L_15;
		L_15 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_12, L_13, L_14, NULL);
		V_1 = L_15;
	}

IL_0055:
	{
		// var maxAngleDistance = Mathf.Abs(m_MaxAngle - lookAngle);
		float L_16 = __this->___m_MaxAngle_65;
		float L_17 = V_1;
		float L_18;
		L_18 = fabsf(((float)il2cpp_codegen_subtract(L_16, L_17)));
		V_2 = L_18;
		// var minAngleDistance = Mathf.Abs(m_MinAngle - lookAngle);
		float L_19 = __this->___m_MinAngle_66;
		float L_20 = V_1;
		float L_21;
		L_21 = fabsf(((float)il2cpp_codegen_subtract(L_19, L_20)));
		V_3 = L_21;
		// if (m_Value)
		bool L_22 = __this->___m_Value_63;
		if (!L_22)
		{
			goto IL_0083;
		}
	}
	{
		// maxAngleDistance *= (1.0f - k_LeverDeadZone);
		float L_23 = V_2;
		V_2 = ((float)il2cpp_codegen_multiply(L_23, (0.899999976f)));
		goto IL_008b;
	}

IL_0083:
	{
		// minAngleDistance *= (1.0f - k_LeverDeadZone);
		float L_24 = V_3;
		V_3 = ((float)il2cpp_codegen_multiply(L_24, (0.899999976f)));
	}

IL_008b:
	{
		// var newValue = (maxAngleDistance < minAngleDistance);
		float L_25 = V_2;
		float L_26 = V_3;
		V_4 = (bool)((((float)L_25) < ((float)L_26))? 1 : 0);
		// SetHandleAngle(lookAngle);
		float L_27 = V_1;
		XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E(__this, L_27, NULL);
		// SetValue(newValue);
		bool L_28 = V_4;
		XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9(__this, L_28, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::SetValue(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, bool ___0_isOn, bool ___1_forceRotation, const RuntimeMethod* method) 
{
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B4_0 = NULL;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B5_1 = NULL;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B14_0 = NULL;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B13_0 = NULL;
	float G_B15_0 = 0.0f;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B15_1 = NULL;
	{
		// if (m_Value == isOn)
		bool L_0 = __this->___m_Value_63;
		bool L_1 = ___0_isOn;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0029;
		}
	}
	{
		// if (forceRotation)
		bool L_2 = ___1_forceRotation;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// SetHandleAngle(m_Value ? m_MaxAngle : m_MinAngle);
		bool L_3 = __this->___m_Value_63;
		G_B3_0 = __this;
		if (L_3)
		{
			G_B4_0 = __this;
			goto IL_001d;
		}
	}
	{
		float L_4 = __this->___m_MinAngle_66;
		G_B5_0 = L_4;
		G_B5_1 = G_B3_0;
		goto IL_0023;
	}

IL_001d:
	{
		float L_5 = __this->___m_MaxAngle_65;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
	}

IL_0023:
	{
		NullCheck(G_B5_1);
		XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E(G_B5_1, G_B5_0, NULL);
	}

IL_0028:
	{
		// return;
		return;
	}

IL_0029:
	{
		// m_Value = isOn;
		bool L_6 = ___0_isOn;
		__this->___m_Value_63 = L_6;
		// if (m_Value)
		bool L_7 = __this->___m_Value_63;
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		// m_OnLeverActivate.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8 = __this->___m_OnLeverActivate_67;
		NullCheck(L_8);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_8, NULL);
		goto IL_0050;
	}

IL_0045:
	{
		// m_OnLeverDeactivate.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_9 = __this->___m_OnLeverDeactivate_68;
		NullCheck(L_9);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_9, NULL);
	}

IL_0050:
	{
		// if (!isSelected && (m_LockToValue || forceRotation))
		bool L_10;
		L_10 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		if (L_10)
		{
			goto IL_007e;
		}
	}
	{
		bool L_11 = __this->___m_LockToValue_64;
		bool L_12 = ___1_forceRotation;
		if (!((int32_t)((int32_t)L_11|(int32_t)L_12)))
		{
			goto IL_007e;
		}
	}
	{
		// SetHandleAngle(m_Value ? m_MaxAngle : m_MinAngle);
		bool L_13 = __this->___m_Value_63;
		G_B13_0 = __this;
		if (L_13)
		{
			G_B14_0 = __this;
			goto IL_0073;
		}
	}
	{
		float L_14 = __this->___m_MinAngle_66;
		G_B15_0 = L_14;
		G_B15_1 = G_B13_0;
		goto IL_0079;
	}

IL_0073:
	{
		float L_15 = __this->___m_MaxAngle_65;
		G_B15_0 = L_15;
		G_B15_1 = G_B14_0;
	}

IL_0079:
	{
		NullCheck(G_B15_1);
		XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E(G_B15_1, G_B15_0, NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::SetHandleAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, float ___0_angle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Handle != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Handle_62;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// m_Handle.localRotation = Quaternion.Euler(angle, 0.0f, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_Handle_62;
		float L_3 = ___0_angle;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_3, (0.0f), (0.0f), NULL);
		NullCheck(L_2);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_2, L_4, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_OnDrawGizmosSelected_m4AEEE83ED7BE1CCDF1FD2B4C6F33ABB7D7DDA621 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var angleStartPoint = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// if (m_Handle != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_Handle_62;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// angleStartPoint = m_Handle.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_Handle_62;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_0 = L_5;
	}

IL_0026:
	{
		// var angleMaxPoint = angleStartPoint + transform.TransformDirection(Quaternion.Euler(m_MaxAngle, 0.0f, 0.0f) * Vector3.up) * k_AngleLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_8 = __this->___m_MaxAngle_65;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_8, (0.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_9, L_10, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_7, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_13, NULL);
		V_1 = L_14;
		// var angleMinPoint = angleStartPoint + transform.TransformDirection(Quaternion.Euler(m_MinAngle, 0.0f, 0.0f) * Vector3.up) * k_AngleLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_17 = __this->___m_MinAngle_66;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_17, (0.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_18, L_19, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_16, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_22, NULL);
		V_2 = L_23;
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_24, NULL);
		// Gizmos.DrawLine(angleStartPoint, angleMaxPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_1;
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_25, L_26, NULL);
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_27, NULL);
		// Gizmos.DrawLine(angleStartPoint, angleMinPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_28, L_29, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_OnValidate_m033DF9CB5675C2270E73CF717BEF4B99BD55C770 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B2_0 = NULL;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B3_1 = NULL;
	{
		// SetHandleAngle(m_Value ? m_MaxAngle : m_MinAngle);
		bool L_0 = __this->___m_Value_63;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		float L_1 = __this->___m_MinAngle_66;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0011:
	{
		float L_2 = __this->___m_MaxAngle_65;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever__ctor_m95F423400F548FF5BB4A2FCC7F157A9047D08E51 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float m_MaxAngle = 90.0f;
		__this->___m_MaxAngle_65 = (90.0f);
		// float m_MinAngle = -90.0f;
		__this->___m_MinAngle_66 = (-90.0f);
		// UnityEvent m_OnLeverActivate = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___m_OnLeverActivate_67 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnLeverActivate_67), (void*)L_0);
		// UnityEvent m_OnLeverDeactivate = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___m_OnLeverDeactivate_68 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnLeverDeactivate_68), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRPushButton::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRPushButton_get_button_m3AC0BBA87D91B9EE7CBDB5744A71C27D91B26694 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Button;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Button_61;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::set_button(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_set_button_mE5F8503A2C4DBEF54F302B3316225C2470DACB85 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Button = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___m_Button_61 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Button_61), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::get_pressDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRPushButton_get_pressDistance_m04FD3DEFD22D628F5C5DA729D2F40A9CEF4DFB0C (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PressDistance;
		float L_0 = __this->___m_PressDistance_62;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::set_pressDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_set_pressDistance_mF7C54FEE2ED2735679ED6D6CE9404E000C9E05EA (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_PressDistance = value;
		float L_0 = ___0_value;
		__this->___m_PressDistance_62 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRPushButton_get_value_m345BB8EFF122A48A832AA377B60532777751A328 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// public float value => m_Value;
		float L_0 = __this->___m_Value_72;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRPushButton::get_onPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* XRPushButton_get_onPress_mBF0BE1B70DAFB6EC67934B1080FAD0C1B9B02AC0 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onPress => m_OnPress;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnPress_67;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRPushButton::get_onRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* XRPushButton_get_onRelease_m7B6751EE5D5EC96F8D6F262FFA9A31DB42CFBE55 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onRelease => m_OnRelease;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnRelease_68;
		return L_0;
	}
}
// UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRPushButton::get_onValueChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* XRPushButton_get_onValueChange_mC59782A7E7E98828029249D8C304C21F396621A7 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// public ValueChangeEvent onValueChange => m_OnValueChange;
		ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* L_0 = __this->___m_OnValueChange_69;
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::get_toggleValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPushButton_get_toggleValue_m037879BE9FB7D25D8CBD1FD4B7A810D1B38D7C09 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ToggleButton && m_Toggled;
		bool L_0 = __this->___m_ToggleButton_66;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1 = __this->___m_Toggled_71;
		return L_1;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::set_toggleValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_set_toggleValue_mFC816F2B6C597A72551E524BBEB03A106DEDB2F1 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// if (!m_ToggleButton)
		bool L_0 = __this->___m_ToggleButton_66;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Toggled = value;
		bool L_1 = ___0_value;
		__this->___m_Toggled_71 = L_1;
		// if (m_Toggled)
		bool L_2 = __this->___m_Toggled_71;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// SetButtonHeight(-m_PressDistance);
		float L_3 = __this->___m_PressDistance_62;
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, ((-L_3)), NULL);
		return;
	}

IL_0026:
	{
		// SetButtonHeight(0.0f);
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, (0.0f), NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::IsHoverableBy(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPushButton_IsHoverableBy_mF317B49425423246D95911A45D1C821E295EC376 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, RuntimeObject* ___0_interactor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interactor is XRRayInteractor)
		RuntimeObject* L_0 = ___0_interactor;
		if (!((XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76*)IsInstClass((RuntimeObject*)L_0, XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return base.IsHoverableBy(interactor);
		RuntimeObject* L_1 = ___0_interactor;
		bool L_2;
		L_2 = XRBaseInteractable_IsHoverableBy_mA746CF4F19A39315495C004ED35EF6AF75AA8429(__this, L_1, NULL);
		return L_2;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_Start_m223746CF20D6979F62B77951D69DD249B789FF44 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Button != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Button_61;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_BaseButtonPosition = m_Button.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_Button_61;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___m_BaseButtonPosition_73 = L_3;
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_OnEnable_mEAD16D16110DBF83BF6875C8992B22745DE3DFCA (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// if (m_Toggled)
		bool L_0 = __this->___m_Toggled_71;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// SetButtonHeight(-m_PressDistance);
		float L_1 = __this->___m_PressDistance_62;
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, ((-L_1)), NULL);
		goto IL_0028;
	}

IL_001d:
	{
		// SetButtonHeight(0.0f);
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, (0.0f), NULL);
	}

IL_0028:
	{
		// hoverEntered.AddListener(StartHover);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_2;
		L_2 = XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline(__this, NULL);
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_3 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_3, __this, (intptr_t)((void*)XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F(L_2, L_3, UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		// hoverExited.AddListener(EndHover);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_4;
		L_4 = XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline(__this, NULL);
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_5 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_5, __this, (intptr_t)((void*)XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722(L_4, L_5, UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_OnDisable_m5D35E3F3F91256002ACE66B0C4CD06ECE4FC960B (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hoverEntered.RemoveListener(StartHover);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_0;
		L_0 = XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline(__this, NULL);
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_1 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_1, __this, (intptr_t)((void*)XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33(L_0, L_1, UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		// hoverExited.RemoveListener(EndHover);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_2;
		L_2 = XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline(__this, NULL);
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_3 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_3, __this, (intptr_t)((void*)XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78(L_2, L_3, UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::StartHover(UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_HoveringInteractors.Add(args.interactorObject, new PressInfo { m_Interactor = args.interactorObject });
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_0 = __this->___m_HoveringInteractors_74;
		HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* L_1 = ___0_args;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = HoverEnterEventArgs_get_interactorObject_m9735CAB1FCE64F6DD65498458C582463A0FB5D19(L_1, NULL);
		PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_3 = (PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C*)il2cpp_codegen_object_new(PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PressInfo__ctor_m772C95227A64BD660EBF391384EED3B0BEFCFC15(L_3, NULL);
		PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_4 = L_3;
		HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* L_5 = ___0_args;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = HoverEnterEventArgs_get_interactorObject_m9735CAB1FCE64F6DD65498458C582463A0FB5D19(L_5, NULL);
		NullCheck(L_4);
		L_4->___m_Interactor_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___m_Interactor_0), (void*)L_6);
		NullCheck(L_0);
		Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C(L_0, L_2, L_4, Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::EndHover(UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_HoveringInteractors.Remove(args.interactorObject);
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_0 = __this->___m_HoveringInteractors_74;
		HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6* L_1 = ___0_args;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = HoverExitEventArgs_get_interactorObject_m0018175DBF0540C147451C1E11B5EE5DA64CB150(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE(L_0, L_2, Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE_RuntimeMethod_var);
		// if (m_HoveringInteractors.Count == 0)
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_4 = __this->___m_HoveringInteractors_74;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD(L_4, Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0048;
		}
	}
	{
		// if (m_ToggleButton && m_Toggled)
		bool L_6 = __this->___m_ToggleButton_66;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		bool L_7 = __this->___m_Toggled_71;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// SetButtonHeight(-m_PressDistance);
		float L_8 = __this->___m_PressDistance_62;
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, ((-L_8)), NULL);
		return;
	}

IL_003d:
	{
		// SetButtonHeight(0.0f);
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, (0.0f), NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_ProcessInteractable_m4C2CE6AA75532791DC9DBA9C88B96DD08B889799 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, int32_t ___0_updatePhase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___0_updatePhase;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___0_updatePhase;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001f;
		}
	}
	{
		// if (m_HoveringInteractors.Count > 0)
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_2 = __this->___m_HoveringInteractors_74;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD(L_2, Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		// UpdatePress();
		XRPushButton_UpdatePress_m3ED769AB20F6E97BFAFAD1D5E05114F3A7589906(__this, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::UpdatePress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_UpdatePress_m3ED769AB20F6E97BFAFAD1D5E05114F3A7589906 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB V_3;
	memset((&V_3), 0, sizeof(V_3));
	PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* V_4 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B20_0 = 0;
	{
		// var minimumHeight = 0.0f;
		V_0 = (0.0f);
		// if (m_ToggleButton && m_Toggled)
		bool L_0 = __this->___m_ToggleButton_66;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		bool L_1 = __this->___m_Toggled_71;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// minimumHeight = -m_PressDistance;
		float L_2 = __this->___m_PressDistance_62;
		V_0 = ((-L_2));
	}

IL_001e:
	{
		// foreach (var pressInfo in m_HoveringInteractors.Values)
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_3 = __this->___m_HoveringInteractors_74;
		NullCheck(L_3);
		ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* L_4;
		L_4 = Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B(L_3, Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B_RuntimeMethod_var);
		NullCheck(L_4);
		Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB L_5;
		L_5 = ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6(L_4, ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6_RuntimeMethod_var);
		V_3 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC((&V_3), Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e2_1;
			}

IL_0034_1:
			{
				// foreach (var pressInfo in m_HoveringInteractors.Values)
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_6;
				L_6 = Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_inline((&V_3), Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_RuntimeMethod_var);
				V_4 = L_6;
				// var interactorTransform = pressInfo.m_Interactor.GetAttachTransform(this);
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_7 = V_4;
				NullCheck(L_7);
				RuntimeObject* L_8 = L_7->___m_Interactor_0;
				NullCheck(L_8);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
				L_9 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_8, __this);
				V_5 = L_9;
				// var localOffset = transform.InverseTransformVector(interactorTransform.position - m_BaseButtonPosition);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
				L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_5;
				NullCheck(L_11);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
				L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___m_BaseButtonPosition_73;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_13, NULL);
				NullCheck(L_10);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044(L_10, L_14, NULL);
				V_6 = L_15;
				// var withinButtonRegion = (Mathf.Abs(localOffset.x) < m_ButtonSize && Mathf.Abs(localOffset.z) < m_ButtonSize);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_6;
				float L_17 = L_16.___x_2;
				float L_18;
				L_18 = fabsf(L_17);
				float L_19 = __this->___m_ButtonSize_65;
				if ((!(((float)L_18) < ((float)L_19))))
				{
					goto IL_0095_1;
				}
			}
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_6;
				float L_21 = L_20.___z_4;
				float L_22;
				L_22 = fabsf(L_21);
				float L_23 = __this->___m_ButtonSize_65;
				G_B8_0 = ((((float)L_22) < ((float)L_23))? 1 : 0);
				goto IL_0096_1;
			}

IL_0095_1:
			{
				G_B8_0 = 0;
			}

IL_0096_1:
			{
				V_7 = (bool)G_B8_0;
				// if (withinButtonRegion)
				bool L_24 = V_7;
				if (!L_24)
				{
					goto IL_00d9_1;
				}
			}
			{
				// if (!pressInfo.m_InPressRegion)
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_25 = V_4;
				NullCheck(L_25);
				bool L_26 = L_25->___m_InPressRegion_1;
				if (L_26)
				{
					goto IL_00bb_1;
				}
			}
			{
				// pressInfo.m_WrongSide = (localOffset.y < m_ButtonOffset);
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_27 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_6;
				float L_29 = L_28.___y_3;
				float L_30 = __this->___m_ButtonOffset_64;
				NullCheck(L_27);
				L_27->___m_WrongSide_2 = (bool)((((float)L_29) < ((float)L_30))? 1 : 0);
			}

IL_00bb_1:
			{
				// if (!pressInfo.m_WrongSide)
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_31 = V_4;
				NullCheck(L_31);
				bool L_32 = L_31->___m_WrongSide_2;
				if (L_32)
				{
					goto IL_00d9_1;
				}
			}
			{
				// minimumHeight = Mathf.Min(minimumHeight, localOffset.y - m_ButtonOffset);
				float L_33 = V_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_6;
				float L_35 = L_34.___y_3;
				float L_36 = __this->___m_ButtonOffset_64;
				float L_37;
				L_37 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_33, ((float)il2cpp_codegen_subtract(L_35, L_36)), NULL);
				V_0 = L_37;
			}

IL_00d9_1:
			{
				// pressInfo.m_InPressRegion = withinButtonRegion;
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_38 = V_4;
				bool L_39 = V_7;
				NullCheck(L_38);
				L_38->___m_InPressRegion_1 = L_39;
			}

IL_00e2_1:
			{
				// foreach (var pressInfo in m_HoveringInteractors.Values)
				bool L_40;
				L_40 = Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885((&V_3), Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_0034_1;
				}
			}
			{
				goto IL_00fe;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fe:
	{
		// minimumHeight = Mathf.Max(minimumHeight, -(m_PressDistance + m_PressBuffer));
		float L_41 = V_0;
		float L_42 = __this->___m_PressDistance_62;
		float L_43 = __this->___m_PressBuffer_63;
		float L_44;
		L_44 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_41, ((-((float)il2cpp_codegen_add(L_42, L_43)))), NULL);
		V_0 = L_44;
		// var pressed = m_ToggleButton ? (minimumHeight <= -(m_PressDistance + m_PressBuffer)) : (minimumHeight < -m_PressDistance);
		bool L_45 = __this->___m_ToggleButton_66;
		if (L_45)
		{
			goto IL_0127;
		}
	}
	{
		float L_46 = V_0;
		float L_47 = __this->___m_PressDistance_62;
		G_B20_0 = ((((float)L_46) < ((float)((-L_47))))? 1 : 0);
		goto IL_013b;
	}

IL_0127:
	{
		float L_48 = V_0;
		float L_49 = __this->___m_PressDistance_62;
		float L_50 = __this->___m_PressBuffer_63;
		G_B20_0 = ((((int32_t)((!(((float)L_48) <= ((float)((-((float)il2cpp_codegen_add(L_49, L_50)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_013b:
	{
		V_1 = (bool)G_B20_0;
		// var currentDistance = Mathf.Max(0f, -minimumHeight - m_PressBuffer);
		float L_51 = V_0;
		float L_52 = __this->___m_PressBuffer_63;
		float L_53;
		L_53 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), ((float)il2cpp_codegen_subtract(((-L_51)), L_52)), NULL);
		V_2 = L_53;
		// m_Value = currentDistance / m_PressDistance;
		float L_54 = V_2;
		float L_55 = __this->___m_PressDistance_62;
		__this->___m_Value_72 = ((float)(L_54/L_55));
		// if (m_ToggleButton)
		bool L_56 = __this->___m_ToggleButton_66;
		if (!L_56)
		{
			goto IL_01a2;
		}
	}
	{
		// if (pressed)
		bool L_57 = V_1;
		if (!L_57)
		{
			goto IL_01cd;
		}
	}
	{
		// if (!m_Pressed)
		bool L_58 = __this->___m_Pressed_70;
		if (L_58)
		{
			goto IL_01cd;
		}
	}
	{
		// m_Toggled = !m_Toggled;
		bool L_59 = __this->___m_Toggled_71;
		__this->___m_Toggled_71 = (bool)((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		// if (m_Toggled)
		bool L_60 = __this->___m_Toggled_71;
		if (!L_60)
		{
			goto IL_0195;
		}
	}
	{
		// m_OnPress.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_61 = __this->___m_OnPress_67;
		NullCheck(L_61);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_61, NULL);
		goto IL_01cd;
	}

IL_0195:
	{
		// m_OnRelease.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_62 = __this->___m_OnRelease_68;
		NullCheck(L_62);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_62, NULL);
		goto IL_01cd;
	}

IL_01a2:
	{
		// if (pressed)
		bool L_63 = V_1;
		if (!L_63)
		{
			goto IL_01ba;
		}
	}
	{
		// if (!m_Pressed)
		bool L_64 = __this->___m_Pressed_70;
		if (L_64)
		{
			goto IL_01cd;
		}
	}
	{
		// m_OnPress.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_65 = __this->___m_OnPress_67;
		NullCheck(L_65);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_65, NULL);
		goto IL_01cd;
	}

IL_01ba:
	{
		// if (m_Pressed)
		bool L_66 = __this->___m_Pressed_70;
		if (!L_66)
		{
			goto IL_01cd;
		}
	}
	{
		// m_OnRelease.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_67 = __this->___m_OnRelease_68;
		NullCheck(L_67);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_67, NULL);
	}

IL_01cd:
	{
		// m_Pressed = pressed;
		bool L_68 = V_1;
		__this->___m_Pressed_70 = L_68;
		// if (m_Pressed)
		bool L_69 = __this->___m_Pressed_70;
		if (!L_69)
		{
			goto IL_01ed;
		}
	}
	{
		// m_OnValueChange.Invoke(m_Value);
		ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* L_70 = __this->___m_OnValueChange_69;
		float L_71 = __this->___m_Value_72;
		NullCheck(L_70);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_70, L_71, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
	}

IL_01ed:
	{
		// SetButtonHeight(minimumHeight);
		float L_72 = V_0;
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, L_72, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::SetButtonHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, float ___0_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_Button == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Button_61;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// Vector3 newPosition = m_Button.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_Button_61;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		V_0 = L_3;
		// newPosition.y = height;
		float L_4 = ___0_height;
		(&V_0)->___y_3 = L_4;
		// m_Button.localPosition = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_Button_61;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_OnDrawGizmosSelected_mC9E10B907162EBF3803EAD773A5EA581EF8D76D7 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var pressStartPoint = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// if (m_Button != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_Button_61;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// pressStartPoint = m_Button.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Button_61;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		V_0 = L_4;
	}

IL_0020:
	{
		// pressStartPoint.y += m_ButtonOffset - (m_PressDistance * 0.5f);
		float* L_5 = (&(&V_0)->___y_3);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		float L_8 = __this->___m_ButtonOffset_64;
		float L_9 = __this->___m_PressDistance_62;
		*((float*)L_6) = (float)((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_subtract(L_8, ((float)il2cpp_codegen_multiply(L_9, (0.5f)))))));
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_10, NULL);
		// Gizmos.matrix = transform.localToWorldMatrix;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_11, NULL);
		Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(L_12, NULL);
		// Gizmos.DrawWireCube(pressStartPoint, new Vector3(m_ButtonSize, m_PressDistance, m_ButtonSize));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = __this->___m_ButtonSize_65;
		float L_15 = __this->___m_PressDistance_62;
		float L_16 = __this->___m_ButtonSize_65;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B(L_13, L_17, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_OnValidate_mE1307C6FFC39A82E1A3C9CA558F22D95AAE41A0C (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// SetButtonHeight(0.0f);
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton__ctor_m8DF438AA2D6C1AD0735FDF04F72D039F51EE02AF (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float m_PressDistance = 0.1f;
		__this->___m_PressDistance_62 = (0.100000001f);
		// float m_PressBuffer = 0.01f;
		__this->___m_PressBuffer_63 = (0.00999999978f);
		// float m_ButtonSize = 0.1f;
		__this->___m_ButtonSize_65 = (0.100000001f);
		// Vector3 m_BaseButtonPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___m_BaseButtonPosition_73 = L_0;
		// Dictionary<IXRHoverInteractor, PressInfo> m_HoveringInteractors = new Dictionary<IXRHoverInteractor, PressInfo>();
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_1 = (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*)il2cpp_codegen_object_new(Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9(L_1, Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9_RuntimeMethod_var);
		__this->___m_HoveringInteractors_74 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HoveringInteractors_74), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressInfo__ctor_m772C95227A64BD660EBF391384EED3B0BEFCFC15 (PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mD835B61ABEA661F3D9E1532BA28B36DC4C11926B (ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.XR.Content.Interaction.XRSlider::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRSlider_get_value_m982492407CE6474075F5752970F18C3D9A9A6E03 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Value;
		float L_0 = __this->___m_Value_62;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_set_value_m4E443CBC1E64A2AEAB4B67E008B0DB565946E2D5 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// SetValue(value);
		float L_0 = ___0_value;
		XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465(__this, L_0, NULL);
		// SetSliderPosition(value);
		float L_1 = ___0_value;
		XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02(__this, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRSlider::get_onValueChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* XRSlider_get_onValueChange_m9EDED400A642BE1D728F58BAC0F9558315EB5B89 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	{
		// public ValueChangeEvent onValueChange => m_OnValueChange;
		ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* L_0 = __this->___m_OnValueChange_65;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_Start_m5B7EBA3A78BE69A9FBCD18443642F6E02FFB08F5 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	{
		// SetValue(m_Value);
		float L_0 = __this->___m_Value_62;
		XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465(__this, L_0, NULL);
		// SetSliderPosition(m_Value);
		float L_1 = __this->___m_Value_62;
		XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_OnEnable_mD5F09516D73D82B1F64915F3DDE786707151C999 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// selectEntered.AddListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_0, L_1, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_2, L_3, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_OnDisable_mF0A6E46B79E603BDEA7085C8C35AF52953114F34 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectEntered.RemoveListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_0, L_1, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_2, L_3, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::StartGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___0_args, const RuntimeMethod* method) 
{
	{
		// m_Interactor = args.interactorObject;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___0_args;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		__this->___m_Interactor_66 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_66), (void*)L_1);
		// UpdateSliderPosition();
		XRSlider_UpdateSliderPosition_m816CAAC7F9DAECFD0C0822B62B195B71680F4D87(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::EndGrab(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___0_args, const RuntimeMethod* method) 
{
	{
		// m_Interactor = null;
		__this->___m_Interactor_66 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_66), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_ProcessInteractable_m1A2C82A08D7AEE301698505D8144BD400E0C723E (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, int32_t ___0_updatePhase, const RuntimeMethod* method) 
{
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___0_updatePhase;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___0_updatePhase;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		// if (isSelected)
		bool L_2;
		L_2 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// UpdateSliderPosition();
		XRSlider_UpdateSliderPosition_m816CAAC7F9DAECFD0C0822B62B195B71680F4D87(__this, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::UpdateSliderPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_UpdateSliderPosition_m816CAAC7F9DAECFD0C0822B62B195B71680F4D87 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// var localPosition = transform.InverseTransformPoint(m_Interactor.GetAttachTransform(this).position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		RuntimeObject* L_1 = __this->___m_Interactor_66;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_1, __this);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_0, L_3, NULL);
		// var sliderValue = Mathf.Clamp01((localPosition.z - m_MinPosition) / (m_MaxPosition - m_MinPosition));
		float L_5 = L_4.___z_4;
		float L_6 = __this->___m_MinPosition_64;
		float L_7 = __this->___m_MaxPosition_63;
		float L_8 = __this->___m_MinPosition_64;
		float L_9;
		L_9 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_5, L_6))/((float)il2cpp_codegen_subtract(L_7, L_8)))), NULL);
		V_0 = L_9;
		// SetValue(sliderValue);
		float L_10 = V_0;
		XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465(__this, L_10, NULL);
		// SetSliderPosition(sliderValue);
		float L_11 = V_0;
		XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::SetSliderPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_Handle == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Handle_61;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// var handlePos = m_Handle.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_Handle_61;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		V_0 = L_3;
		// handlePos.z = Mathf.Lerp(m_MinPosition, m_MaxPosition, value);
		float L_4 = __this->___m_MinPosition_64;
		float L_5 = __this->___m_MaxPosition_63;
		float L_6 = ___0_value;
		float L_7;
		L_7 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_4, L_5, L_6, NULL);
		(&V_0)->___z_4 = L_7;
		// m_Handle.localPosition = handlePos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___m_Handle_61;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		NullCheck(L_8);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Value = value;
		float L_0 = ___0_value;
		__this->___m_Value_62 = L_0;
		// m_OnValueChange.Invoke(m_Value);
		ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* L_1 = __this->___m_OnValueChange_65;
		float L_2 = __this->___m_Value_62;
		NullCheck(L_1);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_1, L_2, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_OnDrawGizmosSelected_mC9D44438D48532214F4C8555CE756F8698B13B7D (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var sliderMinPoint = transform.TransformPoint(new Vector3(0.0f, 0.0f, m_MinPosition));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___m_MinPosition_64;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_0, L_2, NULL);
		// var sliderMaxPoint = transform.TransformPoint(new Vector3(0.0f, 0.0f, m_MaxPosition));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_5 = __this->___m_MaxPosition_63;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (0.0f), L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_6, NULL);
		V_0 = L_7;
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_8, NULL);
		// Gizmos.DrawLine(sliderMinPoint, sliderMaxPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_3, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_OnValidate_mEBC5014B234B32BB1DE13EE5BBF3ABDAD6D0AD58 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	{
		// SetSliderPosition(m_Value);
		float L_0 = __this->___m_Value_62;
		XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider__ctor_m4D5345C4FC15B61BA1008ADFB187BA8D9EA97E78 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float m_Value = 0.5f;
		__this->___m_Value_62 = (0.5f);
		// float m_MaxPosition = 0.5f;
		__this->___m_MaxPosition_63 = (0.5f);
		// float m_MinPosition = -0.5f;
		__this->___m_MinPosition_64 = (-0.5f);
		// ValueChangeEvent m_OnValueChange = new ValueChangeEvent();
		ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* L_0 = (ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD*)il2cpp_codegen_object_new(ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueChangeEvent__ctor_m36E0FB628F57A83BB57A575FD914FAA4C5CCABB4(L_0, NULL);
		__this->___m_OnValueChange_65 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnValueChange_65), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_m36E0FB628F57A83BB57A575FD914FAA4C5CCABB4 (ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectEntered;
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0 = __this->___m_SelectEntered_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectExited;
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_0 = __this->___m_SelectExited_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		float L_3 = ___2_value;
		float L_4 = ___0_a;
		float L_5 = ___1_b;
		float L_6 = ___0_a;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/((float)il2cpp_codegen_subtract(L_5, L_6)))), NULL);
		V_1 = L_7;
		goto IL_0023;
	}

IL_001b:
	{
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_3))));
		goto IL_000b;
	}

IL_000b:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HoverEntered;
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_0 = __this->___m_HoverEntered_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HoverExited;
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_0 = __this->___m_HoverExited_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
