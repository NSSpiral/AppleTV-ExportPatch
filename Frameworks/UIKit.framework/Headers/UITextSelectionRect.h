/* Runtime dump - UITextSelectionRect
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextSelectionRect : NSObject

@property (readonly, nonatomic) struct CGRect rect;
@property (readonly, nonatomic) int writingDirection;
@property (readonly, nonatomic) char containsStart;
@property (readonly, nonatomic) char containsEnd;
@property (readonly, nonatomic) char isVertical;
@property (readonly, nonatomic) UITextSelectionRectImpl * isImpl;

+ (char)startIsHorizontal:(id)arg0;
+ (struct CGRect)startEdgeFromRects:(id)arg0;
+ (struct CGRect)endEdgeFromRects:(id)arg0;
+ (char)endIsHorizontal:(id)arg0;
+ (UITextSelectionRect *)startRectFromRects:(id)arg0;
+ (UITextSelectionRect *)endRectFromRects:(id)arg0;

- (struct CGRect)rect;
- (struct _PTPRange)range;
- (char)isVertical;
- (UITextSelectionRectImpl *)_isImpl;
- (char)containsStart;
- (int)writingDirection;
- (char)containsEnd;

@end
