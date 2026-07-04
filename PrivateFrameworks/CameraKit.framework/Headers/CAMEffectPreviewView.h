/* Runtime dump - CAMEffectPreviewView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMEffectPreviewView : UICollectionViewCell
{
    UILabel * _nameLabel;
    UIView * _thumbnailView;
    UIView * _dimmingView;
    struct CGSize _thumbnailSize;
}

@property (nonatomic) struct CGSize thumbnailSize;
@property (retain, nonatomic) UIView * thumbnailView;
@property (copy, nonatomic) NSString * text;

+ (struct CGSize)sizeForImageSize:(struct CGSize)arg0;
+ (struct CGSize)thumbnailSizeForImageSize:(struct CGSize)arg0;
+ (float)defaultSpacing;

- (CAMEffectPreviewView *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setHighlighted:(char)arg0;
- (void)prepareForReuse;
- (void)setSelected:(char)arg0;
- (void)setThumbnailView:(UIView *)arg0;
- (UIView *)thumbnailView;
- (void).cxx_destruct;
- (struct CGSize)thumbnailSize;
- (void)_updateAppearance;
- (void)setThumbnailSize:(struct CGSize)arg0;

@end
