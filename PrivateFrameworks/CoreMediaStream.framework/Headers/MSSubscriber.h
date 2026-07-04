/* Runtime dump - MSSubscriber
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSSubscriber : MSCupidStateMachine <MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate>
{
    <MSSubscriberDelegate> * _delegate;
    MSMediaStreamDaemon * _daemon;
    char _checkOneMoreTime;
    int _state;
    MSSubscribeStreamsProtocol * _protocol;
    NSMutableDictionary * _newSubscriptionsByStreamID;
    int _retrievalState;
    <MSSubscribeStorageProtocol> * _storageProtocol;
    MSReauthorizationProtocol * _reauthProtocol;
    MSObjectQueue * _retrievalQueue;
    NSMutableArray * _assetsBeingRetrieved;
    long long _targetRetrievalByteCount;
    int _retrievalBatchSize;
    int _maxErrorCount;
}

@property (nonatomic) MSMediaStreamDaemon * daemon;
@property (nonatomic) long long targetRetrievalByteCount;
@property (nonatomic) int retrievalBatchSize;
@property (nonatomic) <MSSubscriberDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDate *)nextActivityDate;
+ (MSSubscriber *)personIDsWithOutstandingActivities;
+ (char)isInRetryState;
+ (NSObject *)subscriberForPersonID:(NSObject *)arg0;
+ (NSObject *)existingSubscriberForPersonID:(NSObject *)arg0;
+ (void)stopAllActivities;
+ (NSObject *)_clearInstantiatedSubscribersByPersonID;
+ (NSObject *)nextActivityDateForPersonID:(NSObject *)arg0;
+ (void)_setMasterNextActivityDate:(NSDate *)arg0 forPersonID:(NSObject *)arg1;
+ (NSObject *)_descriptionForState:(int)arg0;
+ (NSObject *)_descriptionForRetrievalState:(int)arg0;
+ (void)forgetPersonID:(NSObject *)arg0;

- (void)dealloc;
- (void)setDelegate:(<MSSubscriberDelegate> *)arg0;
- (<MSSubscriberDelegate> *)delegate;
- (void)stop;
- (void)deactivate;
- (void).cxx_destruct;
- (MSMediaStreamDaemon *)daemon;
- (void)setDaemon:(MSMediaStreamDaemon *)arg0;
- (void)checkForOutstandingActivities;
- (void)checkForNewAssetCollections;
- (void)resetSync;
- (id)subscribedStreams;
- (NSObject *)ownSubscribedStream;
- (MSSubscriber *)initWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (char)_isInRetryState;
- (void)_serverSideConfigurationDidChange:(NSDictionary *)arg0;
- (void)_updateMasterManifest;
- (void)_abort;
- (void)_forget;
- (NSObject *)_subscriptionsByStreamID;
- (void)_refreshServerSideConfigurationParameters;
- (char)_hasOutstandingPoll;
- (void)_stopOutSubscriberState:(int *)arg0 outRetrievalState:(int *)arg1;
- (void)_setHasOutstandingPoll:(char)arg0;
- (char)_isAllowedToDownload;
- (void)_changeStateTo:(int)arg0;
- (void)_checkForNewAssetCollections;
- (void)_setSubscriptionsByStreamID:(NSObject *)arg0;
- (void)_didFinishRetrievingSubscriptionUpdate;
- (void)_didReceiveAuthenticationError:(NSError *)arg0;
- (void)_retrieveAssets;
- (void)_changeRetrievalStateTo:(int)arg0;
- (void)_retrieveNextAssets;
- (void)_reauthorizeAssets;
- (void)retrieveAssets:(NSArray *)arg0;
- (void)_finishedRetrievingAsset:(NSSet *)arg0;
- (void)subscribeStreamsProtocol:(NSObject *)arg0 willReceiveUpdatesForPersonID:(NSObject *)arg1 wasReset:(char)arg2 metadata:(NSDictionary *)arg3;
- (void)subscribeStreamsProtocol:(NSObject *)arg0 didReceiveAssetCollections:(id)arg1 forPersonID:(NSObject *)arg2;
- (void)subscribeStreamsProtocol:(NSObject *)arg0 didFinishReceivingUpdatesForPersonID:(NSObject *)arg1 ctag:(NSString *)arg2;
- (void)subscribeStreamsProtocol:(NSObject *)arg0 didFindDisappearedSubscriptionForPersonID:(NSObject *)arg1;
- (void)subscribeStreamsProtocol:(NSObject *)arg0 didFindTemporarilyUnavailableSubscriptionForPersonID:(NSObject *)arg1;
- (void)subscribeStreamsProtocol:(NSObject *)arg0 didFindShareState:(NSObject *)arg1;
- (void)subscribeStreamsProtocol:(NSObject *)arg0 didFinishError:(NSError *)arg1;
- (void)subscribeStreamsProtocol:(NSObject *)arg0 didReceiveAuthenticationError:(char)arg1;
- (void)subscribeStorageProtocol:(NSObject *)arg0 didFinishRetrievingAsset:(NSSet *)arg1 error:(NSError *)arg2;
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(NSArray *)arg0;
- (void)reauthorizationProtocol:(NSObject *)arg0 reauthorizedAssets:(NSArray *)arg1 rejectedAssets:(NSArray *)arg2 error:(NSError *)arg3;
- (void)reauthorizationProtocol:(NSObject *)arg0 didReceiveAuthenticationError:(char)arg1;
- (long long)targetRetrievalByteCount;
- (void)setTargetRetrievalByteCount:(long long)arg0;
- (int)retrievalBatchSize;
- (void)setRetrievalBatchSize:(int)arg0;
- (void)abort;

@end
