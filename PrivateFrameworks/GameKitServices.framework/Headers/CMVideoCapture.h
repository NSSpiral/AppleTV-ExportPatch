/* Runtime dump - CMVideoCapture
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface CMVideoCapture : NSObject <VideoCaptureProtocol>
{
    struct tagHANDLE * _handle;
}

- (void)dealloc;
- (long)startPreview;
- (long)startCaptureWithWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2;
- (long)stop:(BOOL)arg0;
- (long)setWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2;
- (long)copyColorInfo:(struct __CFDictionary * *)arg0;
- (char)isPreviewRunning;
- (long)setCameraType:(int)arg0;
- (long)getCameraType:(int *)arg0;
- (long)setFrameRatePercentage:(double)arg0 newFramerate:(int *)arg1;
- (long)getPreviewFrameCount:(int *)arg0 captureFrameCount:(int *)arg1 reset:(char)arg2;
- (long)frameBecameAvailableCount:(int *)arg0 figBufferQueueEmptyCount:(int *)arg1 figBufferQueueErrorCount:(int *)arg2;
- (CMVideoCapture *)initWithOptions:(void *)arg0 callback:(/* block */ id *)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 cameraType:(int)arg5 withError:(int *)arg6;

@end
