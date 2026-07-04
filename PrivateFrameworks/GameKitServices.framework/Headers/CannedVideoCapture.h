/* Runtime dump - CannedVideoCapture
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface CannedVideoCapture : NSObject <VideoCaptureProtocol>
{
    struct CannedVideoCapturePrivate * _pimpl;
    <CannedVideoFrameFeeder> * _frameFeeder;
}

@property (readonly, nonatomic) struct CannedVideoCapturePrivate * pimpl;
@property (retain, nonatomic) <CannedVideoFrameFeeder> * frameFeeder;

+ (int)cannedVideoTypeForPath:(NSString *)arg0;
+ (int)createPixelBufferPool:(struct __CVPixelBufferPool * *)arg0 withWidth:(struct __CVPixelBufferPool)arg1 height:(int)arg2;

- (void)dealloc;
- (long)startPreview;
- (long)startCaptureWithWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2;
- (long)stop:(BOOL)arg0;
- (long)setWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2;
- (long)copyColorInfo:(struct __CFDictionary * *)arg0;
- (char)isPreviewRunning;
- (long)getCamera:(unsigned int *)arg0;
- (long)setCameraType:(int)arg0;
- (long)getCameraType:(int *)arg0;
- (CannedVideoCapture *)initWithOptions:(void *)arg0 callback:(/* block */ id *)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 cameraType:(int)arg5 folder:(char)arg6 withError:(int *)arg7;
- (void)stopThreads;
- (long)startThreads;
- (struct CannedVideoCapturePrivate *)pimpl;
- (<CannedVideoFrameFeeder> *)frameFeeder;
- (void)setFrameFeeder:(<CannedVideoFrameFeeder> *)arg0;
- (long)setCamera:(unsigned long)arg0;

@end
