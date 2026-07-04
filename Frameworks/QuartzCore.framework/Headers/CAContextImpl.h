/* Runtime dump - CAContextImpl
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAContextImpl : CAContext
{
    struct Context * _impl;
}

- (struct Context *)renderContext;
- (void)setColorSpace:(struct CGColorSpace *)arg0;
- (struct CGColorSpace *)colorSpace;
- (CAContextImpl *)initWithOptions:(NSDictionary *)arg0 localContext:(BOOL)arg1;
- (CAContextImpl *)initRemoteWithOptions:(NSDictionary *)arg0;
- (void)orderBelow:(unsigned int)arg0;
- (void)dealloc;
- (CALayer *)layer;
- (void)invalidate;
- (unsigned int)contextId;
- (void)orderAbove:(unsigned int)arg0;
- (void)setLayer:(CALayer *)arg0;
- (void)setLevel:(float)arg0;
- (void)setFencePort:(unsigned int)arg0 commitHandler:(id /* block */)arg1;
- (void)setFencePort:(unsigned int)arg0;
- (void)setFence:(unsigned int)arg0 count:(unsigned int)arg1;
- (void)setSecure:(char)arg0;
- (char)isSecure;
- (float)level;
- (unsigned int)createFencePort;
- (unsigned int)createImageSlot:(struct CGSize)arg0 hasAlpha:(char)arg1;
- (void)deleteSlot:(unsigned int)arg0;
- (NSDictionary *)options;
- (char)valid;
- (unsigned int)createSlot;
- (void)setObject:(NSObject *)arg0 forSlot:(unsigned int)arg1;

@end
