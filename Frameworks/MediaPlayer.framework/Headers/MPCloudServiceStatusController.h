/* Runtime dump - MPCloudServiceStatusController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCloudServiceStatusController : NSObject <SSVPlaybackLeaseDelegate>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned int _accountStoreChangeObservationCount;
    unsigned int _automaticLeaseRefreshCount;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    unsigned int _cloudLibraryObservationCount;
    unsigned int _fairPlaySubscriptionStatusObservationCount;
    SSVFairPlaySubscriptionController * _fairPlaySubscriptionController;
    char _hasLoadedMatchStatus;
    char _hasLoadedURLBag;
    SSVSubscriptionStatus * _lastKnownSubscriptionStatus;
    unsigned int _matchStatusObservationCount;
    unsigned int _matchStatus;
    SSVPlaybackLease * _playbackLease;
    char _hasSubscriptionLease;
    unsigned int _purchaseHistoryObservationCount;
    unsigned int _shouldPlaybackRequireSubscriptionLeaseObservationCount;
    char _subscriptionAvailable;
    unsigned int _subscriptionAvailabilityObservationCount;
    unsigned int _subscriptionLeaseUsageCount;
    unsigned int _subscriptionStatusObservationCount;
    unsigned int _URLBagObservationCount;
}

@property (readonly, nonatomic) unsigned int matchStatus;
@property (readonly, nonatomic) SSVPlaybackLease * playbackLease;
@property (readonly, nonatomic) char subscriptionAvailable;
@property (readonly, copy, nonatomic) SSVSubscriptionStatus * subscriptionStatus;
@property (readonly, nonatomic) char hasSubscriptionLease;
@property (readonly, nonatomic) char hasSubscriptionSlot;
@property (readonly, nonatomic) char shouldPlaybackRequireSubscriptionLease;
@property (readonly, nonatomic) char cloudLibraryEnabled;
@property (readonly, nonatomic) char purchaseHistoryEnabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MPCloudServiceStatusController *)sharedController;

- (void)_subscriptionStatusDidChangeNotification:(NSNotification *)arg0;
- (void)beginObservingSubscriptionLease;
- (void)beginObservingSubscriptionStatus;
- (void)beginObservingShouldPlaybackRequireSubscriptionLease;
- (void)endAutomaticallyRefreshingSubscriptionLease;
- (void)endObservingShouldPlaybackRequireSubscriptionLease;
- (void)endObservingSubscriptionLease;
- (void)endObservingSubscriptionStatus;
- (void)getSubscriptionStatusWithOptions:(NSDictionary *)arg0 statusBlock:(id /* block */)arg1;
- (char)hasSubscriptionLease;
- (void)refreshSubscriptionLeaseWithCompletionHandler:(id /* block */)arg0;
- (void)acquireSubscriptionLeaseWithCompletionHandler:(id /* block */)arg0;
- (void)beginAutomaticallyRefreshingSubscriptionLease;
- (char)shouldPlaybackRequireSubscriptionLease;
- (SSVSubscriptionStatus *)subscriptionStatus;
- (void)getHasSubscriptionLease:(char *)arg0 hasSubscriptionSlot:(char *)arg1;
- (char)hasSubscriptionSlot;
- (id)_currentFairPlaySubscriptionStatus;
- (void)_setHasSubscriptionLease:(char)arg0 endReasonType:(unsigned int)arg1;
- (char)_currentCloudLibraryEnabled;
- (char)_currentPurchaseHistoryEnabled;
- (void)_beginUsingSubscriptionLease;
- (void)_endUsingSubscriptionLease;
- (void)_beginObservingAccountStoreDidChange;
- (SSVFairPlaySubscriptionController *)_fairPlaySubscriptionController;
- (void)_fairPlaySubscriptionControllerSubscriptionStatusDidChangeNotification:(NSNotification *)arg0;
- (void)_updateMatchStatus;
- (void)_networkReachabilityDidChangeNotification:(NSNotification *)arg0;
- (void)_beginObservingURLBag;
- (void)_endObservingAccountStoreDidChange;
- (void)_endObservingURLBag;
- (void)_reloadURLBag;
- (void)_accountStoreChangedNotification:(NSNotification *)arg0;
- (void)_storeFrontDidChangeNotification:(NSNotification *)arg0;
- (NSNumber *)_activeAccount;
- (void)_updateWithURLBagDictionary:(NSDictionary *)arg0;
- (void)playbackLease:(SSVPlaybackLease *)arg0 automaticRefreshDidFinishWithResponse:(NSURLResponse *)arg1 error:(NSError *)arg2;
- (void)playbackLease:(SSVPlaybackLease *)arg0 didEndWithReasonType:(unsigned int)arg1;
- (char)isCloudLibraryEnabled;
- (char)isPurchaseHistoryEnabled;
- (char)isSubscriptionAvailable;
- (unsigned int)matchStatus;
- (SSVPlaybackLease *)playbackLease;
- (void)beginObservingCloudLibraryEnabled;
- (void)beginObservingFairPlaySubscriptionStatus;
- (void)beginObservingMatchStatus;
- (void)beginObservingPurchaseHistoryEnabled;
- (void)beginObservingSubscriptionAvailability;
- (void)endObservingCloudLibraryEnabled;
- (void)endObservingFairPlaySubscriptionStatus;
- (void)endObservingMatchStatus;
- (void)endObservingPurchaseHistoryEnabled;
- (void)endObservingSubscriptionAvailability;
- (void)endSubscriptionLease;
- (void)getSubscriptionAssetWithRequest:(NSURLRequest *)arg0 completionHandler:(id /* block */)arg1;
- (void)preheatSubscriptionLeaseRequestsWithCompletionHandler:(id /* block */)arg0;
- (void)_cloudClientAuthenticationDidChange;
- (void)dealloc;
- (MPCloudServiceStatusController *)init;
- (void).cxx_destruct;

@end
