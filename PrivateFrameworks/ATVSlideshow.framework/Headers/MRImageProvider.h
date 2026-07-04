/* Runtime dump - MRImageProvider
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRImageProvider : NSObject <MRLoadable, MRRenderable>
{
    NSString * mAssetPath;
    MRAsset * mAsset;
    struct CGSize mDefaultSize;
    NSString * mImageSizeScript;
    NSDictionary * mEffectAttributes;
    NSInvocationOperation * mPreloadOperation;
    NSLock * mPreloadOperationLock;
    MRImage * mOriginalImage;
    struct CGSize mOriginalImageSize;
    char mIsLoaded;
    struct CGSize mRequestedSize;
    double mShowTime;
    double mShowDuration;
    struct CGSize mLastImageSize;
    double mLastTime;
    struct CGSize mLastDaSize;
    char mNeedsToUpdate;
    char mIsUpdatingLive;
    char mNeedsToUnloadOnEndLiveUpdate;
    char mIsMonochromatic;
    char mUseMipmapping;
    char mUsePowerOfTwo;
    char mIsCleanedUp;
    char mJustHoldIt;
}

@property (nonatomic) struct CGSize defaultSize;
@property (copy, nonatomic) NSString * imageSizeScript;
@property (retain, nonatomic) NSDictionary * effectAttributes;
@property (copy, nonatomic) NSString * assetPath;
@property (nonatomic) struct CGSize originalImageSize;
@property (nonatomic) double showTime;
@property (nonatomic) double showDuration;
@property (nonatomic) char isMonochromatic;
@property (nonatomic) char useMipmapping;
@property (nonatomic) char usePowerOfTwo;
@property (readonly, nonatomic) struct CGSize requestedSize;
@property (readonly, nonatomic) float imageAspectRatio;
@property (readonly, nonatomic) char isLoaded;
@property (nonatomic) char justHoldIt;
@property (readonly, nonatomic) char isNative3D;
@property (readonly, nonatomic) char isOpaque;
@property (readonly, nonatomic) char isAlphaFriendly;
@property (readonly, nonatomic) char isInfinite;

- (struct CGSize)originalImageSize;
- (void)setOriginalImageSize:(struct CGSize)arg0;
- (void)dealloc;
- (struct CGSize)defaultSize;
- (MRImageProvider *)init;
- (char)isOpaque;
- (void)setShowDuration:(double)arg0;
- (char)isLoaded;
- (void)cleanup;
- (NSDictionary *)effectAttributes;
- (void)setEffectAttributes:(NSDictionary *)arg0;
- (double)showTime;
- (double)showDuration;
- (char)isLoadedForTime:(double)arg0;
- (void)loadWithArguments:(NSDictionary *)arg0;
- (void)loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2 now:(char)arg3;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (id)retainedByUserRenderedImageAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (id)patchworkAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)isNative3D;
- (char)isAlphaFriendly;
- (char)isInfinite;
- (void)setAssetPath:(NSString *)arg0;
- (void)setImageSizeScript:(NSString *)arg0;
- (void)setUsePowerOfTwo:(char)arg0;
- (void)setDefaultSize:(struct CGSize)arg0;
- (NSString *)assetPath;
- (void)setUseMipmapping:(char)arg0;
- (void)setShowTime:(double)arg0;
- (float)imageAspectRatio;
- (void)setJustHoldIt:(char)arg0;
- (NSString *)imageSizeScript;
- (char)beginLiveUpdate;
- (char)endLiveUpdate;
- (void)setIsMonochromatic:(char)arg0;
- (char)isMonochromatic;
- (void)_loadTextureWithArguments:(NSDictionary *)arg0;
- (void)loadTextureWithArguments:(NSDictionary *)arg0;
- (struct CGSize)imageSizeForAspectRatio:(float)arg0;
- (char)useMipmapping;
- (char)usePowerOfTwo;
- (struct CGSize)requestedSize;
- (char)justHoldIt;
- (void)unload;
- (void)finalize;
- (void)cancelLoading;

@end
