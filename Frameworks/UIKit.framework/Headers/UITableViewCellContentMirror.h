/* Runtime dump - UITableViewCellContentMirror
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellContentMirror : UIView
{
    id _selected;
}

@property (nonatomic) char selected;

- (UITableViewCellContentMirror *)initWithFrame:(struct CGRect)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (char)isSelected;
- (void)setSelected:(char)arg0;
- (UITableViewCell *)cell;

@end
