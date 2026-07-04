/* Runtime dump - TPTextWrapController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPTextWrapController : NSObject <TSWPTextWrap>
{
    TPDocumentRoot * _documentRoot;
    struct CGAffineTransform _canvasSpaceToWrapSpace;
    struct CGAffineTransform _wrapSpaceToCanvasSpace;
    char _wrapAnimationEnabled;
    NSTimer * _wrapAnimationTimer;
}

+ (struct CGPoint)p_baseWrappablePoint;

- (TPTextWrapController *)initWithDocumentRoot:(TPDocumentRoot *)arg0;
- (id)beginWrappingToColumn:(id)arg0 target:(NSObject *)arg1 hasWrapables:(char *)arg2;
- (float)nextUnobstructedSpanStartingAt:(struct CGRect)arg0 wrappableAttachments:(struct CGSize)arg1 userInfo:(NSDictionary *)arg2;
- (unsigned int)splitLine:(struct CGRect)arg0 lineSegmentRects:(struct CGSize)arg1 wrappableAttachments:(struct CGSize)arg2 ignoreFloatingGraphics:(id)arg3 floatingCausedWrap:(struct CGRect)arg4 skipHint:(struct CGSize)arg5 userInfo:(NSDictionary *)arg6;
- (void)toggleWrapAnimation;
- (id)p_groupInfoContainingWrappable:(id)arg0;
- (char)p_shouldTextFlowAroundWrappable:(id)arg0 inTarget:(NSObject *)arg1 inColumn:(TSCHChartTypeMultiDataColumn *)arg2;
- (unsigned int)p_splitLine:(struct CGRect)arg0 lineSegmentRects:(struct CGSize)arg1 wrappable:(id)arg2 cookie:(NSString *)arg3 skipHint:(struct CGRect)arg4;
- (void)p_setWrapAnimationPhase:(double)arg0;
- (void)p_animateWrap;
- (void)dealloc;
- (void)stopAnimation;
- (void).cxx_construct;

@end
