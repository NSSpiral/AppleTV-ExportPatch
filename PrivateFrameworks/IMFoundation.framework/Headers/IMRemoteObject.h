/* Runtime dump - IMRemoteObject
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMRemoteObject : NSObject
{
    id _internal;
}

@property (readonly, nonatomic) NSString * portName;
@property (nonatomic) int pid;
@property (readonly, nonatomic) NSObject<OS_xpc_object> * connection;
@property (readonly, nonatomic) char isValid;

+ (void)initialize;
+ (void)_registerIMRemoteObject:(NSObject *)arg0;
+ (void)_unregisterIMRemoteObject:(NSObject *)arg0;
+ (NSArray *)_remoteObjects;

- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (char)isValid;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (NSObject<OS_xpc_object> *)connection;
- (NSOperationQueue *)_queue;
- (int)pid;
- (void)setPid:(int)arg0;
- (IMRemoteObject *)initWithConnection:(NSObject<OS_xpc_object> *)arg0 protocol:(Protocol *)arg1 alreadyConfigured:(char)arg2;
- (void)_portDidBecomeInvalid;
- (NSString *)portName;
- (void)_systemShutdown:(id)arg0;
- (void)setPortName:(NSString *)arg0;
- (NSURLConnection *)_initWithConnection:(NSObject<OS_xpc_object> *)arg0 portName:(NSString *)arg1 protocol:(Protocol *)arg2 alreadyConfigured:(char)arg3;
- (void)_cleanupMachBitsCanPost:(char)arg0;
- (unsigned int)forwardXPCObject:(NSObject *)arg0 messageContext:(NSObject *)arg1;
- (IMRemoteObject *)initWithConnection:(NSObject<OS_xpc_object> *)arg0 protocol:(Protocol *)arg1;
- (IMRemoteObject *)initWithPortName:(NSString *)arg0 protocol:(Protocol *)arg1;
- (void)finalize;

@end
