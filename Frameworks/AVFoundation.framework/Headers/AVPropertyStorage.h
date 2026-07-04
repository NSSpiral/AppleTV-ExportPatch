/* Runtime dump - AVPropertyStorage
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPropertyStorage : NSObject
{
    NSObject<OS_dispatch_queue> * _storageAccessWorkQueue;
    NSMutableDictionary * _propertyStorage;
}

- (void)willAccessKVOForKey:(NSString *)arg0;
- (void)didAccessKVOForKey:(NSString *)arg0;
- (char)shouldUsePropertyStorageCacheForKey:(NSString *)arg0;
- (NSString *)objectForKey:(NSString *)arg0 defaultObjectBlock:(id /* block */)arg1;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (AVPropertyStorage *)init;
- (void)finalize;

@end
