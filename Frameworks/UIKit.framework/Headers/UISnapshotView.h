/* Runtime dump - UISnapshotView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISnapshotView : UIView <UIStatusBarTinting>
{
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentBeyondBounds;
    struct UIEdgeInsets _edgePadding;
    struct UIEdgeInsets _edgeInsets;
    struct CGPoint _contentOffset;
    UIColor * _edgePaddingColor;
    UIView * _imageView;
    NSMutableArray * _edgePaddingViews;
    struct CGRect _snapshotRect;
    UIImageView * _shadowView;
    id _disableEdgeAntialiasing;
    id _disableVerticalStretch;
    UIColor * _statusBarTintColor;
}

@property (nonatomic) char edgeAntialiasingEnabled;
@property (retain, nonatomic) UIView * shadowView;
@property (retain, nonatomic) UIColor * _statusBarTintColor;
@property (nonatomic) struct UIEdgeInsets edgePadding;
@property (retain, nonatomic) UIColor * edgePaddingColor;
@property (readonly, nonatomic) UIView * snapshotView;
@property (readonly, nonatomic) struct CGSize contentSize;
@property (nonatomic) struct CGPoint contentOffset;
@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (nonatomic) char verticalStretchEnabled;
@property (nonatomic) struct CGRect snapshotRect;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (UISnapshotView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg0;
- (UIView *)_snapshotView;
- (UIColor *)_statusBarTintColor;
- (struct UIEdgeInsets)edgeInsets;
- (void)_didMoveFromWindow:(NSObject *)arg0 toWindow:(NSObject *)arg1;
- (void)setContentStretch:(struct CGRect)arg0;
- (struct CGSize)_contentSize;
- (UIView *)shadowView;
- (void)setShadowView:(UIView *)arg0;
- (struct CGPoint)_contentOffset;
- (void)captureSnapshotOfView:(NSObject *)arg0 withSnapshotType:(int)arg1;
- (void)_setStatusBarTintColor:(UIColor *)arg0;
- (void)setEdgePadding:(struct UIEdgeInsets)arg0;
- (void)setEdgePaddingColor:(UIColor *)arg0;
- (void)captureSnapshotRect:(struct CGRect)arg0 fromView:(struct CGSize)arg1 withSnapshotType:(NSObject *)arg2;
- (struct UIEdgeInsets)edgePadding;
- (void)_setContentOffset:(struct CGPoint)arg0;
- (void)setEdgeInsets:(struct UIEdgeInsets)arg0;
- (void)setVerticalStretchEnabled:(char)arg0;
- (void)setEdgeAntialiasingEnabled:(char)arg0;
- (void)_positionImageView;
- (struct UIEdgeInsets)_edgePadding;
- (void)_updateContentsRect;
- (void)_addEdgePaddingViewInRect:(struct CGRect)arg0;
- (void)_drawEdges:(struct UIEdgeInsets)arg0 withContentSize:(struct CGSize)arg1;
- (struct CGRect)_contentsCenterForEdgePadding:(id)arg0 withContentSize:(SEL)arg1;
- (char)isEdgeAntialiasingEnabled;
- (char)isVerticalStretchEnabled;
- (struct CGRect)_snapshotRect;
- (void)_setSnapshotRect:(struct CGRect)arg0;
- (UIColor *)edgePaddingColor;

@end
