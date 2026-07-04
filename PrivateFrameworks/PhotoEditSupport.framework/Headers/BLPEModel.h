/* Runtime dump - BLPEModel
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLPEModel : NSObject
{
    BLPixelImageBuffer * _sourceImageBuffer;
    char _sourceImageDidChange;
    char _processingFX;
    NSMutableDictionary * _TiltShiftProcessingCache;
    NSMutableDictionary * _AdaptiveGradientProcessingCache;
    NSMutableDictionary * _InkProcessingCache;
    char _liveInteraction;
    CIFilter * _vintageFilter;
    CIFilter * _photoFiltersFilter;
    CIFilter * _duotoneFilter;
    CIFilter * _auraFilter;
    CIFilter * _blackAndWhiteFilter;
    CIFilter * _dramaFilter;
    CIFilter * _warmAndCoolFilter;
}

@property (nonatomic) char liveInteraction;
@property (retain, nonatomic) CIFilter * vintageFilter;
@property (retain, nonatomic) CIFilter * photoFiltersFilter;
@property (retain, nonatomic) CIFilter * duotoneFilter;
@property (retain, nonatomic) CIFilter * auraFilter;
@property (retain, nonatomic) CIFilter * blackAndWhiteFilter;
@property (retain, nonatomic) CIFilter * dramaFilter;
@property (retain, nonatomic) CIFilter * warmAndCoolFilter;

- (void)dealloc;
- (BLPEModel *)initWithSourceImage:(UIImage *)arg0;
- (char)canRenderCIImageWithGroupIndex:(int)arg0 amount:(float)arg1 withOptionsObject:(NSObject *)arg2;
- (void)updateSourceImage:(UIImage *)arg0;
- (NSObject *)imageWithGroupIndex:(int)arg0 amount:(float)arg1 withOptionsObject:(NSObject *)arg2 analysisDictionary:(NSDictionary *)arg3 destRect:(struct CGRect)arg4 padding:(struct CGSize)arg5;
- (void)updateSourceImageBuffer:(NSObject *)arg0;
- (NSObject *)ciImageWithGroupIndex:(int)arg0 amount:(float)arg1 withOptionsObject:(NSObject *)arg2 analysisDictionary:(NSDictionary *)arg3 destRect:(struct CGRect)arg4 padding:(struct CGSize)arg5;
- (id)ciImageProcessFX_CI:(id)arg0 groupIndex:(int)arg1 amount:(float)arg2 withOptionsObject:(NSObject *)arg3 analysisDictionary:(NSDictionary *)arg4 destRect:(struct CGRect)arg5 padding:(struct CGSize)arg6;
- (void)setWarmAndCoolFilter:(CIFilter *)arg0;
- (void)setBlackAndWhiteFilter:(CIFilter *)arg0;
- (void)setDramaFilter:(CIFilter *)arg0;
- (void)setDuotoneFilter:(CIFilter *)arg0;
- (void)setVintageFilter:(CIFilter *)arg0;
- (void)setPhotoFiltersFilter:(CIFilter *)arg0;
- (void)setAuraFilter:(CIFilter *)arg0;
- (void)releaseCachedFilters;
- (char)needTiltShiftProcessingCacheForGroupIndex:(int)arg0 andAmount:(float)arg1;
- (char)needAdaptiveGradientProcessingCacheForGroupIndex:(int)arg0 andAmount:(float)arg1;
- (char)needInkProcessingCacheForGroupIndex:(int)arg0 andAmount:(float)arg1;
- (id)processFX_CI:(id)arg0 groupIndex:(int)arg1 amount:(float)arg2 withOptionsObject:(NSObject *)arg3 analysisDictionary:(NSDictionary *)arg4 destRect:(struct CGRect)arg5 padding:(struct CGSize)arg6;
- (UIImage *)imageWithAdaptiveGradientV1:(id)arg0 cache:(NSObject *)arg1 groupIndex:(int)arg2 withCenter:(struct CGPoint)arg3 withSize:(float)arg4 withAngle:(float)arg5 gradientRect:(struct CGRect)arg6 liveInteraction:(struct CGSize)arg7;
- (UIImage *)imageWithAdaptiveGradientV2:(id)arg0 cache:(NSObject *)arg1 groupIndex:(int)arg2 withCenter:(struct CGPoint)arg3 withSize:(float)arg4 withAngle:(float)arg5 gradientRect:(struct CGRect)arg6 liveInteraction:(struct CGSize)arg7;
- (id)processFX_NonCI:(id)arg0 tiltShiftCache:(NSObject *)arg1 groupIndex:(int)arg2 amount:(float)arg3 withOptionsObject:(NSObject *)arg4 analysisDictionary:(NSDictionary *)arg5 destRect:(struct CGRect)arg6 padding:(struct CGSize)arg7;
- (UIImage *)imageWithInk:(id)arg0 cache:(NSObject *)arg1 groupIndex:(int)arg2 withOptionsObject:(NSObject *)arg3 gradientRect:(struct CGRect)arg4 padding:(struct CGSize)arg5 liveInteraction:(char)arg6;
- (id)ciImageWithInk:(id)arg0 cache:(NSObject *)arg1 groupIndex:(int)arg2 withOptionsObject:(NSObject *)arg3 gradientRect:(struct CGRect)arg4 padding:(struct CGSize)arg5 liveInteraction:(char)arg6;
- (CIFilter *)vintageFilter;
- (CIFilter *)photoFiltersFilter;
- (CIFilter *)duotoneFilter;
- (CIFilter *)auraFilter;
- (CIFilter *)blackAndWhiteFilter;
- (CIFilter *)dramaFilter;
- (CIFilter *)warmAndCoolFilter;
- (BLPEModel *)initWithSourceImageBuffer:(BLPixelImageBuffer *)arg0;
- (NSObject *)thumbImageWithGroupIndex:(int)arg0 amount:(float)arg1 version:(int)arg2;
- (char)liveInteraction;
- (void)setLiveInteraction:(char)arg0;

@end
