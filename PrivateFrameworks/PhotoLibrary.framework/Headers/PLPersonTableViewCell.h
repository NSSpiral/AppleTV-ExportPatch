/* Runtime dump - PLPersonTableViewCell
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPersonTableViewCell : UITableViewCell
{
    UIImage * _personIcon;
    NSString * _personFirstName;
    NSString * _personLastName;
    UIImageView * __personIconImageView;
    UIImage * __personMonogramImage;
}

@property (retain, nonatomic) UIImage * personIcon;
@property (copy, nonatomic) NSString * personFirstName;
@property (copy, nonatomic) NSString * personLastName;
@property (retain, nonatomic) UIImageView * _personIconImageView;
@property (retain, nonatomic) UIImage * _personMonogramImage;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setPersonIcon:(UIImage *)arg0;
- (void)setPersonFirstName:(NSString *)arg0;
- (void)setPersonLastName:(NSString *)arg0;
- (UIImageView *)_personIconImageView;
- (UIImage *)personIcon;
- (UIImage *)_personMonogramImage;
- (NSString *)personFirstName;
- (NSString *)personLastName;
- (void)_setPersonMonogramImage:(UIImage *)arg0;
- (void)_updatePersonIconImageView;
- (void)_setPersonIconImageView:(NSObject *)arg0;

@end
