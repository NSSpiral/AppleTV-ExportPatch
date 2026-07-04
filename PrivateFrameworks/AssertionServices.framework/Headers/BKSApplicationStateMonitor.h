/* Runtime dump - BKSApplicationStateMonitor
 * Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSApplicationStateMonitor : NSObject
{
    NSObject<OS_xpc_object> * _connection;
    BSSignal * _invalidationSignal;
    id _handler;
    unsigned int _interestedStates;
    NSArray * _interestedBundleIDs;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _messageHandlingQueue;
    NSObject<OS_xpc_object> * _serverEndpoint;
    char _denied;
}

@property (copy, nonatomic) id handler;
@property (nonatomic) unsigned int interestedStates;
@property (copy, nonatomic) NSArray * interestedBundleIDs;

- (unsigned int)applicationStateForApplication:(id)arg0;
- (void)_setEndpoint:(NSObject *)arg0;
- (unsigned int)mostElevatedApplicationStateForPID:(int)arg0;
- (void)dealloc;
- (BKSApplicationStateMonitor *)init;
- (void)invalidate;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (NSXPCConnection *)_connection;
- (BKSApplicationStateMonitor *)initWithEndpoint:(NSString *)arg0 bundleIDs:(id)arg1 states:(unsigned int)arg2;
- (void)setInterestedBundleIDs:(NSArray *)arg0;
- (void)setInterestedStates:(unsigned int)arg0;
- (void)queue_registerWithServer;
- (void)queue_setHandler:(id /* block */)arg0;
- (void)queue_setInterestedBundleIDs:(id)arg0;
- (void)queue_setInterestedStates:(unsigned int)arg0;
- (unsigned int)interestedStates;
- (void)updateInterestedBundleIDs:(id)arg0 states:(unsigned int)arg1;
- (NSArray *)interestedBundleIDs;
- (void)queue_updateInterestedStates;
- (void)queue_updateInterestedStates:(char)arg0;
- (void)updateInterestedStates:(unsigned int)arg0;
- (char)isApplicationBeingDebugged:(id)arg0;
- (void)queue_handleMessage:(NSString *)arg0;
- (void)queue_invalidate;
- (void)queue_reregister;
- (void)queue_connectionWasInvalidated;
- (BKSApplicationStateMonitor *)initWithBundleIDs:(id)arg0 states:(unsigned int)arg1;
- (NSString *)bundleInfoValueForKey:(NSString *)arg0 PID:(int)arg1;
- (void)updateInterestedBundleIDs:(id)arg0;
- (void)applicationInfoForPID:(int)arg0 completion:(id /* block */)arg1;
- (void)applicationInfoForApplication:(id)arg0 completion:(id /* block */)arg1;

@end
