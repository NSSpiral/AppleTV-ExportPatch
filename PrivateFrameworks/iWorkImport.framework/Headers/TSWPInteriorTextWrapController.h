/* Runtime dump - TSWPInteriorTextWrapController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPInteriorTextWrapController : NSObject <TSWPTextWrap>

+ (TSWPInteriorTextWrapController *)sharedInteriorTextWrapController;

- (id)beginWrappingToColumn:(id)arg0 target:(NSObject *)arg1 hasWrapables:(char *)arg2;
- (float)nextUnobstructedSpanStartingAt:(struct CGRect)arg0 wrappableAttachments:(struct CGSize)arg1 userInfo:(NSDictionary *)arg2;
- (unsigned int)splitLine:(struct CGRect)arg0 lineSegmentRects:(struct CGSize)arg1 wrappableAttachments:(struct CGSize)arg2 ignoreFloatingGraphics:(id)arg3 floatingCausedWrap:(struct CGRect)arg4 skipHint:(struct CGSize)arg5 userInfo:(NSDictionary *)arg6;

@end
