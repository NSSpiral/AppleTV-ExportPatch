/* Runtime dump - JSManagedValue
 * Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

@interface JSManagedValue : NSObject
{
    struct Weak<JSC::JSGlobalObject> m_globalObject;
    struct RefPtr<JSC::JSLock> m_lock;
    struct WeakValueRef m_weakValue;
    NSMapTable * m_owners;
}

@property (readonly) JSValue * value;

+ (JSManagedValue *)managedValueWithValue:(JSValue *)arg0;
+ (JSManagedValue *)managedValueWithValue:(JSValue *)arg0 andOwner:(NSObject *)arg1;

- (JSManagedValue *)initWithValue:(JSValue *)arg0;
- (void)disconnectValue;
- (void)didAddOwner:(NSObject *)arg0;
- (void)didRemoveOwner:(NSObject *)arg0;
- (void)dealloc;
- (JSManagedValue *)init;
- (JSValue *)value;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
