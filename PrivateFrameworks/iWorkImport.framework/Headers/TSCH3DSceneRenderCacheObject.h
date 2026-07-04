/* Runtime dump - TSCH3DSceneRenderCacheObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneRenderCacheObject : NSObject
{
    char mCachingEnabled;
    NSMutableArray * mDynamicResources;
    NSMutableArray * mChildCacheObjects;
}

@property (nonatomic) char cachingEnabled;

+ (NSObject *)cacheObject;

- (void)allocateDynamicResourcesIntoArray:(NSArray *)arg0;
- (int)p_resourceUpdateFlag;
- (void)p_updateResourceUpdateFlags:(int)arg0;
- (NSObject *)resourceAtIndex:(unsigned int)arg0 created:(char *)arg1 ifAbsent:(id)arg2;
- (NSObject *)childCacheObjectAtIndex:(unsigned int)arg0;
- (void)dealloc;
- (TSCH3DSceneRenderCacheObject *)init;
- (NSObject *)resourceAtIndex:(unsigned int)arg0;
- (unsigned int)resourceCount;
- (void)flushCache;
- (void)setCachingEnabled:(char)arg0;
- (char)cachingEnabled;

@end
