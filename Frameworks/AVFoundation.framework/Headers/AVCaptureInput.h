/* Runtime dump - AVCaptureInput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureInput : NSObject
{
    AVCaptureInputInternal * _inputInternal;
}

@property (readonly, nonatomic) NSArray * ports;

+ (void)initialize;

- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id /* block */)arg0;
- (NSArray *)ports;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)dealloc;
- (AVCaptureInput *)init;
- (NSURLSession *)session;
- (void)setSession:(NSObject *)arg0;
- (struct OpaqueCMClock *)clock;

@end
