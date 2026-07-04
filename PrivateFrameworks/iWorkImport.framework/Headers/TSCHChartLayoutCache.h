/* Runtime dump - TSCHChartLayoutCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartLayoutCache : NSObject
{
    NSMutableArray * mCacheItems;
    char mIgnoreInvalidation;
}

@property (nonatomic) char ignoreInvalidation;

+ (NSObject *)cacheWithCacheItem:(NSObject *)arg0;

- (void)accessWithCacheItemBlock:(id /* block */)arg0 calculateBlock:(/* block */ id)arg1;
- (void)printDebug;
- (TSCHChartLayoutCache *)initWithCacheItem:(NSObject *)arg0;
- (char)ignoreInvalidation;
- (void)setIgnoreInvalidation:(char)arg0;
- (void)dealloc;
- (TSCHChartLayoutCache *)init;
- (void)invalidate;

@end
