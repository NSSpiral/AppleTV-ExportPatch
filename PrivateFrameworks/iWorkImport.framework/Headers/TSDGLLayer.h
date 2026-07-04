/* Runtime dump - TSDGLLayer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLLayer : CAEAGLLayer
{
    NSObject<TSDGLLayerDelegate> * mDelegate;
    <TSDGLLayerContext> * mContext;
    CADisplayLink * mDisplayLink;
}

@property NSObject<TSDGLLayerDelegate> * delegate;

- (void)p_drawFrameAtLayerTime:(double)arg0;
- (void)p_drawFrameFromDisplayLink:(id)arg0;
- (TSDGLLayer *)initWithFrame:(struct CGRect)arg0 isOpaque:(struct CGSize)arg1 delegate:(NSObject<TSDGLLayerDelegate> *)arg2;
- (void)displayAtCurrentLayerTime;
- (void)dealloc;
- (void)setDelegate:(NSObject<TSDGLLayerDelegate> *)arg0;
- (NSObject<TSDGLLayerDelegate> *)delegate;
- (void)lock;
- (void)unlock;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setCurrentContext;
- (void)teardown;
- (void)resumeAnimation;
- (void)pauseAnimation;

@end
