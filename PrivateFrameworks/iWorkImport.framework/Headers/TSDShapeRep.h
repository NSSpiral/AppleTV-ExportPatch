/* Runtime dump - TSDShapeRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeRep : TSDStyledRep <TSDMagicMoveMatching>
{
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;
    char mFrameInUnscaledCanvasIsValid;
    char mDirectlyManagesLayerContent;
    struct CGRect mOriginalAliasedAlignmentFrameInLayerFrame;
    char mShadowOnChildrenDisabled;
}

+ (float)magicMoveAttributeMatchPercentBetweenOutgoingObject:(NSObject *)arg0 incomingObject:(TSDMagicMoveMatchObject *)arg1 mixingTypeContext:(NSObject *)arg2;

- (TSDShapeRep *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
- (struct CGRect)frameInUnscaledCanvas;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg0;
- (void)setTextureAttributes:(NSDictionary *)arg0;
- (char)shouldExpandHitRegionWhenSmall;
- (float)shortestDistanceToPoint:(struct CGPoint)arg0 countAsHit:(char *)arg1;
- (char)intersectsUnscaledRect:(struct CGRect)arg0;
- (NSDictionary *)shapeInfo;
- (TSWPShapeLayout *)shapeLayout;
- (char)p_beginApplyOpacity:(struct CGContext *)arg0 forDrawingInOneStep:(char)arg1;
- (void)p_endApplyOpacity:(struct CGContext *)arg0 apply:(char)arg1;
- (void)p_drawInContext:(struct CGContext *)arg0 withContent:(char)arg1 withStroke:(char)arg2 withOpacity:(char)arg3;
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext *)arg0;
- (char)p_drawsSelfInOneStep;
- (void)p_drawLineEndForHead:(char)arg0 withDelta:(struct CGPoint)arg1 andStroke:(id)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(char)arg4;
- (char)shouldHitTestWithFill;
- (CALayer *)colorBehindLayer:(id)arg0;
- (void)drawInLayerContext:(struct CGContext *)arg0;
- (char)isEditingChildRep;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(char)arg1 withStroke:(char)arg2 withOpacity:(char)arg3 forAlphaOnly:(char)arg4 drawChildren:(char)arg5;
- (id)imageOfStroke:(struct CGRect *)arg0;
- (id)pathSourceForSelectionHighlightBehavior;
- (char)canBeUsedForImageMask;
- (void)beginEditingWithString:(NSString *)arg0;
- (char)canBeginEditing;
- (char)canDrawShadowInOneStepWithChildren:(char)arg0;
- (struct CGRect)clipRect;
- (char)containsPoint:(struct CGPoint)arg0;
- (void)beginEditing;

@end
