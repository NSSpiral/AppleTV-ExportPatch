/* Runtime dump - FigCaptureSessionProxy
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSessionProxy : NSObject
{
    struct OpaqueFigCaptureSession * _session;
    long long _identifier;
    char _previewTapOpened;
    <FigCaptureSessionPreviewTapDelegate> * _previewTapDelegate;
}

@property (readonly) long long identifier;

+ (void)initialize;

- (void)dealloc;
- (long long)identifier;
- (long)openPreviewTapWithDelegate:(NSObject *)arg0;
- (void)closePreviewTap;
- (FigCaptureSessionProxy *)initWithFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 identifier:(long long)arg1;

@end
