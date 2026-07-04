/* Runtime dump - TSDGroupRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>

- (struct CGRect)frameInUnscaledCanvas;
- (char)directlyManagesLayerContent;
- (char)containsPoint:(struct CGPoint)arg0 withSlop:(struct CGSize)arg1;
- (void)recursivelyDrawInContext:(struct CGContext *)arg0;
- (struct CGPoint)convertNaturalPointFromUnscaledCanvas:(struct CGPoint)arg0;
- (char)intersectsUnscaledRect:(struct CGRect)arg0;
- (NSObject *)allRepsContainedInGroup;
- (struct CGRect)clipRect;
- (char)containsPoint:(struct CGPoint)arg0;
- (Class)layerClass;
- (void)drawInContext:(struct CGContext *)arg0;

@end
