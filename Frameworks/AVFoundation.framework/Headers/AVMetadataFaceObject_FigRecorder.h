/* Runtime dump - AVMetadataFaceObject_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataFaceObject_FigRecorder : AVMetadataObject_FigRecorder
{
    AVMetadataFaceObjectInternal_FigRecorder * _internal;
}

@property (readonly) int faceID;
@property (readonly) char hasRollAngle;
@property (readonly) float rollAngle;
@property (readonly) char hasYawAngle;
@property (readonly) float yawAngle;

+ (NSDictionary *)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(NSDictionary *)arg0 input:(NSObject *)arg1;

- (int)faceID;
- (AVMetadataFaceObject_FigRecorder *)initDerivedMetadataObjectFromMetadataObject:(NSObject *)arg0 withTransform:(struct CGAffineTransform)arg1 isVideoMirrored:(char)arg2 rollAdjustment:(float)arg3;
- (AVMetadataFaceObject_FigRecorder *)initWithFigEmbeddedCaptureDeviceFaceDictionary:(NSDictionary *)arg0 input:(NSObject *)arg1;
- (char)hasRollAngle;
- (float)rollAngle;
- (char)hasYawAngle;
- (float)yawAngle;
- (void)dealloc;
- (char)isKindOfClass:(Class)arg0;
- (NSString *)description;

@end
