/* Runtime dump - AVMetadataFaceObject
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying>
{
    AVMetadataFaceObjectInternal * _internal;
}

@property (readonly) int faceID;
@property (readonly) char hasRollAngle;
@property (readonly) float rollAngle;
@property (readonly) char hasYawAngle;
@property (readonly) float yawAngle;

+ (NSDictionary *)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(NSDictionary *)arg0 input:(NSObject *)arg1;

- (int)faceID;
- (AVMetadataFaceObject *)initWithFaceID:(int)arg0 hasRollAngle:(char)arg1 rollAngle:(float)arg2 hasYawAngle:(char)arg3 yawAngle:(float)arg4 time:(struct ?)arg5 duration:(struct ?)arg6 bounds:(struct CGRect)arg7;
- (AVMetadataFaceObject *)initWithType:(NSString *)arg0 time:(struct ?)arg1 duration:(struct ?)arg2 bounds:(struct CGRect)arg3 originalMetadataObject:(struct CGSize)arg4 sourceCaptureInput:(NSObject *)arg5;
- (AVMetadataFaceObject *)initDerivedMetadataObjectFromMetadataObject:(NSObject *)arg0 withTransform:(struct CGAffineTransform)arg1 isVideoMirrored:(char)arg2 rollAdjustment:(float)arg3;
- (char)hasLeftEyeClosedConfidence;
- (int)leftEyeClosedConfidence;
- (char)hasRightEyeClosedConfidence;
- (int)rightEyeClosedConfidence;
- (char)hasSmileConfidence;
- (int)smileConfidence;
- (char)hasLeftEyeBounds;
- (struct CGRect)leftEyeBounds;
- (char)hasRightEyeBounds;
- (struct CGRect)rightEyeBounds;
- (AVMetadataFaceObject *)initWithFaceID:(int)arg0 hasRollAngle:(char)arg1 rollAngle:(float)arg2 hasYawAngle:(char)arg3 yawAngle:(float)arg4 time:(struct ?)arg5 duration:(struct ?)arg6 bounds:(struct CGRect)arg7 optionalInfoDict:(struct CGSize)arg8 originalMetadataObject:(NSObject *)arg9 sourceCaptureInput:(NSObject *)arg10;
- (AVMetadataFaceObject *)initWithFigEmbeddedCaptureDeviceFaceDictionary:(NSDictionary *)arg0 input:(NSObject *)arg1;
- (char)hasRollAngle;
- (float)rollAngle;
- (char)hasYawAngle;
- (float)yawAngle;
- (void)dealloc;
- (NSString *)description;
- (AVMetadataFaceObject *)copyWithZone:(struct _NSZone *)arg0;

@end
