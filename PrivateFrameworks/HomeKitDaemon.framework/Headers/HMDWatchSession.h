/* Runtime dump - HMDWatchSession
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWatchSession : HAPRemoteSession
{
    NSMutableDictionary * _responseHandlers;
    unsigned long long _sendInternalTimeout;
}

@property (nonatomic) unsigned long long sendInternalTimeout;
@property (retain, nonatomic) NSMutableDictionary * responseHandlers;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (HMDWatchSession *)initWithType:(int)arg0 commitTimeout:(unsigned long long)arg1 clientIdleTimeout:(unsigned long long)arg2 serverIdleTimeout:(unsigned long long)arg3 sendInternalTimeout:(unsigned long long)arg4 sendUserTimeout:(unsigned long long)arg5;
- (void)sendRequest:(NSURLRequest *)arg0 options:(NSDictionary *)arg1 responseHandler:(NSObject<OS_xpc_object> *)arg2;
- (void)transportReceivedMessage:(NSString *)arg0;
- (void)_clearOutRemainingRequests;
- (NSMutableDictionary *)responseHandlers;
- (void)_peerTimedOut:(id)arg0;
- (unsigned long long)sendInternalTimeout;
- (void)setSendInternalTimeout:(unsigned long long)arg0;
- (void)setResponseHandlers:(NSMutableDictionary *)arg0;

@end
