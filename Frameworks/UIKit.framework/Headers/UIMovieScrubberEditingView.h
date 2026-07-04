/* Runtime dump - UIMovieScrubberEditingView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMovieScrubberEditingView : UIView
{
    UIImageView * _leftImageView;
    UIImageView * _middleImageView;
    UIImageView * _rightImageView;
    NSArray * _activeImages;
    NSArray * _activeNoEditImages;
    NSArray * _inactiveImages;
    char _enabled;
    char _editing;
    float _edgeInset;
}

@property (nonatomic) char enabled;
@property (nonatomic) char editing;
@property (nonatomic) float edgeInset;

- (UIMovieScrubberEditingView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (char)isEditing;
- (void)setEditing:(char)arg0;
- (void)setEdgeInset:(float)arg0;
- (void)bounce;
- (int)handleForPoint:(struct CGPoint)arg0 hitOffset:(float *)arg1;
- (float)edgeInset;
- (void)_updateHandleImages;
- (id)_handleImages;
- (struct CGRect)_leftHandleRect;
- (struct CGRect)_rightHandleRect;
- (float)_bounceValueForFraction:(float)arg0;
- (char)pointInsideLeftHandle:(struct CGPoint)arg0;
- (char)pointInsideRightHandle:(struct CGPoint)arg0;

@end
