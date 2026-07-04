/* Runtime dump - UITableViewCellUnhighlightedState
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellUnhighlightedState : NSObject
{
    char _opaque;
    char _highlighted;
    UIColor * _backgroundColor;
}

@property char opaque;
@property char highlighted;
@property (retain) UIColor * backgroundColor;

- (void)setOpaque:(char)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (UIColor *)backgroundColor;
- (void)setHighlighted:(char)arg0;
- (char)highlighted;
- (char)opaque;

@end
