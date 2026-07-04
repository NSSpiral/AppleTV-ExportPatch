/* Runtime dump - LSInstallProgressList
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSInstallProgressList : NSObject
{
    NSMutableDictionary * _progresses;
    NSMutableDictionary * _subscriptions;
}

- (NSObject *)progressForBundleID:(NSObject *)arg0;
- (NSObject *)subscriberForBundleID:(NSObject *)arg0 andPublishingKey:(NSString *)arg1;
- (void)setProgress:(NSProgress *)arg0 forBundleID:(NSObject *)arg1;
- (void)addSubscriber:(CTSubscriber *)arg0 forPublishingKey:(NSString *)arg1 andBundleID:(NSObject *)arg2;
- (void)removeProgressForBundleID:(NSObject *)arg0;
- (void)removeSubscriberForPublishingKey:(NSString *)arg0 andBundleID:(NSObject *)arg1;
- (void)dealloc;
- (LSInstallProgressList *)init;
- (NSString *)description;

@end
