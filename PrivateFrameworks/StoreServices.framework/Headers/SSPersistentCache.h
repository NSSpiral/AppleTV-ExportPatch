/* Runtime dump - SSPersistentCache
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPersistentCache : NSObject
{
    char _safeKeys;
    NSString * _identifier;
    NSString * _cacheName;
    NSString * _path;
    NSFileManager * _fm;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (NSString *)safeKeyForKey:(NSString *)arg0;

- (void)dealloc;
- (NSString *)description;
- (char)clear;
- (char)setData:(NSData *)arg0 forKey:(NSString *)arg1;
- (NSString *)dataForKey:(NSString *)arg0;
- (SSPersistentCache *)initWithIdentifier:(NSString *)arg0 cacheName:(NSString *)arg1;
- (char)removeDataForKey:(NSString *)arg0;
- (NSString *)_pathForKey:(NSString *)arg0;
- (char)_isFileNotFound:(id)arg0;
- (void)setFilenameSafeKeys:(char)arg0;

@end
