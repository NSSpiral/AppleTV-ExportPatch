/* Runtime dump - BLCropModel
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLCropModel : NSObject
{
    struct CGSize _nsqPhotoSize;
    float _angle;
    float _cropConstrain;
    struct CGSize _photoSize;
    struct CGRect _cropRect;
}

@property (readonly) struct CGSize photoSize;
@property float angle;
@property struct CGRect cropRect;
@property float cropConstrain;

+ (char)validateCropRectFor0Angle:(struct CGRect)arg0;

- (void)reset;
- (BLCropModel *)initWithSize:(struct CGSize)arg0;
- (void)setAngle:(float)arg0;
- (float)angle;
- (BLCropModel *)initWithModel:(NSObject *)arg0;
- (BLCropModel *)initWithSize:(struct CGSize)arg0 andDictionary:(NSDictionary *)arg1;
- (struct CGSize)croppedSize;
- (struct CGAffineTransform)CGAffineTransform;
- (struct CGSize)croppedSizeForSize:(struct CGSize)arg0;
- (struct CGAffineTransform)CGAffineTransformForSize:(struct CGSize)arg0;
- (void)setCropAndAngleFromCIAffineTransform:(struct CGAffineTransform)arg0 andCICrop:(struct CGRect)arg1 forSourceSize:(struct CGSize)arg2;
- (void)calculateCornerPoints:(struct CGPoint *)arg0 forCropRect:(struct CGRect)arg1;
- (struct CGImage *)newRenderedCroppedImageFromImage:(struct CGImage *)arg0 forSize:(struct CGSize)arg1 andOrientation:(int)arg2;
- (struct CGRect)maxAllowedPanWithCropRect:(struct CGRect)arg0;
- (struct CGRect)bestCropRectForIntialCropRect:(NSObject *)arg0 inTrialRect:(SEL)arg1 withFaceDictionaries:(struct CGRect)arg2;
- (struct CGAffineTransform)ciAffineTransformForSourceSize:(struct CGSize)arg0;
- (struct CGRect)ciCropRectForSourceSize:(NSObject *)arg0;
- (struct CGAffineTransform)transformForTrialCropRect:(struct CGRect)arg0;
- (int)scoreFaces:(id)arg0 ForTransform:(struct CGAffineTransform)arg1;
- (struct CGPoint)maxAllowableEdgeAdjustmentForDragAction:(int)arg0 withDirection:(struct CGPoint)arg1 andLockAspectRatio:(char)arg2;
- (void)adjustEdgeForDragAction:(int)arg0 withAmount:(struct CGPoint)arg1 andLockAspectRatio:(char)arg2;
- (void)changeCropAspectRatioTo:(float)arg0 withNewCropRect:(struct CGRect)arg1;
- (struct CGRect)normalizedIntersectionPointsForCropWithLineFromPoint:(NSObject *)arg0 toPoint:(SEL)arg1;
- (struct CGRect)newCropRectForRatio:(id)arg0 withCropRect:(SEL)arg1 andFaceDictionaries:(float)arg2;
- (struct CGImage *)newAspectedPreviewFromImage:(struct CGImage *)arg0 forSize:(struct CGSize)arg1 withNewCropRect:(struct CGRect)arg2 andOrientation:(struct CGSize)arg3;
- (UIImage *)croppedImageFromImage:(UIImage *)arg0;
- (struct CGSize)photoSize;
- (void)setCropRect:(struct CGRect)arg0;
- (struct CGRect)cropRect;
- (int)touchedImageSidesForCurrentCrop;
- (float)maxAllowedTranslateWithDirection:(float)arg0;
- (void)translate:(float)arg0 atAngle:(float)arg1;
- (float)maxAllowedScaleFromPoint:(struct CGPoint)arg0 scaleUp:(char)arg1;
- (void)scale:(float)arg0 fromPoint:(struct CGPoint)arg1;
- (float)maxAllowedRotationFromPoint:(struct CGPoint)arg0 counterClockwise:(char)arg1;
- (void)rotate:(float)arg0 fromPoint:(struct CGPoint)arg1;
- (float)cropConstrain;
- (void)calculateCornerPoints:(struct CGPoint *)arg0;
- (struct CGRect)recomputeCropRect:(NSObject *)arg0 forStraightenAngle:(SEL)arg1;
- (struct CGImage *)newRenderedCroppedImageFromImage:(struct CGImage *)arg0 forSize:(struct CGSize)arg1;
- (void)setCropConstrain:(float)arg0;
- (char)hasCrop;

@end
