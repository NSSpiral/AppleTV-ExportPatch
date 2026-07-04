/* Runtime dump - CPDistributedMessagingCenter
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPDistributedMessagingCenter : NSObject
{
    NSString * _centerName;
    NSLock * _lock;
    unsigned int _sendPort;
    NSOperationQueue * _asyncQueue;
    struct __CFRunLoopSource * _serverSource;
    NSString * _requiredEntitlement;
    NSMutableDictionary * _callouts;
    unsigned int _parkedServerPort;
    CPDistributedMessagingCallout * _currentCallout;
    unsigned int _replyPort;
    char _portPassing;
    char _delayedReply;
    char _requireLookupByPID;
    int _targetPID;
}

+ (CPDistributedMessagingCenter *)centerNamed:(id)arg0;
+ (CPDistributedMessagingCenter *)_centerNamed:(id)arg0 requireLookupByPID:(char)arg1;
+ (CPDistributedMessagingCenter *)pidRestrictedCenterNamed:(id)arg0;

- (void)runServerOnCurrentThread;
- (void)registerForMessageName:(NSString *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2;
- (char)sendNonBlockingMessageName:(NSString *)arg0 userInfo:(NSDictionary *)arg1;
- (NSString *)sendMessageAndReceiveReplyName:(NSString *)arg0 userInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (void)stopServer;
- (void)dealloc;
- (NSString *)name;
- (unsigned int)_serverPort;
- (NSString *)_initWithServerName:(NSString *)arg0;
- (NSString *)_initWithServerName:(NSString *)arg0 requireLookupByPID:(char)arg1;
- (void)_setSendPort:(unsigned int)arg0;
- (void)_setupInvalidationSource;
- (char)_sendMessage:(NSString *)arg0 userInfo:(NSDictionary *)arg1 receiveReply:(id *)arg2 error:(id *)arg3 toTarget:(NSObject *)arg4 selector:(SEL)arg5 context:(void *)arg6;
- (char)_sendMessage:(NSString *)arg0 userInfo:(NSDictionary *)arg1 receiveReply:(id *)arg2 error:(id *)arg3 toTarget:(NSObject *)arg4 selector:(SEL)arg5 context:(void *)arg6 nonBlocking:(char)arg7;
- (char)_sendMessage:(NSString *)arg0 userInfoData:(NSData *)arg1 oolKey:(NSString *)arg2 oolData:(NSData *)arg3 makeServer:(char)arg4 receiveReply:(id *)arg5 nonBlocking:(char)arg6 error:(id *)arg7;
- (unsigned int)_sendPort;
- (CPDistributedMessagingCenter *)_initAnonymousServer;
- (void)_sendReplyMessage:(NSString *)arg0 portPassing:(char)arg1 onMachPort:(unsigned int)arg2;
- (NSObject *)_initClientWithPort:(unsigned int)arg0;
- (char)sendMessageName:(NSString *)arg0 userInfo:(NSDictionary *)arg1;
- (void)sendMessageAndReceiveReplyName:(NSString *)arg0 userInfo:(NSDictionary *)arg1 toTarget:(NSObject *)arg2 selector:(SEL)arg3 context:(void *)arg4;
- (id /* block */)delayReply;
- (void)sendDelayedReply:(id /* block */)arg0 dictionary:(NSDictionary *)arg1;
- (void)unregisterForMessageName:(NSString *)arg0;
- (void)_dispatchMessageNamed:(id)arg0 userInfo:(NSDictionary *)arg1 reply:(id *)arg2 auditToken:(struct ? *)arg3;
- (char)_isTaskEntitled:(struct ? *)arg0;
- (NSString *)_requiredEntitlement;
- (void)runServerOnCurrentThreadProtectedByEntitlement:(id)arg0;
- (char)doesServerExist;
- (void)setTargetPID:(int)arg0;
- (NSString *)sendMessageAndReceiveReplyName:(NSString *)arg0 userInfo:(NSDictionary *)arg1;

@end
