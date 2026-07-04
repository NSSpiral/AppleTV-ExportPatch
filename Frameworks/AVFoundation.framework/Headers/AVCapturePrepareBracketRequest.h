/* Runtime dump - AVCapturePrepareBracketRequest
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePrepareBracketRequest : NSObject
{
    id _completionBlock;
    FigCaptureStillImageSettings * _settings;
}

@property (readonly) FigCaptureStillImageSettings * settings;
@property (readonly) id completionBlock;

+ (AVCapturePrepareBracketRequest *)prepareBracketRequestWithCompletionBlock:(id /* block */)arg0 settings:(/* block */ id)arg1;

- (AVCapturePrepareBracketRequest *)_initWithCompletionBlock:(id /* block */)arg0 settings:(/* block */ id)arg1;
- (void)dealloc;
- (id /* block */)completionBlock;
- (FigCaptureStillImageSettings *)settings;

@end
