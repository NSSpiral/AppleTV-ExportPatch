/* Runtime dump - CAMModeDial
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMModeDial : UIControl
{
    int _orientation;
    <CAMModeDialDataSource> * _dataSource;
    unsigned int _selectedIndex;
    NSMutableArray * __items;
    UIView * __dialContainerView;
    UIView * __itemsContainerView;
    UIImageView * __dotImageView;
    CAGradientLayer * __dialGradientLayer;
    struct CGRect * __tapZones;
    NSString * __contentSizeCategory;
    UIView * __dotTopMarginLayoutSpacer;
    UIView * __centeringDebugView;
}

@property (readonly, nonatomic) int orientation;
@property (nonatomic) <CAMModeDialDataSource> * dataSource;
@property (nonatomic) unsigned int selectedIndex;
@property (readonly, nonatomic) NSMutableArray * _items;
@property (readonly, nonatomic) UIView * _dialContainerView;
@property (readonly, nonatomic) UIView * _itemsContainerView;
@property (readonly, nonatomic) UIImageView * _dotImageView;
@property (readonly, nonatomic) CAGradientLayer * _dialGradientLayer;
@property (readonly, nonatomic) struct CGRect * _tapZones;
@property (readonly, copy, nonatomic) NSString * _contentSizeCategory;
@property (readonly, nonatomic) UIView * _dotTopMarginLayoutSpacer;
@property (readonly, nonatomic) UIView * _centeringDebugView;

- (CAMModeDial *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (CAMModeDial *)initWithCoder:(NSCoder *)arg0;
- (void)setDataSource:(<CAMModeDialDataSource> *)arg0;
- (void)reloadData;
- (void)layoutSubviews;
- (<CAMModeDialDataSource> *)dataSource;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (int)orientation;
- (unsigned int)selectedIndex;
- (void)setSelectedIndex:(unsigned int)arg0;
- (NSMutableArray *)_items;
- (UIImage *)_dotImage;
- (void).cxx_destruct;
- (void)_layoutForHorizontalOrientation;
- (void)_layoutForVerticalOrientation;
- (CAMModeDial *)initWithOrientation:(int)arg0;
- (void)_setupHorizontalDotConstraints;
- (NSString *)_horizontalDialMeshTransform;
- (NSString *)_verticalDialMeshTransform;
- (void)_commonCAMModeDialInitialization;
- (struct CGRect)_frameForOrientation:(id)arg0;
- (UIView *)_dotTopMarginLayoutSpacer;
- (void)_layoutHorizontalTapZones;
- (void)_layoutVerticalTapZones;
- (void)_updateContainerViewPositionFromSelectedIndex;
- (void)setSelectedIndex:(unsigned int)arg0 animated:(char)arg1;
- (UIFont *)_fontForOrientation:(int)arg0;
- (NSString *)_contentSizeCategory;
- (float)_approximateWidthOfLabelAtIndex:(int)arg0;
- (struct CGPoint)_containerPositionFromSelectedIndex;
- (void)updateToContentSize:(NSObject *)arg0;
- (UIView *)_dialContainerView;
- (UIView *)_itemsContainerView;
- (UIImageView *)_dotImageView;
- (CAGradientLayer *)_dialGradientLayer;
- (struct CGRect *)_tapZones;
- (UIView *)_centeringDebugView;

@end
