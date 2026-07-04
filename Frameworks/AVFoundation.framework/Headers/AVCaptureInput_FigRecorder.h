/* Runtime dump - AVCaptureInput_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureInput_FigRecorder : NSObject
{
    AVCaptureInputInternal_FigRecorder * _inputInternal;
}

@property (readonly, nonatomic) NSArray * ports;

- (void)_applyOverridesToCaptureOptions:(NSDictionary *)arg0;
- (void)didStopForSession:(NSObject *)arg0 error:(NSError *)arg1;
- (void)didStartForSession:(NSObject *)arg0;
- (void)handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (NSError *)notReadyError;
- (NSArray *)ports;
- (void)willStartForSession:(NSObject *)arg0;
- (void)dealloc;
- (AVCaptureInput_FigRecorder *)init;
- (char)isKindOfClass:(Class)arg0;
- (NSURLSession *)session;
- (void)setSession:(NSObject *)arg0;
- (struct OpaqueCMClock *)clock;

@end
