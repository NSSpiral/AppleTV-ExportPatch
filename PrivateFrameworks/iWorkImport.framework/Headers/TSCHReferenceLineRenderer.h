/* Runtime dump - TSCHReferenceLineRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHReferenceLineRenderer : TSCHRenderer

- (void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (char)canRenderSelectionPath:(NSString *)arg0;
- (void)renderIntoContext:(struct CGContext *)arg0 selection:(struct _NSRange *)arg1;
- (void)addSelection:(TSWPSelection *)arg0 toCGPath:(struct CGPath *)arg1;
- (int)chunkPlane;
- (void)p_renderLabelsIntoContext:(struct CGContext *)arg0 forRefLineLabelsLayout:(NSObject *)arg1 forSelection:(TSWPSelection *)arg2;
- (void)p_renderLinesIntoContext:(struct CGContext *)arg0 linesToRender:(id)arg1;
- (void)p_renderLabelsIntoContext:(struct CGContext *)arg0 forRefLineLabelsLayout:(NSObject *)arg1;

@end
