/* Runtime dump - UITableViewCountView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCountView : UILabel
{
    NSString * _countString;
    int _count;
}

- (void)dealloc;
- (int)count;
- (void)setCount:(int)arg0;
- (UITableViewCountView *)initWithFrame:(struct CGRect)arg0 withCountString:(struct CGSize)arg1 withCount:(int)arg2;
- (void)setCountString:(NSString *)arg0 withCount:(int)arg1;

@end
