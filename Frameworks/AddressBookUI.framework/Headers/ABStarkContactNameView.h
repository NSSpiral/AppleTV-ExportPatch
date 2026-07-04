/* Runtime dump - ABStarkContactNameView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABStarkContactNameView : UIView
{
    UILabel * _nameLabel;
    UIImageView * _photoImageView;
}

@property (retain, nonatomic) UILabel * nameLabel;
@property (retain, nonatomic) UIImageView * photoImageView;

- (UILabel *)nameLabel;
- (UIImageView *)photoImageView;
- (void)setNameLabel:(UILabel *)arg0;
- (void)setPhotoImageView:(UIImageView *)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (ABStarkContactNameView *)initWithName:(NSString *)arg0;

@end
