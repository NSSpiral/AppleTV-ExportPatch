/* Runtime dump - AVMetadataFaceObjectInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataFaceObjectInternal : NSObject
{
    int _faceID;
    char _hasRollAngle;
    float _rollAngle;
    char _hasYawAngle;
    float _yawAngle;
    char _hasLeftEyeClosedConfidence;
    int _leftEyeClosedConfidence;
    char _hasRightEyeClosedConfidence;
    int _rightEyeClosedConfidence;
    char _hasSmileConfidence;
    int _smileConfidence;
    char _hasLeftEyeBounds;
    struct CGRect _leftEyeBounds;
    char _hasRightEyeBounds;
    struct CGRect _rightEyeBounds;
}

@property (nonatomic) int faceID;
@property (nonatomic) char hasRollAngle;
@property (nonatomic) float rollAngle;
@property (nonatomic) char hasYawAngle;
@property (nonatomic) float yawAngle;
@property (nonatomic) char hasLeftEyeClosedConfidence;
@property (nonatomic) int leftEyeClosedConfidence;
@property (nonatomic) char hasRightEyeClosedConfidence;
@property (nonatomic) int rightEyeClosedConfidence;
@property (nonatomic) char hasSmileConfidence;
@property (nonatomic) int smileConfidence;
@property (nonatomic) char hasLeftEyeBounds;
@property (nonatomic) struct CGRect leftEyeBounds;
@property (nonatomic) char hasRightEyeBounds;
@property (nonatomic) struct CGRect rightEyeBounds;

- (int)faceID;
- (void)setFaceID:(int)arg0;
- (char)hasLeftEyeClosedConfidence;
- (void)setHasLeftEyeClosedConfidence:(char)arg0;
- (int)leftEyeClosedConfidence;
- (void)setLeftEyeClosedConfidence:(int)arg0;
- (char)hasRightEyeClosedConfidence;
- (void)setHasRightEyeClosedConfidence:(char)arg0;
- (int)rightEyeClosedConfidence;
- (void)setRightEyeClosedConfidence:(int)arg0;
- (char)hasSmileConfidence;
- (void)setHasSmileConfidence:(char)arg0;
- (int)smileConfidence;
- (void)setSmileConfidence:(int)arg0;
- (char)hasLeftEyeBounds;
- (void)setHasLeftEyeBounds:(char)arg0;
- (struct CGRect)leftEyeBounds;
- (void)setLeftEyeBounds:(struct CGRect)arg0;
- (char)hasRightEyeBounds;
- (void)setHasRightEyeBounds:(char)arg0;
- (struct CGRect)rightEyeBounds;
- (void)setRightEyeBounds:(struct CGRect)arg0;
- (char)hasRollAngle;
- (float)rollAngle;
- (char)hasYawAngle;
- (float)yawAngle;
- (void)setHasRollAngle:(char)arg0;
- (void)setRollAngle:(float)arg0;
- (void)setHasYawAngle:(char)arg0;
- (void)setYawAngle:(float)arg0;

@end
