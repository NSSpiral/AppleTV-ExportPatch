/* Runtime dump - MSMediaStreamDaemon
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSMediaStreamDaemon : MSDaemon
{
    <MSMediaStreamDaemonDelegate> * _delegate;
    NSCountedSet * _retainedObjects;
}

@property (nonatomic) <MSMediaStreamDaemonDelegate> * delegate;

- (void)setDelegate:(<MSMediaStreamDaemonDelegate> *)arg0;
- (MSMediaStreamDaemon *)init;
- (<MSMediaStreamDaemonDelegate> *)delegate;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (NSDate *)nextActivityDate;
- (char)isInRetryState;
- (NSObject *)_boundPublisherForPersonID:(NSObject *)arg0;
- (NSObject *)_boundSubscriberForPersonID:(NSObject *)arg0;
- (NSObject *)_boundDeleterForPersonID:(NSObject *)arg0;
- (void)stopAllActivities;
- (void)didReceivePushNotificationForPersonID:(NSObject *)arg0;
- (NSObject *)_boundSharingManagerForPersonID:(NSObject *)arg0;
- (NSObject *)sharesForPersonID:(NSObject *)arg0;
- (char)personIDIsAcceptingInvitations:(id)arg0;
- (NSObject *)_findShareWithPersonID:(NSObject *)arg0 inArray:(NSArray *)arg1;
- (void)_removeShareWithPersonID:(NSObject *)arg0 inArray:(NSArray *)arg1;
- (NSObject *)_boundServerSideConfigManagerForPersonID:(NSObject *)arg0;
- (void)refreshServerSideConfigurationForPersonID:(NSObject *)arg0;
- (char)hasOutstandingActivity;
- (char)personIDHasOutstandingPublications:(id)arg0;
- (void)didIdle;
- (void)didUnidle;
- (void)reenqueueQuarantinedActivitiesWithReason:(NSString *)arg0;
- (void)abortAllActivityForPersonID:(NSObject *)arg0;
- (char)enqueueAssetCollection:(id)arg0 personID:(NSString *)arg1 outError:(id *)arg2;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(NSObject *)arg0;
- (void)resetSubscriberSyncForPersonID:(NSObject *)arg0;
- (void)computeHashForAsset:(NSSet *)arg0 personID:(NSString *)arg1;
- (NSObject *)subscribedStreamsForPersonID:(NSObject *)arg0;
- (NSObject *)ownSubscribedStreamForPersonID:(NSObject *)arg0;
- (void)_setShares:(id)arg0 forPersonID:(NSObject *)arg1;
- (NSDictionary *)invitationFromPushNotificationUserInfo:(NSDictionary *)arg0 outSourcePersonID:(id *)arg1 outTargetPersonID:(id *)arg2;
- (id)invitationStringsFromInvitation:(id)arg0 targetPersonID:(NSObject *)arg1;
- (void)sendInvitations:(id)arg0 forPersonID:(NSObject *)arg1;
- (void)respondToInvitation:(id)arg0 forPersonID:(NSObject *)arg1 accept:(char)arg2;
- (void)modifyShare:(id)arg0 forPersonID:(NSObject *)arg1;
- (void)removeShare:(CKShare *)arg0 forPersonID:(NSObject *)arg1;
- (void)refreshShareStatesForPersonID:(NSObject *)arg0;
- (id)notificationStringsForShareStateTransitionOldShares:(id)arg0 newShares:(id)arg1;
- (void)didReceiveServerSideConfigurationVersion:(NSString *)arg0 forPersonID:(NSObject *)arg1;
- (void)didReceiveNewServerSideConfigurationForPersonID:(NSObject *)arg0;
- (void)deleteAssetCollections:(id)arg0 forPersonID:(NSObject *)arg1;
- (void)didReceiveNewShareState:(NSObject *)arg0 oldShareState:(NSObject *)arg1 forPersonID:(NSObject *)arg2;
- (void)showInvitationFailureAlertForPersonID:(NSObject *)arg0 failures:(NSMutableSet *)arg1;
- (void)didReceiveAuthenticationFailureForPersonID:(NSObject *)arg0;
- (void)didReceiveAuthenticationSuccessForPersonID:(NSObject *)arg0;
- (void)didExceedPublishQuotaForPersonID:(NSObject *)arg0 retryDate:(NSDate *)arg1;
- (void)didReceiveGlobalResetSyncForPersonID:(NSObject *)arg0;
- (char)mayDownloadPersonID:(NSObject *)arg0;
- (char)dequeueAssetCollectionWithGUIDs:(id)arg0 personID:(NSString *)arg1 outError:(id *)arg2;
- (void)pollForSubscriptionUpdatesForPersonID:(NSObject *)arg0;
- (NSObject *)serverSideConfigurationForPersonID:(NSObject *)arg0;
- (void)forgetPersonID:(NSObject *)arg0;
- (void)retryOutstandingActivities;

@end
