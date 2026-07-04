/* Runtime dump - TSUFastReadInvalidatingCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFastReadInvalidatingCache : NSObject
{
    id mGenerator;
    id mValue;
    long long mReaderCount;
    NSArray * mToDispose;
    char mReentrant;
    NSCondition * mCondition;
    char mIsGenerating;
}

- (void)dealloc;
- (void)invalidate;
- (void *)value;
- (void)p_setValue:(TSDBitmapRenderingQualityImageMapValue *)arg0;
- (TSUFastReadInvalidatingCache *)initForReentrant:(char)arg0 withGenerator:(KNEmptyMovieFileGenerator *)arg1;

@end
