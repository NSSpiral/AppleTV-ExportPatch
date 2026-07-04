/* Runtime dump - SBKStoreError
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKStoreError : NSError
{
    SBKTransaction * _transaction;
}

@property (retain) SBKTransaction * transaction;
@property (readonly) char isAuthenticationError;
@property (readonly) char isAccountsChangedError;
@property (readonly) char isRecoverableError;
@property (readonly) char isClampError;
@property (readonly) char isTransactionCancelledError;
@property (readonly) char isTransactionMissingInformationError;
@property (readonly, copy) NSString * previousStoreAccountName;
@property (readonly, copy) NSString * currentStoreAccountName;
@property (readonly) double retrySeconds;

+ (NSObject *)userClampErrorWithTransaction:(SBKTransaction *)arg0 retrySeconds:(double)arg1 underlyingError:(NSError *)arg2;
+ (NSObject *)serverClampErrorWithTransaction:(SBKTransaction *)arg0 retrySeconds:(double)arg1 underlyingError:(NSError *)arg2;
+ (NSObject *)networkingBlockedErrorWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;
+ (NSObject *)keyValueStoreDisabledErrorWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;
+ (NSObject *)noStoreAccountErrorWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;
+ (NSObject *)transactionCancelledErrorWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;
+ (NSObject *)transactionCancelledErrorWithTransaction:(SBKTransaction *)arg0 code:(int)arg1 underlyingError:(NSError *)arg2;
+ (NSObject *)storeGenericErrorWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;
+ (NSObject *)killSwitchErrorWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;
+ (NSObject *)storeValidationErrorWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;
+ (NSObject *)storeAccountSessionExpiredWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;
+ (NSObject *)unknownErrorWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;
+ (NSObject *)delegateCancelledErrorWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;
+ (NSObject *)userCancelledSignInErrorWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;
+ (NSObject *)userEnteredWrongCredentialsErrorWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;
+ (SBKStoreError *)keyValueStoreErrorWithCode:(int)arg0 localizedDescription:(NSString *)arg1 transaction:(SBKTransaction *)arg2 underlyingError:(NSError *)arg3;
+ (NSString *)storeLoggedOutErrorWithPreviousStoreAccountName:(NSString *)arg0 transaction:(SBKTransaction *)arg1 underlyingError:(NSError *)arg2;
+ (NSString *)storeAccountMismatchErrorWithPreviousStoreAccountName:(NSString *)arg0 currentStoreAccountName:(NSString *)arg1 transaction:(SBKTransaction *)arg2 underlyingError:(NSError *)arg3;
+ (NSObject *)transactionMissingDomainErrorWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;
+ (NSObject *)transactionMissingURLErrorWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;
+ (NSObject *)transactionTimeoutErrorWithTransaction:(SBKTransaction *)arg0 underlyingError:(NSError *)arg1;

- (void)setTransaction:(SBKTransaction *)arg0;
- (NSString *)description;
- (SBKStoreError *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (SBKTransaction *)transaction;
- (char)isClampError;
- (double)retrySeconds;
- (char)isAuthenticationError;
- (char)isTransactionCancelledError;
- (char)isAccountsChangedError;
- (char)isRecoverableError;
- (char)isTransactionMissingInformationError;
- (NSString *)previousStoreAccountName;
- (NSString *)currentStoreAccountName;

@end
