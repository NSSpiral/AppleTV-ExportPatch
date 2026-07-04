/* Runtime dump - UITextSelectionRectImpl
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextSelectionRectImpl : UITextSelectionRect
{
    WebSelectionRect * webRect;
}

@property (retain, nonatomic) WebSelectionRect * webRect;

+ (UITextSelectionRectImpl *)rectsWithWebRects:(id)arg0;
+ (NSObject *)rectWithWebRect:(WebSelectionRect *)arg0;

- (void)dealloc;
- (WebSelectionRect *)webRect;
- (struct CGRect)rect;
- (struct _PTPRange)range;
- (char)isVertical;
- (char)containsStart;
- (int)writingDirection;
- (char)containsEnd;
- (void)setWebRect:(WebSelectionRect *)arg0;
- (UITextSelectionRectImpl *)initWithWebRect:(WebSelectionRect *)arg0;

@end
