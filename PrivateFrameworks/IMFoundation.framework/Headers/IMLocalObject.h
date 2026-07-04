/* Runtime dump - IMLocalObject
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMLocalObject : NSObject
{
    id _internal;
}

@property (nonatomic) id target;
@property (readonly, nonatomic) NSString * portName;
@property (readonly, nonatomic) NSObject<OS_xpc_object> * connection;
@property (readonly, nonatomic) char isValid;

+ (void)initialize;
+ (void)_registerIMLocalObject:(NSObject *)arg0;
+ (void)_unregisterIMLocalObject:(NSObject *)arg0;
+ (NSOperationQueue *)_imLocalObjectQueue;
+ (void)_setExceptionHandlingDisabled:(char)arg0;
+ (NSObject *)_registeredIMLocalObjectForPort:(unsigned int)arg0;

- (IMLocalObject *)initWithTarget:(NSObject *)arg0 protocol:(Protocol *)arg1;
- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (char)isValid;
- (void)setTarget:(NSObject *)arg0;
- (NSObject *)target;
- (NSObject<OS_xpc_object> *)connection;
- (void)_portDidBecomeInvalid;
- (void)_portInterrupted;
- (void)_enqueueInvocation:(NSObject *)arg0;
- (NSString *)_currentMessageContext;
- (IMLocalObject *)initWithTarget:(NSObject *)arg0 portName:(NSString *)arg1 protocol:(Protocol *)arg2;
- (IMLocalObject *)initWithTarget:(NSObject *)arg0 connection:(NSObject<OS_xpc_object> *)arg1 protocol:(Protocol *)arg2 offMainThread:(char)arg3;
- (void)_handleNewInvocations;
- (void)_cancelHandlerCompleted;
- (void)_clearPort:(char)arg0;
- (char)isValidSelector:(SEL)arg0;
- (void)terminated;
- (char)_handleInvocation:(NSObject *)arg0;
- (NSObject *)_peekInvocation;
- (void)_popInvocation;
- (char)handleInvocation:(NSObject *)arg0;
- (void)_noteNewInvocation;
- (void)_enqueueInvocation:(NSObject *)arg0 xpcMessage:(NSString *)arg1;
- (void)_enqueueInvocationWithPriority:(id)arg0 xpcMessage:(NSString *)arg1 priority:(int)arg2;
- (void)_handleInvocationForSendMessage:(NSString *)arg0;
- (NSString *)portName;
- (IMLocalObject *)initWithTarget:(NSObject *)arg0 connection:(NSObject<OS_xpc_object> *)arg1 protocol:(Protocol *)arg2;
- (void)_systemShutdown:(id)arg0;
- (void)setPortName:(NSString *)arg0;
- (void)_enqueueInvocationWithPriority:(id)arg0 priority:(int)arg1;

@end
