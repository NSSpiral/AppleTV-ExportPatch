/* Runtime dump - TSCH3DRenderProcessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRenderProcessor : NSObject

+ (TSCH3DRenderProcessor *)processor;

- (void)geometry:(TSDInfoGeometry *)arg0;
- (struct RenderState)renderState;
- (void)setRenderState:(struct RenderState *)arg0;
- (void)popRenderState;
- (void)pushRenderState;
- (void)updateRenderState;
- (struct RenderHints)renderHints;
- (void)setRenderHints:(struct RenderHints *)arg0;
- (void)texcoords:(id)arg0;
- (void)normals:(id)arg0;
- (char)canRenderPrefilteredLines;
- (int)texture:(NSObject *)arg0;
- (NSArray *)effects;
- (void)popState;
- (void)pushState;

@end
