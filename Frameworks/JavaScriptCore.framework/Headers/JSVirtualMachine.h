/* Runtime dump - JSVirtualMachine
 * Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

@interface JSVirtualMachine : NSObject
{
    struct OpaqueJSContextGroup * m_group;
    NSMapTable * m_contextCache;
    NSMapTable * m_externalObjectGraph;
    NSMapTable * m_externalRememberedSet;
}

+ (JSVirtualMachine *)virtualMachineWithContextGroupRef:(struct OpaqueJSContextGroup *)arg0;

- (void)addContext:(NSObject *)arg0 forGlobalContextRef:(struct OpaqueJSContext *)arg1;
- (id)contextForGlobalContextRef:(struct OpaqueJSContext *)arg0;
- (void)addManagedReference:(NSObject *)arg0 withOwner:(NSObject *)arg1;
- (void)removeManagedReference:(NSObject *)arg0 withOwner:(NSObject *)arg1;
- (JSVirtualMachine *)initWithContextGroupRef:(struct OpaqueJSContextGroup *)arg0;
- (BOOL)isOldExternalObject:(NSObject *)arg0;
- (void)addExternalRememberedObject:(NSObject *)arg0;
- (NSObject *)externalObjectGraph;
- (NSSet *)externalRememberedSet;
- (void)dealloc;
- (JSVirtualMachine *)init;

@end
