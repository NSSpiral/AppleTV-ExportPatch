/* Runtime dump - WebCache
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebCache : NSObject

+ (struct CGImage *)imageForURL:(NSURL *)arg0;
+ (void)removeImageFromCacheForURL:(NSURL *)arg0;
+ (void)initialize;
+ (void)setDisabled:(char)arg0;
+ (NSArray *)statistics;
+ (char)isDisabled;
+ (BOOL)addImageToCache:(struct CGImage *)arg0 forURL:(NSURL *)arg1 forFrame:(NSObject *)arg2;
+ (void)removeImageFromCacheForURL:(NSURL *)arg0 forFrame:(NSObject *)arg1;
+ (void)empty;
+ (void)emptyInMemoryResources;
+ (void)sizeOfDeadResources:(int *)arg0;
+ (BOOL)addImageToCache:(struct CGImage *)arg0 forURL:(NSURL *)arg1;
+ (void)clearCachedCredentials;

@end
