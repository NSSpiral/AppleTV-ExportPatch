/* Runtime dump - PLCropModel
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCropModel : NSObject
{
    struct CGRect _cropRect;
    float _cropConstrain;
    float _angle;
    struct CGSize _photoSize;
    struct CGSize _nsqPhotoSize;
}

@property (readonly) struct CGSize size;
@property float angle;
@property struct CGRect cropRect;
@property float cropConstrain;

- (struct CGSize)size;
- (void)reset;
- (PLCropModel *)initWithSize:(struct CGSize)arg0;
- (void)setAngle:(float)arg0;
- (float)angle;
- (void)setCropRect:(struct CGRect)arg0;
- (struct CGRect)cropRect;
- (int)touchedImageSidesForCurrentCrop;
- (double)maxAllowedTranslateWithDirection:(double)arg0;
- (void)translate:(float)arg0 atAngle:(float)arg1;
- (double)maxAllowedScaleFromPoint:(struct CGPoint)arg0 scaleUp:(char)arg1;
- (void)scale:(float)arg0 fromPoint:(struct CGPoint)arg1;
- (float)maxAllowedRotationFromPoint:(struct CGPoint)arg0 counterClockwise:(char)arg1;
- (void)rotate:(float)arg0 fromPoint:(struct CGPoint)arg1;
- (struct CGPoint)maxAllowableEdgeAdjustmentForDragAction:(int)arg0 withDirection:(struct CGPoint)arg1;
- (void)adjustEdgeForDragAction:(int)arg0 withAmount:(struct CGPoint)arg1;
- (struct CGPoint)scalePointForCropAction:(int)arg0;
- (void)changeCropAspectRatioTo:(float)arg0;
- (float)cropConstrain;
- (void)calculateCornerPoints:(struct CGPoint *)arg0;
- (struct CGRect)recomputeCropRect:(NSObject *)arg0 forStraightenAngle:(SEL)arg1;
- (struct CGImage *)newRenderedCroppedImageFromImage:(struct CGImage *)arg0 forSize:(struct CGSize)arg1;
- (struct CGImage *)newAspectedPreviewFromImage:(struct CGImage *)arg0 forSize:(struct CGSize)arg1 andRatio:(float)arg2;
- (void)drawAspectedPreviewFromImage:(struct CGImage *)arg0 inContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 withRatio:(struct CGSize)arg3;
- (void)setCropConstrain:(float)arg0;

@end
