/* Runtime dump - SBKStoreClampsController
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKStoreClampsController : NSObject <NSCoding>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _transactionClamps;
    NSData * _pendingUserDefaultArchivedData;
    double _accountIdentifierCheckTimestamp;
    double _authenticationNeededTimestamp;
    double _userAcceptedSyncTimestamp;
    double _networkingBlockedUntil;
    double _backOffUntil;
    double _userCancelledSignInBackOffUntil;
    double _nextUserCancelBackOffInterval;
}

@property (retain) NSObject<OS_dispatch_queue> * queue;
@property (retain) NSDictionary * transactionClamps;
@property double accountIdentifierCheckTimestamp;
@property double authenticationNeededTimestamp;
@property double userAcceptedSyncTimestamp;
@property double networkingBlockedUntil;
@property double backOffUntil;
@property double userCancelledSignInBackOffUntil;
@property double nextUserCancelBackOffInterval;
@property (retain) NSData * pendingUserDefaultArchivedData;

+ (SBKStoreClampsController *)sharedClampsController;

- (SBKStoreClampsController *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SBKStoreClampsController *)init;
- (NSString *)description;
- (void)reset;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)accessTransactionClampsWithBlock:(id /* block */)arg0;
- (NSData *)pendingUserDefaultArchivedData;
- (void)setPendingUserDefaultArchivedData:(NSData *)arg0;
- (NSDictionary *)transactionClamps;
- (char)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg0 error:(id *)arg1;
- (char)_canScheduleTransactionBasedOnBackOff:(id)arg0 error:(id *)arg1;
- (char)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg0 error:(id *)arg1;
- (char)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)arg0 error:(id *)arg1;
- (char)_canScheduleTransactionBasedOnType:(NSObject *)arg0 error:(id *)arg1;
- (void)clearAccountIdentifierCheckTimestamp;
- (void)clearAuthenticationRequest;
- (void)clearBackOff;
- (void)clearNetworkingBlocked;
- (void)clearUserAcceptedSyncTimestamp;
- (void)clearUserCancelledSignIn;
- (void)saveToUserDefaults;
- (NSObject *)_keyForTransaction:(NSObject *)arg0;
- (double)_rightNow;
- (void)setAccountIdentifierCheckTimestamp:(double)arg0;
- (void)setAuthenticationNeededTimestamp:(double)arg0;
- (double)authenticationNeededTimestamp;
- (void)setUserAcceptedSyncTimestamp:(double)arg0;
- (double)userAcceptedSyncTimestamp;
- (void)setUserCancelledSignInBackOffUntil:(double)arg0;
- (void)setBackOffUntil:(double)arg0;
- (void)setNetworkingBlockedUntil:(double)arg0;
- (double)networkingBlockedUntil;
- (void)clearTimestampForTransaction:(NSObject *)arg0;
- (char)isNetworkingBlocked;
- (double)accountIdentifierCheckTimestamp;
- (double)backOffUntil;
- (double)userCancelledSignInBackOffUntil;
- (char)canScheduleTransaction:(NSObject *)arg0 error:(id *)arg1;
- (void)setTimestampForTransaction:(NSObject *)arg0;
- (void)setAccountIdentifierCheckTimestamp;
- (void)setAuthenticationRequest;
- (char)hasAuthenticatedTooRecentlyForTransaction:(NSObject *)arg0 error:(id *)arg1;
- (void)setUserAcceptedSyncTimestamp;
- (char)hasUserRecentlyAcceptedSync;
- (void)setUserCancelledSignIn;
- (void)backOffForTimeInterval:(double)arg0;
- (void)setNetworkingBlocked;
- (void)setTransactionClamps:(NSDictionary *)arg0;
- (double)nextUserCancelBackOffInterval;
- (void)setNextUserCancelBackOffInterval:(double)arg0;

@end
