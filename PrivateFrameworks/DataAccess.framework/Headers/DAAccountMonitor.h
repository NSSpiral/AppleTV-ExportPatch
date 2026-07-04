/* Runtime dump - DAAccountMonitor
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAAccountMonitor : NSObject
{
    NSHashTable * _accounts;
    NSObject<OS_dispatch_queue> * _accountsQueue;
}

@property (retain, nonatomic) NSHashTable * accounts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * accountsQueue;

+ (DAAccountMonitor *)sharedMonitor;

- (DAAccountMonitor *)init;
- (void).cxx_destruct;
- (void)unmonitorAccount:(NSObject *)arg0;
- (void)monitorAccount:(NSObject *)arg0;
- (void)setAccountsQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_queue> *)accountsQueue;
- (id)monitoredAccounts;
- (NSHashTable *)accounts;
- (void)setAccounts:(NSHashTable *)arg0;

@end
