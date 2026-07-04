/* Runtime dump - WebGLLayer
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebGLLayer : CAEAGLLayer
{
    struct GraphicsContext3D * _context;
}

@property (nonatomic) struct GraphicsContext3D * context;

- (void)display;
- (struct GraphicsContext3D *)context;
- (void)setContext:(struct GraphicsContext3D *)arg0;
- (WebGLLayer *)initWithGraphicsContext3D:(struct GraphicsContext3D *)arg0;
- (struct CGImage *)copyImageSnapshotWithColorSpace:(struct CGColorSpace *)arg0;

@end
