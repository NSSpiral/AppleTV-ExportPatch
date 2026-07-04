/* Runtime dump - UICollectionViewCell
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewCell : UICollectionReusableView <UIGestureRecognizerDelegate>
{
    UIView * _contentView;
    UIView * _backgroundView;
    UIView * _selectedBackgroundView;
    UILongPressGestureRecognizer * _menuGesture;
    id _selectionSegueTemplate;
    id _highlightingSupport;
    struct ? _collectionCellFlags;
    char _selected;
    char _highlighted;
}

@property (readonly, nonatomic) UIView * contentView;
@property (nonatomic) char selected;
@property (nonatomic) char highlighted;
@property (retain, nonatomic) UIView * backgroundView;
@property (retain, nonatomic) UIView * selectedBackgroundView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)_contentViewClass;

- (UICollectionViewCell *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (UICollectionViewCell *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (char)canPerformAction:(SEL)arg0 withSender:(NSObject *)arg1;
- (UIView *)contentView;
- (void)_focusedViewDidChange:(NSDictionary *)arg0;
- (char)shouldChangeFocusedItem:(NSObject *)arg0 heading:(unsigned int)arg1;
- (char)canBecomeFocused;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2;
- (void)_descendent:(id)arg0 willMoveFromSuperview:(id)arg1 toSuperview:(id)arg2;
- (void)_descendent:(id)arg0 didMoveFromSuperview:(id)arg1 toSuperview:(id)arg2;
- (void)setHighlighted:(char)arg0;
- (char)_gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (char)isHighlighted;
- (void)_updateBackgroundView;
- (char)isSelected;
- (void)setBackgroundView:(UIView *)arg0;
- (void)prepareForReuse;
- (void)setSelected:(char)arg0;
- (void)_setOpaque:(char)arg0 forSubview:(_UIVisualEffectSubview *)arg1;
- (UIView *)backgroundView;
- (void)setSelectedBackgroundView:(UIView *)arg0;
- (void)cut:(id)arg0;
- (void)copy:(id)arg0;
- (void)paste:(id)arg0;
- (void)_menuDismissed:(id)arg0;
- (void)_performAction:(SEL)arg0 sender:(NSObject *)arg1;
- (void)_updateHighlightColorsForAnimationHalfwayPoint;
- (UIView *)selectedBackgroundView;
- (char)_shouldSaveOpaqueStateForView:(NSObject *)arg0;
- (char)_isUsingOldStyleMultiselection;
- (id)_selectionSegueTemplate;
- (void)_setSelected:(char)arg0 animated:(char)arg1;
- (void)_setHighlighted:(char)arg0 animated:(char)arg1;
- (void)_updateHighlightColorsForView:(NSObject *)arg0 highlight:(char)arg1;
- (void)_setupHighlightingSupport;
- (void)_teardownHighlightingSupportIfReady;
- (void)_handleMenuGesture:(NSObject *)arg0;
- (void)_setSelectionSegueTemplate:(id)arg0;
- (char)_forwardsSystemLayoutFittingSizeToContentView:(NSObject *)arg0;

@end
