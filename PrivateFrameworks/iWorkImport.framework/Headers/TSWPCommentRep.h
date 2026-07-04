/* Runtime dump - TSWPCommentRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPCommentRep : TSWPShapeRep

- (TSWPCommentRep *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg0;
- (char)p_shouldDraw;
- (char)forcesPlacementOnTop;
- (void)dealloc;
- (void)drawInContext:(struct CGContext *)arg0;
- (NSString *)documentRoot;

@end
