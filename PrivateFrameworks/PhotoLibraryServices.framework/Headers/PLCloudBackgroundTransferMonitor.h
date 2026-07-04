/* Runtime dump - PLCloudBackgroundTransferMonitor
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudBackgroundTransferMonitor : NSObject
{
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMutableDictionary * _pendingBGTransfers;
}

+ (PLCloudBackgroundTransferMonitor *)sharedInstance;
+ (NSObject *)identifierForResource:(NSObject *)arg0;

- (void)dealloc;
- (PLCloudBackgroundTransferMonitor *)init;
- (void)completeBackgroundTransferForResource:(NSObject *)arg0 withError:(NSError *)arg1;
- (void)abandonAllBackgroundTransfers;
- (void)onCompletedResource:(NSObject *)arg0 invokeBlock:(id /* block */)arg1;
- (void)completeBackgroundTransferWithIdentifier:(NSString *)arg0 withError:(NSError *)arg1;
- (void)abandonTransfersForItemIdentifier:(NSString *)arg0;

@end
