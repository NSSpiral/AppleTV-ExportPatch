/* Runtime dump - UITableViewCellDeleteConfirmationView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellDeleteConfirmationView : UIView
{
    float _visibleWidth;
    struct CGSize _contentSize;
    float _visibleHeightRatio;
    float _cornerRadius;
    int _sectionLocation;
    _UITableViewCellActionButton * _deleteView;
    _UITableViewCellActionButton * _accessoryView;
    NSArray * _actionButtons;
}

@property (nonatomic) float visibleWidth;
@property (readonly, nonatomic) struct CGSize contentSize;
@property (nonatomic) float visibleHeightRatio;
@property (nonatomic) float cornerRadius;
@property (nonatomic) int sectionLocation;
@property (readonly, nonatomic) _UITableViewCellActionButton * deleteView;
@property (readonly, nonatomic) _UITableViewCellActionButton * accessoryView;

- (void)dealloc;
- (void)didMoveToWindow;
- (struct CGSize)contentSize;
- (float)cornerRadius;
- (void)setCornerRadius:(float)arg0;
- (void)setVisibleHeightRatio:(float)arg0;
- (int)sectionLocation;
- (void)setSectionLocation:(int)arg0;
- (UITableViewCellDeleteConfirmationView *)initWithFrame:(struct CGRect)arg0 actionButtons:(struct CGSize)arg1 contentSize:(struct CGSize)arg2;
- (void)setVisibleWidth:(float)arg0;
- (_UITableViewCellActionButton *)accessoryView;
- (void)updateMaskView:(char)arg0;
- (void)updateBounds;
- (float)visibleWidth;
- (float)visibleHeightRatio;
- (_UITableViewCellActionButton *)deleteView;

@end
