/* Runtime dump - FigNeroLayer
 * Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigNeroLayer : CALayer
{
    NSObject<OS_dispatch_queue> * _neroQueue;
    struct OpaqueFigNeroid * _neroid;
    <FigNeroLayerDelegate> * _neroDelegate;
}

@property (nonatomic) <FigNeroLayerDelegate> * neroDelegate;

- (<FigNeroLayerDelegate> *)neroDelegate;
- (void)setNeroDelegate:(<FigNeroLayerDelegate> *)arg0;
- (void)_dispatchNotification:(NSNotification *)arg0 value:(NSObject *)arg1;
- (void)dealloc;
- (FigNeroLayer *)init;
- (void)setBounds:(struct CGRect)arg0;
- (void)stop;
- (void)_start;
- (void)start;

@end
