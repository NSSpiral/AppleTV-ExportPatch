/* Runtime dump - CIFaceFeature
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceFeature : CIFeature
{
    struct CGRect bounds;
    char hasLeftEyePosition;
    struct CGPoint leftEyePosition;
    char hasRightEyePosition;
    struct CGPoint rightEyePosition;
    char hasMouthPosition;
    struct CGPoint mouthPosition;
    char hasTrackingID;
    int trackingID;
    char hasTrackingFrameCount;
    int trackingFrameCount;
    char hasFaceAngle;
    float faceAngle;
    char hasSmile;
    char leftEyeClosed;
    char rightEyeClosed;
}

@property struct CGRect bounds;
@property char hasLeftEyePosition;
@property struct CGPoint leftEyePosition;
@property char hasRightEyePosition;
@property struct CGPoint rightEyePosition;
@property char hasMouthPosition;
@property struct CGPoint mouthPosition;
@property char hasTrackingID;
@property int trackingID;
@property char hasTrackingFrameCount;
@property int trackingFrameCount;
@property char hasFaceAngle;
@property float faceAngle;
@property char hasSmile;
@property char leftEyeClosed;
@property char rightEyeClosed;

+ (CIFaceFeature *)faceFeatureWithBounds:(struct CGRect)arg0;
+ (NSArray *)faceFeaturesWithBoundsArray:(struct CGRect *)arg0 count:(struct CGRect)arg1;

- (void)setFaceAngle:(float)arg0;
- (float)faceAngle;
- (char)hasLeftEyePosition;
- (struct CGPoint)leftEyePosition;
- (char)hasRightEyePosition;
- (struct CGPoint)rightEyePosition;
- (char)hasMouthPosition;
- (struct CGPoint)mouthPosition;
- (CIFaceFeature *)initWithBounds:(struct CGRect)arg0 hasLeftEyePosition:(struct CGSize)arg1 leftEyePosition:(struct CGPoint)arg2 hasRightEyePosition:(char)arg3 rightEyePosition:(struct CGPoint)arg4 hasMouthPosition:(char)arg5 mouthPosition:(struct CGPoint)arg6 hasFaceAngle:(char)arg7 faceAngle:(struct CGPoint)arg8 hasTrackingID:(char)arg9 trackingID:(float)arg10 hasTrackingFrameCount:(char)arg11 trackingFrameCount:(int)arg12 hasSmile:(char)arg13 leftEyeClosed:(int)arg14 rightEyeClosed:(char)arg15;
- (CIFaceFeature *)initWithBounds:(struct CGRect)arg0;
- (void)setHasLeftEyePosition:(char)arg0;
- (void)setLeftEyePosition:(struct CGPoint)arg0;
- (void)setHasRightEyePosition:(char)arg0;
- (void)setRightEyePosition:(struct CGPoint)arg0;
- (void)setHasMouthPosition:(char)arg0;
- (void)setMouthPosition:(struct CGPoint)arg0;
- (char)hasTrackingID;
- (void)setHasTrackingID:(char)arg0;
- (char)hasTrackingFrameCount;
- (void)setHasTrackingFrameCount:(char)arg0;
- (int)trackingFrameCount;
- (void)setTrackingFrameCount:(int)arg0;
- (char)hasFaceAngle;
- (void)setHasFaceAngle:(char)arg0;
- (char)hasSmile;
- (void)setHasSmile:(char)arg0;
- (char)leftEyeClosed;
- (void)setLeftEyeClosed:(char)arg0;
- (char)rightEyeClosed;
- (void)setRightEyeClosed:(char)arg0;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg0;
- (NSString *)type;
- (void).cxx_construct;
- (int)trackingID;
- (void)setTrackingID:(int)arg0;

@end
