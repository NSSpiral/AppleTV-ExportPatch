/* Runtime dump - CAMNebulaDaemonProxyManager
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMNebulaDaemonProxyManager : NSObject <CAMNebulaDaemonClientProtocol, CAMNebulaDaemonProtocol>
{
    NSObject<OS_dispatch_queue> * __queue;
    NSXPCConnection * __connection;
    int __connectionCount;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * _queue;
@property (readonly, nonatomic) NSXPCConnection * _connection;
@property (readonly, nonatomic) int _connectionCount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CAMNebulaDaemonProxyManager *)sharedInstance;
+ (CAMNebulaDaemonProxyManager *)_daemonProtocolInterface;
+ (CAMNebulaDaemonProxyManager *)_clientProtocolInterface;

- (CAMNebulaDaemonProxyManager *)init;
- (void).cxx_destruct;
- (NSXPCConnection *)_connection;
- (NSObject<OS_dispatch_queue> *)_queue;
- (void)startNebulaWithUUID:(NSString *)arg0;
- (void)resumeNebulaWithUUID:(NSString *)arg0;
- (void)updateNebulaWithUUID:(NSString *)arg0;
- (void)finishCaptureForNebulaWithUUID:(NSString *)arg0;
- (void)stopNebulaWithUUID:(NSString *)arg0;
- (void)updatePendingWorkFromDiskForceEndLastSession:(char)arg0;
- (void)_ensureConnectionToDaemon;
- (void)_closeConnectionToDaemon;
- (void)forceStopCaptureWithReasons:(int)arg0;
- (void)_getProxyForExecutingBlock:(id /* block */)arg0;
- (void)ensureConnectionToDaemon;
- (void)closeConnectionToDaemon;
- (int)_connectionCount;

@end
