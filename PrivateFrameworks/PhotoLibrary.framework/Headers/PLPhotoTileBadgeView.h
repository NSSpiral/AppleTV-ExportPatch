/* Runtime dump - PLPhotoTileBadgeView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoTileBadgeView : UIView
{
    int _style;
    int _numberOfPhotos;
    UIView * __backgroundView;
    UIImageView * __badgeImageView;
    UILabel * __textLabel;
}

@property (nonatomic) int style;
@property (nonatomic) int numberOfPhotos;
@property (readonly, nonatomic) UIView * _backgroundView;
@property (readonly, nonatomic) UIImageView * _badgeImageView;
@property (readonly, nonatomic) UILabel * _textLabel;

- (PLPhotoTileBadgeView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (PLPhotoTileBadgeView *)initWithCoder:(NSCoder *)arg0;
- (void)setAlpha:(float)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (UIView *)_backgroundView;
- (int)style;
- (void)setStyle:(int)arg0;
- (UILabel *)_textLabel;
- (int)numberOfPhotos;
- (void)_updateBadgeText;
- (void)_updateBadgeImage;
- (void)_commonPLPhotoTileBadgeViewInitialization;
- (UIImageView *)_badgeImageView;
- (void)setNumberOfPhotos:(int)arg0;

@end
