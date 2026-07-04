/* Runtime dump - PLContactPhotoOverlay
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLContactPhotoOverlay : UIView
{
    UILabel * _titleLabel;
    UIImageView * __avatarPreview;
}

@property (readonly, nonatomic) UILabel * titleLabel;
@property (readonly, nonatomic) struct UIEdgeInsets overlayEdgeInsets;
@property (readonly, nonatomic) UIImageView * _avatarPreview;

- (PLContactPhotoOverlay *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (PLContactPhotoOverlay *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (UILabel *)titleLabel;
- (struct UIEdgeInsets)overlayEdgeInsets;
- (struct CGRect)inscribingBounds;
- (void)_commonPLContactPhotoOverlayInitialization;
- (void)beginAvatarTrackingFromImageView:(NSObject *)arg0;
- (void)endAvatarTracking;
- (UIImageView *)_avatarPreview;

@end
