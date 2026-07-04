/* Runtime dump - ATVFeedSignInSignOutMenuItemElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedMenuItemElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedSignInSignOutMenuItemElement : ATVFeedMenuItemElement
{
    char _signOutExitsApp;
    NSString * _confirmationTitle;
    NSString * _confirmationDescription;
    NSString * _signInPageURL;
}

@property (nonatomic) char signOutExitsApp;
@property (copy, nonatomic) NSString * confirmationTitle;
@property (copy, nonatomic) NSString * confirmationDescription;
@property (copy, nonatomic) NSString * signInPageURL;

- (ATVFeedSignInSignOutMenuItemElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)confirmationTitle;
- (NSString *)confirmationDescription;
- (char)signOutExitsApp;
- (NSString *)signInPageURL;
- (void)setSignOutExitsApp:(char)arg0;
- (void)setConfirmationTitle:(NSString *)arg0;
- (void)setConfirmationDescription:(NSString *)arg0;
- (void)setSignInPageURL:(NSString *)arg0;
- (void).cxx_destruct;

@end
