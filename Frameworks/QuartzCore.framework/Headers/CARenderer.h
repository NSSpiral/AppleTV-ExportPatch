/* Runtime dump - CARenderer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CARenderer : NSObject
{
    struct CARendererPriv * _priv;
}

@property (retain) CAContext * context;
@property (weak) <CARendererDelegate> * delegate;
@property (retain) CALayer * layer;
@property struct CGRect bounds;

+ (CARenderer *)rendererWithEAGLContext:(NSObject *)arg0 options:(NSDictionary *)arg1;

- (NSDictionary *)_initWithOptions:(NSDictionary *)arg0;
- (NSString *)_initWithEAGLContext:(NSObject *)arg0 options:(NSDictionary *)arg1;
- (char)hasMissingContent;
- (void)render;
- (double)nextFrameTime;
- (void)beginFrameAtTime:(double)arg0 timeStamp:(struct ? *)arg1;
- (void)addUpdateRect:(struct CGRect)arg0;
- (void)dealloc;
- (struct CGRect)bounds;
- (CALayer *)layer;
- (void)setDelegate:(<CARendererDelegate> *)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (<CARendererDelegate> *)delegate;
- (void)setLayer:(CALayer *)arg0;
- (CAContext *)context;
- (void)setContext:(CAContext *)arg0;
- (void)endFrame;
- (struct CGRect)updateBounds;

@end
