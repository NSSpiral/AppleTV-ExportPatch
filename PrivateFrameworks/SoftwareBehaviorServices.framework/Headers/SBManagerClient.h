/* Runtime dump - SBManagerClient
 * Image: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/SoftwareBehaviorServices
 */

@interface SBManagerClient : NSObject <SBManagerClientInterface>
{
    NSXPCConnection * _serverConnection;
    <SBManagerClientDelegate> * _delegate;
    char _connected;
    char _serverIsExiting;
    int _clientType;
    struct dispatch_queue_s * _queue;
}

@property (nonatomic) <SBManagerClientDelegate> * delegate;
@property (nonatomic) int clientType;
@property struct dispatch_queue_s * queue;

- (id)_remoteInterface;
- (void)dealloc;
- (void)setDelegate:(<SBManagerClientDelegate> *)arg0;
- (SBManagerClient *)init;
- (<SBManagerClientDelegate> *)delegate;
- (void)invalidate;
- (int)clientType;
- (void)setClientType:(int)arg0;
- (struct dispatch_queue_s *)queue;
- (void)setQueue:(struct dispatch_queue_s *)arg0;
- (SBManagerClient *)initWithDelegate:(<SBManagerClientDelegate> *)arg0;
- (SBManagerClient *)initWithDelegate:(<SBManagerClientDelegate> *)arg0 clientType:(int)arg1;
- (void)connectToServerIfNecessary;
- (void)_invalidateConnection;
- (id)_remoteInterfaceWithErrorHandler:(SSErrorHandler *)arg0 connectIfNecessary:(/* block */ id)arg1;
- (void)_setClientType;
- (id)_remoteInterfaceWithErrorHandler:(SSErrorHandler *)arg0;
- (void)setSoftwareBehaviorID:(NSObject *)arg0 withBundle:(NSObject *)arg1 replyHandler:(id /* block */)arg2;
- (void)isSoftwareBehaviorBundleSupported:(id)arg0;
- (void)copySoftwareBehaviorValue:(id)arg0 replyHandler:(id /* block */)arg1;
- (void)checkForSoftwareBehaviorBundleUpdate:(NSDate *)arg0;
- (void)noteConnectionDropped;
- (void)noteServerExiting;

@end
