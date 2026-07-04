/* Runtime dump - PLPhotoEditRenderer
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditRenderer : NSObject
{
    NSObject<OS_dispatch_queue> * __renderingQueue;
    CIContext * _generatingCIContext;
    CIContext * _drawingCIContext;
    EAGLContext * _lastUsedEAGLContext;
    CIFilter * _effectFilter;
    CIFilter * _smartToneFilter;
    CIFilter * _smartColorFilter;
    CIFilter * _smartBWFilter;
    CIFilter * _faceBalanceFilter;
    CIFilter * _redEyeFilter;
    CIImage * _cachedEditedImage;
    PLPhotoEditModel * _photoEditModelInCachedEditedImage;
    NSDictionary * __smartToneAdjustments;
    float _smartToneLevelInCachedAdjustments;
    NSDictionary * _smartToneStatisticsInCachedAdjustments;
    NSDictionary * __smartColorAdjustments;
    float _smartColorLevelInCachedAdjustments;
    NSDictionary * _smartColorStatisticsInCachedAdjustments;
    NSDictionary * __smartBWAdjustments;
    float _smartBWLevelInCachedAdjustments;
    NSDictionary * _smartBWStatisticsInCachedAdjustments;
    CIImage * _originalImage;
    PLPhotoEditModel * _photoEditModel;
    unsigned int _renderMode;
    int _smartFiltersCubeSize;
}

@property (retain, nonatomic) CIImage * originalImage;
@property (retain, nonatomic) PLPhotoEditModel * photoEditModel;
@property (nonatomic) unsigned int renderMode;
@property (nonatomic) int smartFiltersCubeSize;
@property (readonly, retain, nonatomic) CIImage * outputImage;
@property (readonly, nonatomic) struct CGSize outputImageSize;
@property (readonly, nonatomic) double smartToneBaseBrightness;
@property (readonly, nonatomic) double smartToneBaseContrast;
@property (readonly, nonatomic) double smartToneBaseExposure;
@property (readonly, nonatomic) double smartToneBaseHighlights;
@property (readonly, nonatomic) double smartToneBaseShadows;
@property (readonly, nonatomic) double smartToneBaseBlackPoint;
@property (readonly, nonatomic) double smartColorBaseContrast;
@property (readonly, nonatomic) double smartColorBaseVibrancy;
@property (readonly, nonatomic) double smartColorBaseCast;
@property (readonly, nonatomic) double smartBWBaseStrength;
@property (readonly, nonatomic) double smartBWBaseNeutralGamma;
@property (readonly, nonatomic) double smartBWBaseTone;
@property (readonly, nonatomic) double smartBWBaseHue;
@property (readonly, nonatomic) double smartBWBaseGrain;

+ (UIImage *)createImageDataFromCGImage:(struct CGImage *)arg0 withCompressionQuality:(float)arg1 metadataSourceImageURL:(NSURL *)arg2 preserveRegionsInMetadata:(char)arg3;
+ (NSDictionary *)_editedImagePropertiesFromOriginalImageProperties:(NSDictionary *)arg0 preserveRegions:(char)arg1;

- (void)dealloc;
- (PLPhotoEditRenderer *)init;
- (void)setOriginalImage:(CIImage *)arg0;
- (CIImage *)originalImage;
- (void)setPhotoEditModel:(PLPhotoEditModel *)arg0;
- (void)generateEditedImageDataWithCompressionQuality:(float)arg0 metadataSourceImageURL:(NSURL *)arg1 completionHandler:(id /* block */)arg2;
- (void)_invalidateCachedFilters;
- (CIImage *)outputImage;
- (NSDictionary *)_smartToneAdjustments;
- (NSDictionary *)_smartColorAdjustments;
- (NSDictionary *)_smartBWAdjustments;
- (UIImage *)_editedGeometryImageWithBaseImage:(UIImage *)arg0;
- (char)_isOrientationMirrored;
- (UIImage *)_editedImage;
- (struct CGImage *)_newCGImageFromEditedCIImage:(UIImage *)arg0;
- (NSOperationQueue *)_renderingQueue;
- (void)createEditedImageWithCompletion:(id /* block */)arg0;
- (double)_smartBWBaseValueForKey:(NSString *)arg0 defaultValue:(double)arg1;
- (struct CGImage *)newEditedImage;
- (void)drawEditedImageInContext:(NSObject *)arg0 inRect:(struct CGRect)arg1 viewportWidth:(struct CGSize)arg2 viewportHeight:(id)arg3;
- (void)setRenderMode:(unsigned int)arg0;
- (void)setSmartFiltersCubeSize:(int)arg0;
- (struct CGSize)outputImageSize;
- (double)smartToneBaseBrightness;
- (double)smartToneBaseContrast;
- (double)smartToneBaseExposure;
- (double)smartToneBaseHighlights;
- (double)smartToneBaseShadows;
- (double)smartToneBaseBlackPoint;
- (double)smartColorBaseContrast;
- (double)smartColorBaseVibrancy;
- (double)smartColorBaseCast;
- (double)smartBWBaseStrength;
- (double)smartBWBaseNeutralGamma;
- (double)smartBWBaseTone;
- (double)smartBWBaseHue;
- (double)smartBWBaseGrain;
- (PLPhotoEditModel *)photoEditModel;
- (unsigned int)renderMode;
- (int)smartFiltersCubeSize;

@end
