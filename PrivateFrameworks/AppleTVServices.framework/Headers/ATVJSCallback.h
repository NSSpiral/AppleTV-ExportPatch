/* Runtime dump - ATVJSCallback
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVJSCallback : NSObject <ATVJSObject>
{
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id _successBlock;
    unsigned int _successArgCount;
    id _failureBlock;
    struct OpaqueJSValue * _jsObjectRef;
    id _parameterParsingBlock;
}

@property (readonly, nonatomic) struct OpaqueJSValue * jsObjectRef;
@property (copy, nonatomic) id parameterParsingBlock;

- (void)dealloc;
- (struct OpaqueJSValue *)jsObjectRef;
- (ATVJSCallback *)initWithContext:(struct OpaqueJSContext *)arg0 callbackQueue:(NSObject<OS_dispatch_queue> *)arg1 successBlock:(id /* block */)arg2 successArgCount:(/* block */ id)arg3 failureBlock:(unsigned int)arg4;
- (id /* block */)parameterParsingBlock;
- (void)_callbackSuccessWithContext:(struct OpaqueJSContext *)arg0 argumentCount:(unsigned long)arg1 arguments:(struct OpaqueJSValue * *)arg2 exception:(struct OpaqueJSValue *)arg3;
- (void)_callbackFailureWithContext:(struct OpaqueJSContext *)arg0 argumentCount:(unsigned long)arg1 arguments:(struct OpaqueJSValue * *)arg2 exception:(struct OpaqueJSValue *)arg3;
- (void)_jsFinalize;
- (void)setParameterParsingBlock:(id /* block */)arg0;

@end
