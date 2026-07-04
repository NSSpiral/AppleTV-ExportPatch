/* Runtime dump - ATVSignInSignOutMenuItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuItem.h>

@class ATVMerchant, BREvent;
@interface ATVSignInSignOutMenuItem : BRMenuItem
{
    char _signOutExitsApp;
    ATVMerchant * _merchant;
    NSString * _confirmationTitle;
    NSString * _confirmationDescription;
    NSString * _signInPageURL;
}

@property (retain, nonatomic) ATVMerchant * merchant;
@property (nonatomic) char signOutExitsApp;
@property (copy, nonatomic) NSString * confirmationTitle;
@property (copy, nonatomic) NSString * confirmationDescription;
@property (copy, nonatomic) NSString * signInPageURL;

- (char)brEventAction:(BREvent *)arg0;
- (ATVMerchant *)merchant;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)setMerchant:(ATVMerchant *)arg0;
- (void)_accountDidDelete:(id)arg0;
- (NSString *)confirmationTitle;
- (NSString *)confirmationDescription;
- (char)signOutExitsApp;
- (NSString *)signInPageURL;
- (void)setSignOutExitsApp:(char)arg0;
- (void)setConfirmationTitle:(NSString *)arg0;
- (void)setConfirmationDescription:(NSString *)arg0;
- (void)setSignInPageURL:(NSString *)arg0;
- (void)dealloc;
- (void)_update;

@end
