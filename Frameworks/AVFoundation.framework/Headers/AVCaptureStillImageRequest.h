/* Runtime dump - AVCaptureStillImageRequest
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureStillImageRequest : NSObject
{
    id _sbufCompletionBlock;
    id _iosurfaceCompletionBlock;
    id _bracketedCaptureCompletionBlock;
    long long _settingsID;
    unsigned long _shutterSoundID;
    AVCaptureBracketedStillImageSettings * _bracketedSettings;
}

@property (copy) id sbufCompletionBlock;
@property (copy) id iosurfaceCompletionBlock;
@property (copy) id bracketedCaptureCompletionBlock;
@property long long settingsID;
@property unsigned long shutterSoundID;
@property (retain) AVCaptureBracketedStillImageSettings * bracketedSettings;

+ (NSURLRequest *)request;

- (long long)settingsID;
- (void)setSettingsID:(long long)arg0;
- (id /* block */)sbufCompletionBlock;
- (void)setSbufCompletionBlock:(id /* block */)arg0;
- (id /* block */)iosurfaceCompletionBlock;
- (void)setIosurfaceCompletionBlock:(id /* block */)arg0;
- (id /* block */)bracketedCaptureCompletionBlock;
- (void)setBracketedCaptureCompletionBlock:(id /* block */)arg0;
- (unsigned long)shutterSoundID;
- (void)setShutterSoundID:(unsigned long)arg0;
- (AVCaptureBracketedStillImageSettings *)bracketedSettings;
- (void)setBracketedSettings:(AVCaptureBracketedStillImageSettings *)arg0;
- (void)dealloc;

@end
