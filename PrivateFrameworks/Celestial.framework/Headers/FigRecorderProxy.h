/* Runtime dump - FigRecorderProxy
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigRecorderProxy : FigCaptureSessionProxy
{
    struct OpaqueFigRecorder * _recorder;
    long long _identifier;
    char _previewTapOpened;
    <FigCaptureSessionPreviewTapDelegate> * _previewTapDelegate;
}

- (void)dealloc;
- (long long)identifier;
- (FigRecorderProxy *)initWithFigRecorder:(struct OpaqueFigRecorder *)arg0 identifier:(long long)arg1;
- (long)openPreviewTapWithDelegate:(NSObject *)arg0;
- (void)closePreviewTap;

@end
