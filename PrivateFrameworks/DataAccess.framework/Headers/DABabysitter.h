/* Runtime dump - DABabysitter
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DABabysitter : NSObject
{
    NSString * _buildVersion;
    NSMutableDictionary * _refreshingWaiters;
    NSMutableDictionary * _failedWaiters;
    NSMutableDictionary * _restrictedWaiters;
}

@property (retain, nonatomic) NSString * buildVersion;
@property (retain, nonatomic) NSMutableDictionary * refreshingWaiters;
@property (retain, nonatomic) NSMutableDictionary * failedWaiters;
@property (retain, nonatomic) NSMutableDictionary * restrictedWaiters;

+ (DABabysitter *)sharedBabysitter;

- (void)setBuildVersion:(NSString *)arg0;
- (void)dealloc;
- (DABabysitter *)init;
- (DABabysitter *)_init;
- (NSString *)buildVersion;
- (void).cxx_destruct;
- (void)giveAccountWithIDAnotherChance:(id)arg0;
- (char)accountWithIDShouldContinue:(id)arg0;
- (void)_reloadBabysitterProperties;
- (void)_decrementRefreshCountForWaiter:(id)arg0 forOperationWithName:(NSString *)arg1;
- (char)accountShouldContinue:(id)arg0;
- (void)_incrementRefreshCountForWaiterID:(NSObject *)arg0 operationName:(NSString *)arg1;
- (void)_decrementRefreshCountForWaiterID:(NSObject *)arg0 operationName:(NSString *)arg1;
- (char)registerAccount:(NSObject *)arg0 forOperationWithName:(NSString *)arg1;
- (void)unregisterAccount:(NSObject *)arg0 forOperationWithName:(NSString *)arg1;
- (NSMutableDictionary *)refreshingWaiters;
- (void)setRefreshingWaiters:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)failedWaiters;
- (void)setFailedWaiters:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)restrictedWaiters;
- (void)setRestrictedWaiters:(NSMutableDictionary *)arg0;

@end
