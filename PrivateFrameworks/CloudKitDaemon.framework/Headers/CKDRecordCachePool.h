/* Runtime dump - CKDRecordCachePool
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordCachePool : NSObject
{
    NSMutableDictionary * _pools;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _expiryTimer;
}

@property (retain, nonatomic) NSMutableDictionary * pools;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * expiryTimer;

+ (CKDRecordCachePool *)sharedPool;

- (CKDRecordCachePool *)init;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSString *)acquireCacheWithContext:(NSObject *)arg0 scope:(int)arg1;
- (void)releaseCache:(NSObject *)arg0;
- (NSMutableDictionary *)pools;
- (NSString *)_poolForContext:(NSObject *)arg0;
- (void)clearAllCachesForContext:(NSObject *)arg0;
- (void)setPools:(NSMutableDictionary *)arg0;
- (NSObject<OS_dispatch_source> *)expiryTimer;
- (void)setExpiryTimer:(NSObject<OS_dispatch_source> *)arg0;

@end
