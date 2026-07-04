/* Runtime dump - BRContainersMonitor
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRContainersMonitor : NSObject
{
    NSMutableDictionary * _observersByContainerID;
    NSMutableDictionary * _notifyTokenByContainerID;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (NSString *)containerIDFromPrimaryIdentifier:(NSString *)arg0 secondaryIdentifier:(NSString *)arg1;
+ (char)isContainerID:(NSObject *)arg0;
+ (NSString *)bundleIDFromPrimaryIdentifier:(NSString *)arg0 secondaryIdentifier:(NSString *)arg1;

- (void)dealloc;
- (BRContainersMonitor *)init;
- (void)addObserver:(NSObject *)arg0 forContainerID:(NSObject *)arg1;
- (void)removeObserver:(NSObject *)arg0 forContainerID:(NSObject *)arg1;
- (void)finalize;

@end
