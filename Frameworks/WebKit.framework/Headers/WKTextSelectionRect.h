/* Runtime dump - WKTextSelectionRect
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKTextSelectionRect : UITextSelectionRect
{
    WebSelectionRect * _webRect;
}

@property (retain, nonatomic) WebSelectionRect * webRect;

+ (WKTextSelectionRect *)textSelectionRectsWithWebRects:(id)arg0;

- (void)dealloc;
- (WebSelectionRect *)webRect;
- (struct CGRect)rect;
- (struct _PTPRange)range;
- (char)isVertical;
- (char)containsStart;
- (int)writingDirection;
- (char)containsEnd;
- (void)setWebRect:(WebSelectionRect *)arg0;
- (WKTextSelectionRect *)initWithWebRect:(WebSelectionRect *)arg0;

@end
