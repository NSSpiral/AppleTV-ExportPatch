/* Runtime dump - UIWebOverflowScrollInfo
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebOverflowScrollInfo : NSObject
{
    char _isUserScroll;
    DOMNode * _node;
    struct CGPoint _offset;
}

@property (retain, nonatomic) DOMNode * node;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic) char isUserScroll;

- (void)dealloc;
- (void)setOffset:(struct CGPoint)arg0;
- (struct CGPoint)offset;
- (DOMNode *)node;
- (UIWebOverflowScrollInfo *)initWithNode:(DOMNode *)arg0 offset:(struct CGPoint)arg1 isUserScroll:(char)arg2;
- (char)coalesceScrollForNode:(NSObject *)arg0 offset:(struct CGPoint)arg1 isUserScroll:(char)arg2;
- (void)setNode:(DOMNode *)arg0;
- (char)isUserScroll;
- (void)setIsUserScroll:(char)arg0;

@end
