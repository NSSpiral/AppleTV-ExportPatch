/* Runtime dump - TSCH3DSceneRenderCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneRenderCache : NSObject
{
    NSMutableSet * mEnabledKeys;
    TSCH3DDictionaryOfDictionary * mCache;
}

+ (NSObject *)cacheFromScene:(NSObject *)arg0;
+ (NSCache *)cache;

- (char)cacheEnabledForKey:(NSString *)arg0;
- (void)setCacheObject:(NSObject *)arg0 forKey:(NSString *)arg1 cacheID:(NSString *)arg2;
- (NSString *)cacheObjectForKey:(NSString *)arg0 cacheID:(NSString *)arg1 created:(char *)arg2 ifAbsent:(id)arg3;
- (void)enableCache:(char)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (TSCH3DSceneRenderCache *)init;
- (NSString *)description;
- (TSCH3DSceneRenderCache *)copyWithZone:(struct _NSZone *)arg0;

@end
