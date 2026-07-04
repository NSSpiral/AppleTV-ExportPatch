/* Runtime dump - AVMetadataObject
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataObject : NSObject
{
    AVMetadataObjectInternal * _objectInternal;
}

@property (readonly) struct ? time;
@property (readonly) struct ? duration;
@property (readonly) struct CGRect bounds;
@property (readonly) NSString * type;

+ (NSObject *)derivedMetadataObjectFromMetadataObject:(NSObject *)arg0 withTransform:(struct CGAffineTransform)arg1 isVideoMirrored:(char)arg2 rollAdjustment:(float)arg3;

- (NSObject *)originalMetadataObject;
- (AVMetadataObject *)initWithType:(NSString *)arg0 time:(struct ?)arg1 duration:(struct ?)arg2 bounds:(struct CGRect)arg3 originalMetadataObject:(struct CGSize)arg4 sourceCaptureInput:(NSObject *)arg5;
- (AVMetadataObject *)initDerivedMetadataObjectFromMetadataObject:(NSObject *)arg0 withTransform:(struct CGAffineTransform)arg1 isVideoMirrored:(char)arg2 rollAdjustment:(float)arg3;
- (void)dealloc;
- (struct CGRect)bounds;
- (AVMetadataObject *)init;
- (struct ?)duration;
- (NSString *)type;
- (AVCaptureInput_FigRecorder *)input;
- (struct ?)time;

@end
