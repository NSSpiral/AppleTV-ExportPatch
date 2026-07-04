/* Runtime dump - BKSAlternateSystemApp
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSAlternateSystemApp : NSObject <BKSAlternateSystemAppClientProtocol>
{
    char _stateChangeWaiter;
    <BKSAlternateSystemAppDelegate> * _delegate;
    NSString * _bundleId;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    int _state;
    NSObject<OS_dispatch_semaphore> * _stateChangeSemaphore;
}

@property (nonatomic) <BKSAlternateSystemAppDelegate> * delegate;
@property (copy, nonatomic) NSString * bundleId;
@property (retain, nonatomic) NSXPCConnection * connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (nonatomic) int state;
@property (nonatomic) char stateChangeWaiter;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> * stateChangeSemaphore;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)terminate;
- (NSString *)bundleId;
- (void)dealloc;
- (void)setDelegate:(<BKSAlternateSystemAppDelegate> *)arg0;
- (<BKSAlternateSystemAppDelegate> *)delegate;
- (int)state;
- (void)setState:(int)arg0;
- (void)activate;
- (void)_invalidate;
- (NSXPCConnection *)connection;
- (void)setConnection:(NSXPCConnection *)arg0;
- (void)setStateChangeSemaphore:(NSObject<OS_dispatch_semaphore> *)arg0;
- (void)_queue_ensureConnection;
- (void)_queue_changeState:(int)arg0;
- (void)_waitForState:(int)arg0;
- (void)didBlockSystemAppForAlternateSystemApp;
- (void)didUnblockSystemAppForAlternateSystemApp;
- (void)alternateSystemAppWithBundleID:(NSString *)arg0 failedToOpenWithResult:(NSObject *)arg1;
- (void)alternateSystemAppWithBundleID:(NSString *)arg0 didExitWithReason:(unsigned long long)arg1;
- (void)alternateSystemAppWithBundleIDDidOpen:(id)arg0;
- (void)alternateSystemAppWithBundleIDDidTerminate:(id)arg0;
- (void)_handleInterruptedConnection;
- (void)_handleInvalidatedConnection;
- (BKSAlternateSystemApp *)initWithBundleId:(NSString *)arg0;
- (char)stateChangeWaiter;
- (void)setStateChangeWaiter:(char)arg0;
- (NSObject<OS_dispatch_semaphore> *)stateChangeSemaphore;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setBundleId:(NSString *)arg0;

@end
