/* Runtime dump - BKSApplicationDataStoreClientFactory
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSApplicationDataStoreClientFactory : NSObject
{
    unsigned long long _count;
    NSObject<OS_dispatch_queue> * _queue;
    BKSApplicationDataStoreRepositoryClient * _sharedClient;
}

+ (BKSApplicationDataStoreClientFactory *)sharedInstance;

- (void)dealloc;
- (BKSApplicationDataStoreClientFactory *)init;
- (void)checkin;
- (int)checkout;

@end
