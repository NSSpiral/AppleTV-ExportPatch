/* Runtime dump - TSCHPointArrayCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPointArrayCache : NSObject
{
    TSCHChartSeries * mSeries;
    struct CGRect mAreaFrame;
    unsigned int mStart;
    unsigned int mEnd;
    char mCull;
    NSData * mData;
}

+ (TSCHPointArrayCache *)p_getCacheCreate:(char)arg0;
+ (struct ? *)cachedPointsForSeries:(unsigned int)arg0 inAreaFrame:(NSObject *)arg1 valueStart:(id)arg2 valueEnd:(SEL)arg3 cullBadPoints:(id)arg4 outCount:(struct CGRect)arg5;
+ (void)setCachedPointsForSeries:(id)arg0 inAreaFrame:(struct CGRect)arg1 valueStart:(struct CGSize)arg2 valueEnd:(id)arg3 cullBadPoints:(unsigned int)arg4 points:(unsigned int)arg5 count:(char)arg6;
+ (void)clearCache;

- (char)matchesSeries:(id)arg0 areaFrame:(struct CGRect)arg1 start:(struct CGSize)arg2 end:(id)arg3 cull:(unsigned int)arg4;
- (void)dealloc;
- (void).cxx_construct;

@end
