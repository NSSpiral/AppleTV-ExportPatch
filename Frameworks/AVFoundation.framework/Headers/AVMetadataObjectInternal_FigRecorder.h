/* Runtime dump - AVMetadataObjectInternal_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataObjectInternal_FigRecorder : NSObject
{
    NSString * type;
    AVCaptureInput_FigRecorder * input;
    AVMetadataObject_FigRecorder * originalMetadataObject;
    struct CGRect bounds;
    struct ? time;
    struct ? duration;
}

@property struct ? time;
@property struct ? duration;
@property struct CGRect bounds;
@property (retain) NSString * type;
@property (retain) AVCaptureInput_FigRecorder * input;
@property (retain) AVMetadataObject_FigRecorder * originalMetadataObject;

- (AVMetadataObject_FigRecorder *)originalMetadataObject;
- (void)setInput:(AVCaptureInput_FigRecorder *)arg0;
- (void)setOriginalMetadataObject:(AVMetadataObject_FigRecorder *)arg0;
- (void)dealloc;
- (struct CGRect)bounds;
- (AVMetadataObjectInternal_FigRecorder *)init;
- (void)setBounds:(struct CGRect)arg0;
- (struct ?)duration;
- (void)setDuration:(struct ?)arg0;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (AVCaptureInput_FigRecorder *)input;
- (void)setTime:(struct ?)arg0;
- (struct ?)time;

@end
