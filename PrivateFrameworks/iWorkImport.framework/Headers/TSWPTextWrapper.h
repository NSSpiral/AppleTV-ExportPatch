/* Runtime dump - TSWPTextWrapper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextWrapper : NSObject

+ (unsigned int)splitLine:(struct CGRect)arg0 lineSegmentRects:(struct CGSize)arg1 wrapSegments:(TSDWrapSegments *)arg2 type:(NSObject *)arg3 skipHint:(struct CGRect)arg4;
+ (float)p_skipHintForRect:(struct CGRect)arg0 wrapSegments:(struct CGSize)arg1 type:(NSObject *)arg2;
+ (float)unobstructedSpanForWrapSegments:(id)arg0 startingSpan:(struct CGRect)arg1 columnBounds:(struct CGSize)arg2;

@end
