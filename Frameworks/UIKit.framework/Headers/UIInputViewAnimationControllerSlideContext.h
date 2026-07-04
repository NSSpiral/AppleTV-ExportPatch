/* Runtime dump - UIInputViewAnimationControllerSlideContext
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewAnimationControllerSlideContext : NSObject
{
    UIView * _snapshot;
    UIInputViewSetPlacement * _endPlacement;
    struct CGRect _snapshotEndFrame;
}

@property (retain, nonatomic) UIView * snapshot;
@property (nonatomic) struct CGRect snapshotEndFrame;
@property (retain, nonatomic) UIInputViewSetPlacement * endPlacement;

- (void)dealloc;
- (UIView *)snapshot;
- (void)setSnapshot:(UIView *)arg0;
- (void)setSnapshotEndFrame:(struct CGRect)arg0;
- (void)setEndPlacement:(UIInputViewSetPlacement *)arg0;
- (struct CGRect)snapshotEndFrame;
- (UIInputViewSetPlacement *)endPlacement;

@end
