/* Runtime dump - WebScriptObject
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebScriptObject : NSObject
{
    WebScriptObjectPrivate * _private;
}

+ (void)initialize;
+ (WebScriptObject *)_convertValueToObjcValue:(struct JSValue)arg0 originRootObject:(struct RootObject *)arg1 rootObject:(NSObject *)arg2;
+ (NSObject *)scriptObjectForJSObject:(struct OpaqueJSValue *)arg0 originRootObject:(struct RootObject *)arg1 rootObject:(NSObject *)arg2;
+ (char)throwException:(NSException *)arg0;

- (void)release;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (WebScriptObject *)_init;
- (struct RootObject *)_rootObject;
- (void)finalize;
- (void)_setImp:(struct JSObject *)arg0 originRootObject:(unsigned char)arg1 rootObject:(unsigned char)arg2;
- (void)_initializeScriptDOMNodeImp;
- (char)_hasImp;
- (struct JSObject *)_imp;
- (void)_setOriginRootObject:(struct PassRefPtr<JSC::Bindings::RootObject>)arg0 andRootObject:(NSObject *)arg1;
- (NSObject *)_initWithJSObject:(struct JSObject *)arg0 originRootObject:(unsigned char)arg1 rootObject:(unsigned char)arg2;
- (char)_isSafeScript;
- (struct RootObject *)_originRootObject;
- (struct OpaqueJSValue *)JSObject;
- (struct OpaqueJSContext *)_globalContextRef;
- (NSString *)callWebScriptMethod:(NSString *)arg0 withArguments:(NSDictionary *)arg1;
- (id)evaluateWebScript:(id)arg0;
- (void)removeWebScriptKey:(NSString *)arg0;
- (char)hasWebScriptKey:(NSString *)arg0;
- (NSDictionary *)stringRepresentation;
- (NSObject *)webScriptValueAtIndex:(unsigned int)arg0;
- (void)setWebScriptValueAtIndex:(unsigned int)arg0 value:(NSObject *)arg1;
- (void)setException:(JSValue *)arg0;
- (id)JSValue;

@end
