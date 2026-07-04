/* Runtime dump - BLPromiseImage
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLPromiseImage : BLImage
{
    struct CGImage * _sourceCGImage;
    BLImagePatchList * _imagePatchList;
    BLImagePatchList * _repairImagePatchList;
    BLPixelImageBuffer * _flattenedImageBuffer;
    int _backOrientation;
    int _initialOrientation;
    int _actualOrientation;
    struct CGSize _sourceSize;
    BLCropModel * _userCropModel;
    BLCropModel * _cropModel;
    BLAdjustmentModel * _adjustmentModel;
    BLPhotoEffectsModel * _photoEffectsModel;
    BLRetouchModel * _retouchModel;
    BLRepairModel * _repairModel;
    NSLock * _drawLock;
    NSDictionary * _adjustments;
    NSDictionary * _analysis;
}

@property (readonly, nonatomic) struct CGSize sourceSize;

+ (void)convertXMP:(id)arg0 toAdjustments:(CPLAdjustments *)arg1 andAnalysis:(id)arg2 size:(struct CGSize)arg3 image:(UIImage *)arg4 needsHistogram:(char *)arg5;
+ (struct CGSize)maximumSizeForFlattening;
+ (UIImage *)imageWithImage:(UIImage *)arg0;

- (struct CGSize)maximumSize;
- (void)dealloc;
- (struct CGImage *)CGImage;
- (CIImage *)CIImage;
- (UIImage *)UIImage;
- (BLPromiseImage *)initWithCGImage:(struct CGImage *)arg0 orImagePatchList:(NSArray *)arg1 flattenedImageBuffer:(BLPixelImageBuffer *)arg2 backOrientation:(int)arg3 orientation:(int)arg4 userCrop:(struct CGRect)arg5 adjustmentData:(struct CGSize)arg6 andAnalysisData:(NSData *)arg7 andOptionFlags:(id)arg8;
- (char)hasRedeye;
- (char)hasExposure;
- (char)hasColor;
- (char)hasPhotoEffects;
- (char)hasRetouch;
- (char)hasRepairOrRedeye;
- (char)hasInkEffects;
- (char)hasEdgeEffects;
- (char)hasFastDownstreamEffects;
- (char)hasRepair;
- (void)drawInContext:(struct CGContext *)arg0 forRect:(struct CGRect)arg1 andSize:(struct CGSize)arg2;
- (void)_drawImagePatchListInContext:(struct CGContext *)arg0 imagePatchList:(BLImagePatchList *)arg1 size:(struct CGSize)arg2 drawScaleX:(float)arg3 drawScaleY:(float)arg4 totalPadding:(float)arg5;
- (char)hasEdits;
- (struct CGSize)_targetSizeForBoundingSize:(struct CGSize)arg0 shouldScaleForScreen:(char)arg1;
- (void)prepareForDrawing;
- (char)_flattenInContext:(struct CGContext *)arg0 targetSize:(struct CGSize)arg1 progressBlock:(id /* block */)arg2;
- (NSObject *)flattenedImageInBoundingSize:(struct CGSize)arg0 shouldScaleForScreen:(char)arg1 progressBlock:(id /* block */)arg2;
- (NSObject *)flattenedImageInBoundingSize:(struct CGSize)arg0 shouldScaleForScreen:(char)arg1;
- (BLPromiseImage *)initWithCGImage:(struct CGImage *)arg0 orientation:(int)arg1 adjustmentData:(NSData *)arg2 andAnalysisData:(NSData *)arg3;
- (BLPromiseImage *)initWithCGImage:(struct CGImage *)arg0 backOrientation:(int)arg1 orientation:(int)arg2 adjustmentData:(NSData *)arg3 andAnalysisData:(NSData *)arg4 andOptionFlags:(int)arg5;
- (BLPromiseImage *)initWithPromiseImage:(UIImage *)arg0 andOptionFlags:(int)arg1;
- (BLPromiseImage *)initWithPromiseImage:(UIImage *)arg0 userCrop:(struct CGRect)arg1 andOptionFlags:(struct CGSize)arg2;
- (BLPromiseImage *)initWithImagePatchList:(BLImagePatchList *)arg0 backOrientation:(int)arg1 orientation:(int)arg2 adjustmentData:(NSData *)arg3 andAnalysisData:(NSData *)arg4 andOptionFlags:(int)arg5;
- (BLPromiseImage *)initWithCGImage:(struct CGImage *)arg0 flattenedImageBuffer:(BLPixelImageBuffer *)arg1 orientation:(int)arg2 adjustmentData:(NSData *)arg3 andAnalysisData:(NSData *)arg4 andOptionFlags:(int)arg5;
- (void)setRetouchLayerStack:(BLRetouchLayerStack *)arg0;
- (BLRetouchLayerStack *)retouchLayerStack;
- (void)setRepairLayerStack:(BLRepairLayerStack *)arg0;
- (BLRepairLayerStack *)repairLayerStack;
- (NSObject *)flattenedImageFromRect:(struct CGRect)arg0 forSize:(struct CGSize)arg1;
- (NSObject *)flattenedPixelImageBufferInBoundingSize:(struct CGSize)arg0 shouldScaleForScreen:(char)arg1;
- (struct CGSize)sourceSize;
- (BLPromiseImage *)initWithCGImage:(struct CGImage *)arg0 orientation:(int)arg1 adjustmentData:(NSData *)arg2 andAnalysisData:(NSData *)arg3 andOptionFlags:(int)arg4;
- (NSObject *)flattenedImageInBoundingSize:(struct CGSize)arg0;
- (char)hasCrop;
- (char)hasRotation;

@end
