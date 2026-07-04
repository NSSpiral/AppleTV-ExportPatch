/* Runtime dump - ACUIAppInstallCell
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAppInstallCell : PSTableCell
{
    UILabel * _nameLabel;
    UILabel * _publisherLabel;
    UIImageView * _iconView;
    SKUIItemOfferButton * _installButton;
    int _installState;
}

@property (nonatomic) int installState;

+ (NSString *)specifierForAppWithDescription:(NSString *)arg0 target:(NSObject *)arg1 action:(SEL)arg2;

- (void)setInstallState:(int)arg0;
- (int)installState;
- (void)layoutSubviews;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void).cxx_destruct;
- (NSString *)_createLabelForAppName:(NSString *)arg0;
- (id)_createLabelForPublisher:(id)arg0;
- (id)_createInstallButton;
- (void)_updateSubviewsWithInstallState:(int)arg0;
- (void)_updateInstallButtonWithState:(int)arg0;
- (ACUIAppInstallCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;

@end
