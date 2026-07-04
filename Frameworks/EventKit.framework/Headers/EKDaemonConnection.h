/* Runtime dump - EKDaemonConnection
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDaemonConnection : NSObject <CADClientInterface>
{
    unsigned long _options;
    NSString * _dbPath;
    id _delegate;
    NSObject<OS_dispatch_queue> * _connectionLock;
    <CADInterface> * _remoteOperationProxy;
    NSObject<OS_dispatch_queue> * _replyHandlerLock;
    NSMutableDictionary * _cancellableOperations;
    unsigned int _nextCancellationToken;
    char _registeredForStartNote;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, retain) NSXPCConnection * xpcConnection;
@property (readonly, retain) <CADInterface> * CADOperationProxy;
@property id delegate;

+ (void)waitOnSemaphoreWithBlock:(id /* block */)arg0;

- (void)CADClientReceiveOccurrenceCacheSearchResults:(NSArray *)arg0 forSearchToken:(unsigned int)arg1 finished:(char)arg2;
- (EKDaemonConnection *)initWithOptions:(unsigned long)arg0 path:(NSString *)arg1;
- (<CADInterface> *)CADOperationProxy;
- (void)cancelRemoteOperation:(unsigned int)arg0;
- (char)_connectToServer;
- (void)_finishAllRepliesOnServerDeath;
- (void)removeCancellableRemoteOperation:(unsigned int)arg0;
- (void)_daemonRestarted;
- (unsigned int)addCancellableRemoteOperation:(NSObject *)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void)disconnect;
- (NSXPCConnection *)xpcConnection;

@end
