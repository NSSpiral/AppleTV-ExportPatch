/* Runtime dump - TPDrawableAttachmentPositioner
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPDrawableAttachmentPositioner : NSObject <TSDAttachmentPositioner>

- (struct _TSWPCharIndexAndPosition)positionForDrawable:(id)arg0 atPoint:(struct CGPoint)arg1 inTextLayoutTarget:(NSObject *)arg2 makeInline:(char)arg3 pointIsAlignmentFrameOrigin:(char)arg4;
- (id)p_validatedLayoutForDrawable:(id)arg0 inLayoutTarget:(NSObject *)arg1;
- (struct _TSWPCharIndexAndPosition)positionForDrawable:(id)arg0 atPoint:(struct CGPoint)arg1 inTextLayoutTarget:(NSObject *)arg2 documentRoot:(struct CGSize)arg3;
- (struct _TSWPCharIndexAndPosition)p_positionForDrawable:(id)arg0 atUnscaledCanvasPoint:(struct CGPoint)arg1 inBodyLayout:(NSObject *)arg2 pointIsAlignmentFrameOrigin:(char)arg3;
- (void)p_constrainToPageLayout:(NSObject *)arg0 context:(struct _TPConstrainToPageLayoutContext *)arg1;

@end
