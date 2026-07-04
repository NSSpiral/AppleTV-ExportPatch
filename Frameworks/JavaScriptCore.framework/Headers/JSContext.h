/* Runtime dump - JSContext
 * Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

@interface JSContext : NSObject
{
    JSVirtualMachine * m_virtualMachine;
    struct OpaqueJSContext * m_context;
    JSWrapperMap * m_wrapperMap;
    struct Strong<JSC::JSObject> m_exception;
    id exceptionHandler;
}

@property (readonly, retain) JSWrapperMap * wrapperMap;
@property (readonly) JSValue * globalObject;
@property (retain) JSValue * exception;
@property (copy) id exceptionHandler;
@property (readonly) JSVirtualMachine * virtualMachine;
@property (copy) NSString * name;

+ (JSContext *)currentThis;
+ (JSContext *)currentCallee;
+ (JSContext *)currentArguments;
+ (JSContext *)currentContext;
+ (JSContext *)contextWithJSGlobalContextRef:(struct OpaqueJSContext *)arg0;

- (JSContext *)initWithVirtualMachine:(JSVirtualMachine *)arg0;
- (void)setExceptionHandler:(id /* block */)arg0;
- (id /* block */)exceptionHandler;
- (id)evaluateScript:(id)arg0 withSourceURL:(NSURL *)arg1;
- (NSException *)valueFromNotifyException:(struct OpaqueJSValue *)arg0;
- (JSWrapperMap *)wrapperMap;
- (JSVirtualMachine *)virtualMachine;
- (char)_remoteInspectionEnabled;
- (void)_setRemoteInspectionEnabled:(char)arg0;
- (char)_includesNativeCallStackWhenReportingExceptions;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(char)arg0;
- (struct __CFRunLoop *)_debuggerRunLoop;
- (void)_setDebuggerRunLoop:(struct __CFRunLoop *)arg0;
- (void)notifyException:(struct OpaqueJSValue *)arg0;
- (JSContext *)initWithGlobalContextRef:(struct OpaqueJSContext *)arg0;
- (char)boolFromNotifyException:(struct OpaqueJSValue *)arg0;
- (void)beginCallbackWithData:(struct CallbackData *)arg0 calleeValue:(id)arg1 thisValue:(id)arg2 argumentCount:(struct OpaqueJSValue *)arg3 arguments:(struct OpaqueJSValue *)arg4;
- (void)endCallbackWithData:(struct CallbackData *)arg0;
- (NSObject *)wrapperForObjCObject:(NSObject *)arg0;
- (NSObject *)wrapperForJSObject:(struct OpaqueJSValue *)arg0;
- (JSValue *)globalObject;
- (id)evaluateScript:(id)arg0;
- (JSValue *)exception;
- (void)dealloc;
- (JSContext *)init;
- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (void)setObject:(NSObject *)arg0 forKeyedSubscript:(id)arg1;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueJSContext *)JSGlobalContextRef;
- (void)setException:(JSValue *)arg0;

@end
