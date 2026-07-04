/* Runtime dump - AVMetadataFaceObjectInternal_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataFaceObjectInternal_FigRecorder : NSObject
{
    char hasRollAngle;
    char hasYawAngle;
    int faceID;
    float rollAngle;
    float yawAngle;
}

@property int faceID;
@property char hasRollAngle;
@property float rollAngle;
@property char hasYawAngle;
@property float yawAngle;

- (int)faceID;
- (void)setFaceID:(int)arg0;
- (char)hasRollAngle;
- (float)rollAngle;
- (char)hasYawAngle;
- (float)yawAngle;
- (void)setHasRollAngle:(char)arg0;
- (void)setRollAngle:(float)arg0;
- (void)setHasYawAngle:(char)arg0;
- (void)setYawAngle:(float)arg0;

@end
