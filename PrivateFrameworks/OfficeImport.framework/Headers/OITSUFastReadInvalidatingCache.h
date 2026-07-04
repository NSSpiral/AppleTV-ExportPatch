/* Runtime dump - OITSUFastReadInvalidatingCache
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUFastReadInvalidatingCache : NSObject
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
- (OITSUFastReadInvalidatingCache *)initForReentrant:(char)arg0 withGenerator:(KNEmptyMovieFileGenerator *)arg1;

@end
