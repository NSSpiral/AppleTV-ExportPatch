/* Runtime dump - UITableViewCellReorderControl
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellReorderControl : UIControl
{
    UITableViewCell * _cell;
    struct CGPoint _downPoint;
}

+ (struct CGSize)defaultSize;
+ (UIImage *)grabberImage;

- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)cancelTrackingWithEvent:(NSObject *)arg0;
- (char)shouldTrack;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (char)continueTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (UIImage *)grabberImage;
- (UITableViewCellReorderControl *)initWithTableViewCell:(NSObject *)arg0;

@end
