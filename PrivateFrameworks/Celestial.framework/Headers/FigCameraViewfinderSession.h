/* Runtime dump - FigCameraViewfinderSession
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCameraViewfinderSession : NSObject
{
    FigDelegateStorage * _delegateStorage;
}

- (void)dealloc;
- (FigCameraViewfinderSession *)init;
- (void)openPreviewStreamWithOptions:(NSDictionary *)arg0;
- (void)closePreviewStream;

@end
