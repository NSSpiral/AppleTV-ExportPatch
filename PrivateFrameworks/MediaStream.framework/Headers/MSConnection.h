/* Runtime dump - MSConnection
 * Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSConnection : NSObject
{
    NSXPCConnection * _center;
    NSXPCConnection * _noWakeCenter;
    NSMutableDictionary * _serverSideConfig;
    NSObject<OS_dispatch_queue> * _serverSideConfigQueue;
    int _serverSideConfigNotificationToken;
}

+ (MSConnection *)sharedConnection;

- (void)dealloc;
- (MSConnection *)init;
- (void).cxx_destruct;
- (SATimerPause *)pause;
- (void)checkForOutstandingActivities;
- (void)refreshServerSideConfigurationForPersonID:(NSObject *)arg0;
- (NSError *)_machErrorWithUnderlyingError:(NSError *)arg0;
- (void)_waitForMessageToBeSent;
- (void)handleSubscriptionPushForPersonID:(NSObject *)arg0;
- (void)abortActivitiesForPersonID:(NSObject *)arg0;
- (char)enqueueAssetCollections:(id)arg0 personID:(NSString *)arg1 outError:(id *)arg2;
- (char)dequeueAssetCollectionWithGUIDs:(id)arg0 personID:(NSString *)arg1 outError:(id *)arg2;
- (void)pollForSubscriptionUpdatesForPersonID:(NSObject *)arg0;
- (NSObject *)serverSideConfigurationForPersonID:(NSObject *)arg0;
- (void)forgetPersonID:(NSObject *)arg0;
- (void)resetServerStateForPersonID:(NSObject *)arg0;
- (void)resume:(SATimerResume *)arg0;
- (void)deleteAssetCollections:(id)arg0 personID:(NSString *)arg1;
- (void)isBusyCompletionBlock:(id /* block */)arg0;
- (char)isBusy;

@end
