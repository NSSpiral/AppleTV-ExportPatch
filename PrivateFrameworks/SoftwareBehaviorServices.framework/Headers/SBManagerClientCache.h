/* Runtime dump - SBManagerClientCache
 * Image: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/SoftwareBehaviorServices
 */

@interface SBManagerClientCache : NSObject
{
    char _behaviorBundleSupport;
    char _behaviorBundleSupportKnown;
    NSMutableDictionary * _keyValueCache;
    NSLock * _cacheLock;
    struct dispatch_queue_s * _queue;
    struct /* ? */ fCallbacks;
}

@property char behaviorBundleSupport;
@property char behaviorBundleSupportKnown;
@property NSMutableDictionary * keyValueCache;
@property NSLock * cacheLock;
@property struct dispatch_queue_s * queue;

+ (SBManagerClientCache *)sharedInstance;

- (SBManagerClientCache *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct dispatch_queue_s *)queue;
- (void)setQueue:(struct dispatch_queue_s *)arg0;
- (void)setCacheLock:(NSLock *)arg0;
- (void)saveBehaviorBundleSupport:(char)arg0 withValue:(char)arg1;
- (void)setKeyValueCache:(NSMutableDictionary *)arg0;
- (NSLock *)cacheLock;
- (NSMutableDictionary *)keyValueCache;
- (void)setBehaviorBundleSupportKnown:(char)arg0;
- (void)setBehaviorBundleSupport:(char)arg0;
- (void)resetKeyValueCache;
- (id)copyCachedValueFor:(id)arg0;
- (void)cacheValue:(TSWPFontCacheValue *)arg0 forKey:(NSString *)arg1;
- (void)registerCallbackForEvent:(NSObject *)arg0 with:(struct EventCallbackData *)arg1;
- (BOOL)deregisterCallbackForEvent:(struct EventCallbackData *)arg0;
- (void)callCallbacksForEvent:(NSObject *)arg0;
- (char)behaviorBundleSupport;
- (char)behaviorBundleSupportKnown;

@end
