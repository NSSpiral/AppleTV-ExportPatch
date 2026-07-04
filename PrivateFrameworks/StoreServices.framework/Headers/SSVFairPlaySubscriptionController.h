/* Runtime dump - SSVFairPlaySubscriptionController
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVFairPlaySubscriptionController : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    char _hasValidSubscriptionStatusDidChangeNotifyToken;
    int _subscriptionStatusDidChangeNotifyToken;
}

- (NSString *)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)arg0;
- (void)dealloc;
- (SSVFairPlaySubscriptionController *)init;
- (void).cxx_destruct;
- (char)stopSubscriptionLease:(id *)arg0;
- (void)importSubscriptionKeyBagData:(NSData *)arg0 leaseInfoData:(NSData *)arg1 returningError:(id *)arg2;
- (void)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)arg0 transactionType:(unsigned int)arg1 certificateData:(NSData *)arg2 assetIDData:(NSData *)arg3 returningLeaseData:(id *)arg4 subscriptionBagData:(id *)arg5 error:(id *)arg6;
- (NSDictionary *)_subscriptionStatusForFPSubscriptionInfo:(struct FPSubscriptionInfo_)arg0;
- (void)_enumerateSubscriptionInfoUsingBlock:(id /* block */)arg0;
- (NSArray *)_accountUniqueIdentifierToSubscriptionStatusWithFPSubscriptionInfoList:(struct FPSubscriptionInfo_ *)arg0 subscriptionInfoListLength:(unsigned long)arg1;
- (void)_notifySubscriptionStatusDidChange;
- (void)enumerateAccountSubscriptionStatusUsingBlock:(id /* block */)arg0;
- (void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)arg0 transactionType:(unsigned int)arg1 machineIDData:(NSData *)arg2 returningSubscriptionBagData:(id *)arg3 error:(id *)arg4;
- (void)importSubscriptionKeyBagData:(NSData *)arg0 returningError:(id *)arg1;

@end
