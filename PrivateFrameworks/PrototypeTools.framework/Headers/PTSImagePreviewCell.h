/* Runtime dump - PTSImagePreviewCell
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSImagePreviewCell : UITableViewCell
{
    UIImageView * _imageViewOnLight;
    UIImageView * _imageViewOnDark;
    UIView * _lightBackground;
    UIView * _darkBackground;
    UILabel * _imageNameLabel;
    UIImage * _previewImage;
}

@property (retain, nonatomic) UIImage * previewImage;
@property (retain, nonatomic) NSString * imageName;

+ (float)heightForImage:(UIImage *)arg0;
+ (void)_getLeftFrame:(struct CGRect *)arg0 rightFrame:(struct CGSize)arg1 forImage:(UIImage *)arg2 inBounds:(struct CGRect *)arg3;

- (void)layoutSubviews;
- (PTSImagePreviewCell *)initWithReuseIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setImageName:(NSString *)arg0;
- (NSString *)imageName;
- (UIImage *)previewImage;
- (void)setPreviewImage:(UIImage *)arg0;

@end
