/* Runtime dump - AVAssetCache
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetCache : NSObject
{
    AVAssetCacheInternal * _priv;
}

@property (nonatomic) long long maxSize;
@property (nonatomic) long long maxEntrySize;
@property (readonly, nonatomic) long long currentSize;
@property (readonly, copy, nonatomic) NSURL * URL;

+ (AVAssetCache *)assetCacheWithURL:(NSString *)arg0;

- (long long)maxEntrySize;
- (long long)currentSize;
- (void)removeEntryForKey:(NSString *)arg0;
- (long long)sizeOfEntryForKey:(NSString *)arg0;
- (NSString *)lastModifiedDateOfEntryForKey:(NSString *)arg0;
- (NSArray *)allKeys;
- (void)dealloc;
- (long long)maxSize;
- (void)setMaxSize:(long long)arg0;
- (AVAssetCache *)initWithURL:(NSString *)arg0;
- (NSURL *)URL;
- (void)setMaxEntrySize:(long long)arg0;
- (void)finalize;

@end
