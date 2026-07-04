/* Runtime dump - JSWrapperMap
 * Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

@interface JSWrapperMap : NSObject
{
    JSContext * m_context;
    NSMutableDictionary * m_classMap;
    struct WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > m_cachedJSWrappers;
    NSMapTable * m_cachedObjCWrappers;
}

- (NSObject *)jsWrapperForObject:(NSObject *)arg0;
- (id)objcWrapperForJSValueRef:(struct OpaqueJSValue *)arg0;
- (NSObject *)classInfoForClass:(Class)arg0;
- (void)dealloc;
- (JSWrapperMap *)initWithContext:(NSObject *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
