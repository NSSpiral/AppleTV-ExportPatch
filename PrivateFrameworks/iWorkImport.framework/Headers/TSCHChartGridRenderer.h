/* Runtime dump - TSCHChartGridRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGridRenderer : TSCHRenderer

- (void)p_renderBackground:(struct CGContext *)arg0 style:(NSObject *)arg1;
- (void)p_renderBackground:(struct CGContext *)arg0;
- (void)p_renderGridlines:(struct CGContext *)arg0 axis:(id)arg1 locations:(id *)arg2 showProperty:(int)arg3 strokeProperty:(int)arg4 shadowProperty:(int)arg5 opacityProperty:(int)arg6;
- (void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (void)dealloc;
- (TSCHChartGridRenderer *)init;

@end
