/* Runtime dump - TSDBitmapImageProvider
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDBitmapImageProvider : TSDImageProvider
{
    struct CGImageSource * mImageSource;
    struct CGImage * mImage;
    struct CGSize mNaturalSize;
    int mOrientation;
    char mIsOpaque;
    char mIsValid;
    unsigned int mDPI;
    NSObject<OS_dispatch_semaphore> * mImageLock;
    long mCheckIfValidToken;
    struct CGImage * mHalfSizeImage;
    struct CGImage * mQuarterSizeImage;
}

+ (struct CGImage *)CGImageForImageData:(NSData *)arg0;
+ (struct CGImageSource *)p_newImageSourceFromCacheForData:(NSData *)arg0 withFilenameSuffix:(NSString *)arg1;
+ (NSData *)p_cacheStringForData:(NSData *)arg0;
+ (struct CGImageSource *)p_newImageSourceFromFilePath:(NSString *)arg0;
+ (NSData *)TSUImageForImageData:(NSData *)arg0;
+ (struct CGSize)naturalSizeForImageData:(NSData *)arg0;
+ (void)clearCacheForData:(NSData *)arg0;
+ (void)initialize;

- (struct CGImage *)CGImageForNaturalSize;
- (struct CGSize)dpiAdjustedNaturalSize;
- (struct CGSize)dpiAdjustedFillSize;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg0 inContext:(struct CGContext *)arg1 orLayer:(CAReplicatorLayer *)arg2;
- (void)i_commonInit;
- (void)p_loadImageMetadata;
- (void)p_loadSourceRefIfNecessary;
- (struct CGImage *)p_newImageFromSource:(struct CGImageSource *)arg0;
- (void)p_loadFullSizedImageIfNecessary;
- (struct CGImage *)p_resampledImageOfSizeType:(int)arg0;
- (struct CGImageSource *)p_newImageOfSize:(struct CGSize)arg0 andWriteToCacheWithSuffix:(NSString *)arg1;
- (struct CGImage *)p_loadOrCreateResampledImageWithScale:(unsigned int)arg0 andCGImage:(struct CGImage * *)arg1;
- (struct CGImageSource *)p_newCGImageSourceForTemporaryUse;
- (unsigned int)imageDPI;
- (struct CGImageSource *)p_newCGImageSource;
- (void)p_configureOrientationAndSizeFromImageSource:(struct CGImageSource *)arg0 andImage:(struct CGImage *)arg1;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg0 lowQuality:(char)arg1;
- (struct CGImageSource *)CGImageSource;
- (void)dealloc;
- (void)flush;
- (int)orientation;
- (char)isValid;
- (char)isOpaque;
- (struct CGSize)naturalSize;
- (void)drawImageInContext:(struct CGContext *)arg0 rect:(struct CGRect)arg1;
- (char)hasFlushableContent;

@end
