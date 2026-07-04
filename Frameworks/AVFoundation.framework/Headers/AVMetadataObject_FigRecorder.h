/* Runtime dump - AVMetadataObject_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataObject_FigRecorder : NSObject
{
    AVMetadataObjectInternal_FigRecorder * _objectInternal;
}

@property (readonly) struct ? time;
@property (readonly) struct ? duration;
@property (readonly) struct CGRect bounds;
@property (readonly) NSString * type;

+ (NSObject *)derivedMetadataObjectFromMetadataObject:(NSObject *)arg0 withTransform:(struct CGAffineTransform)arg1 isVideoMirrored:(char)arg2 rollAdjustment:(float)arg3;

- (NSObject *)originalMetadataObject;
- (AVMetadataObject_FigRecorder *)initDerivedMetadataObjectFromMetadataObject:(NSObject *)arg0 withTransform:(struct CGAffineTransform)arg1 isVideoMirrored:(char)arg2 rollAdjustment:(float)arg3;
- (void)dealloc;
- (struct CGRect)bounds;
- (AVMetadataObject_FigRecorder *)init;
- (struct ?)duration;
- (NSString *)type;
- (AVCaptureInput_FigRecorder *)input;
- (struct ?)time;

@end
