/* Runtime dump - CallDBManagerClient
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallDBManagerClient : CallDBManager
{
    NSXPCConnection * _helperConnection;
    id _syncHelperReadyNotificationRef;
    int _retryCount;
}

@property (retain) NSXPCConnection * helperConnection;
@property (retain) id syncHelperReadyNotificationRef;
@property int retryCount;

- (CallDBManagerClient *)init;
- (void).cxx_destruct;
- (NSObject *)permDBLocation;
- (void)handlePermanentCreated;
- (NSObject *)tempDBLocation;
- (void)createPermanent;
- (void)createTemporary;
- (void)moveCallsFromTempDatabase;
- (NSXPCConnection *)helperConnection;
- (void)setHelperConnection:(NSXPCConnection *)arg0;
- (void)pokeSyncHelperToInitDB;
- (void)createHelperConnection;
- (char)willMoveCallsFromTempDatabase;
- (id)syncHelperReadyNotificationRef;
- (void)setSyncHelperReadyNotificationRef:(id)arg0;
- (int)retryCount;
- (void)setRetryCount:(int)arg0;

@end
