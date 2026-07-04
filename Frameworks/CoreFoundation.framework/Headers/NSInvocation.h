/* Runtime dump - NSInvocation
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSInvocation : NSObject
{
    void * _frame;
    void * _retdata;
    id _signature;
    id _container;
    unsigned char _retainedArgs;
    id _reserved;
}

@property (readonly, retain) NSMethodSignature * methodSignature;
@property (readonly) char argumentsRetained;
@property id target;
@property SEL selector;

+ (void)tsu_executeBlock:(id /* block */)arg0;
+ (NSInvocation *)tsu_invocationWithBlock:(id /* block */)arg0;
+ (void)executeBlock:(id /* block */)arg0;
+ (NSInvocation *)invocationWithBlock:(id /* block */)arg0;
+ (NSInvocation *)_gkInvocationWithBlock:(id /* block */)arg0;
+ (NSString *)_mapkit_invocationWithSelector:(SEL)arg0 target:(NSObject *)arg1;
+ (NSString *)_mapkit_invocationWithSelector:(SEL)arg0 target:(NSObject *)arg1 arguments:(void *)arg2;
+ (NSString *)mf_invocationWithSelector:(SEL)arg0 target:(NSObject *)arg1 object:(NSObject *)arg2;
+ (NSString *)mf_invocationWithSelector:(SEL)arg0 target:(NSObject *)arg1;
+ (NSString *)mf_invocationWithSelector:(SEL)arg0 target:(NSObject *)arg1 object1:(NSObject *)arg2 object2:(NSObject *)arg3;
+ (NSObject *)_invocationWithMethodSignature:(NSMethodSignature *)arg0 frame:(void *)arg1;
+ (NSInvocation *)invocationWithMethodSignature:(NSMethodSignature *)arg0;

- (char)_gkHasReplyBlock;
- (void)_gkInvokeOnceWithTarget:(NSObject *)arg0;
- (void)_gkCopyArguments;
- (NSObject *)_gkReplyHandlerInvocation;
- (void)_gkCallbackWithError:(NSError *)arg0 queue:(NSObject *)arg1;
- (void)_gkClearCopiedArguments;
- (void)_gkInvokeOnce;
- (void)_gkPrepareForCallWithError:(NSError *)arg0;
- (void)_gkClearTarget;
- (void)_gkPrintBlockSignature;
- (void)__gkPrepareForFakeCallbackWithNoData:(char)arg0 orError:(NSError *)arg1;
- (void)_gkClearArgumentAtIndex:(unsigned int)arg0;
- (char)mf_shouldLogInvocation;
- (void)_webkit_invokeAndHandleException:(NSException *)arg0;
- (char)wantsReturnValue;
- (char)_hasBlockArgument;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSDictionary *)userInfo;
- (NSString *)debugDescription;
- (char)argumentsRetained;
- (void)_addAttachedObject:(NSObject *)arg0;
- (void)invokeSuper;
- (void)dealloc;
- (NSInvocation *)init;
- (void)setArgument:(void *)arg0 atIndex:(int)arg1;
- (void)invoke;
- (void)setTarget:(NSObject *)arg0;
- (void)setSelector:(SEL)arg0;
- (NSInvocation *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)target;
- (SEL)selector;
- (void)retainArguments;
- (void)invokeWithTarget:(NSObject *)arg0;
- (void)getReturnValue:(void *)arg0;
- (NSMethodSignature *)methodSignature;
- (void)getArgument:(void *)arg0 atIndex:(int)arg1;
- (void)setReturnValue:(void *)arg0;
- (void)invokeUsingIMP:(/* block */ id *)arg0;

@end
