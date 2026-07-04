/* Runtime dump - TSDPartitionedPartialRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPartitionedPartialRep : TSDRep

- (TSDPartitionedPartialRep *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
- (struct CGRect)layerFrameInScaledCanvas;
- (void)willBeRemoved;
- (struct UIEdgeInsets)p_edgeInsetsForClipping;
- (struct CGRect)p_clipRect;
- (struct CGRect)p_convertBaseToNaturalRect:(NSObject *)arg0;
- (struct CGImage *)p_newImageForCachingBaseRep;
- (struct CGRect)clipRect;
- (void)drawInContext:(struct CGContext *)arg0;

@end
