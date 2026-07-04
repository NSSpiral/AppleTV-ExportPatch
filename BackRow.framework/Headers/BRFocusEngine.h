/* Runtime dump - BRFocusEngine
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRFocusEngine : NSObject

+ (struct BRFocusEdge)focusEdgeForEvent:(NSObject *)arg0 elementPosition:(SEL)arg1 elementBounds:(struct CGRect)arg2;
+ (BRFocusEngine *)newFocusForEdge:(struct BRFocusEdge)arg0 currentCandidate:(struct CGPoint)arg1 container:(NSObject *)arg2 event:(NSString *)arg3;
+ (NSObject *)initalFocusForPoint:(struct CGPoint)arg0 container:(NSObject *)arg1 searchDownwardOnly:(char)arg2;
+ (NSDate *)newFocusForCandidate:(NSDate *)arg0 container:(NSObject *)arg1 event:(NSString *)arg2;
+ (struct BRFocusEdge)oppositeFocusEdgeForEvent:(NSObject *)arg0 elementPosition:(SEL)arg1 elementBounds:(struct CGRect)arg2;

@end
