/* Runtime dump - TRTCPConnection
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRTCPConnection : NSObject <TRTCPConnectionStreamDelegate>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    char _closed;
    TRTCPConnectionStream * _connectionStream;
    <TRTCPConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _deviceIdentifier;
    NSObject<OS_dispatch_source> * _keepAliveTimer;
    NSArray * _relevantPacketEventClasses;
    int _uniqueID;
}

@property (readonly, weak, nonatomic) <TRTCPConnectionDelegate> * delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * delegateQueue;
@property (readonly, nonatomic) int uniqueID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (<TRTCPConnectionDelegate> *)delegate;
- (void)close;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)connectionStreamDidClose:(id)arg0;
- (void)sendPacketEvent:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (NSObject *)_initWithUniqueID:(int)arg0 connectionStream:(TRTCPConnectionStream *)arg1;
- (void)_performNextRead;
- (void)_handleReceivedPacketEvent:(NSObject *)arg0;
- (void)setDelegate:(<TRTCPConnectionDelegate> *)arg0 delegateQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (int)uniqueID;

@end
