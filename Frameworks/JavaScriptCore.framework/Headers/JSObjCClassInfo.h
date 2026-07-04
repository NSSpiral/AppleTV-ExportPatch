/* Runtime dump - JSObjCClassInfo
 * Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

@interface JSObjCClassInfo : NSObject
{
    JSContext * m_context;
    Class m_class;
    BOOL m_block;
    struct OpaqueJSClass * m_classRef;
    struct Weak<JSC::JSObject> m_prototype;
    struct Weak<JSC::JSObject> m_constructor;
}

- (struct JSObject *)prototype;
- (struct pair<JSC::JSObject *, JSC::JSObject *>)allocateConstructorAndPrototype;
- (JSObjCClassInfo *)initWithContext:(NSObject *)arg0 forClass:(Class)arg1;
- (NSObject *)wrapperForObject:(NSObject *)arg0;
- (id)constructor;
- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
