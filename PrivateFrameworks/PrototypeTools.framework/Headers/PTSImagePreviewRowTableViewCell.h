/* Runtime dump - PTSImagePreviewRowTableViewCell
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSImagePreviewRowTableViewCell : PTSRowTableViewCell
{
    UIImageView * _imageViewOnLight;
    UIImageView * _imageViewOnDark;
    UIView * _lightBackground;
    UIView * _darkBackground;
}

+ (float)cellHeightForRow:(id)arg0;
+ (void)_getCellHeight:(float *)arg0 leftFrame:(struct CGRect *)arg1 rightFrame:(struct CGSize)arg2 forImage:(UIImage *)arg3 inBounds:(struct CGRect *)arg4;

- (void)layoutSubviews;
- (PTSImagePreviewRowTableViewCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void).cxx_destruct;
- (void)updateDisplayedValue;

@end
