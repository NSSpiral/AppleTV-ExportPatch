/* Runtime dump - ATVFeedAuthenticationElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, ATVFeedImageElement, BRMerchant;
@interface ATVFeedAuthenticationElement : ATVFeedRootElement
{
    ATVFeedImageElement * _image;
    NSString * _accountNameTitle;
    NSString * _accountNameInstructions;
    NSString * _accountNameLabel;
    NSString * _accountNameFootnote;
    NSString * _accountPasswordTitle;
    NSString * _accountPasswordInstructions;
    NSString * _accountPasswordLabel;
    NSString * _connectionString;
    NSString * _failureTitle;
    NSString * _failureInstructions;
    NSString * _urlToLoadAfterAuth;
}

@property (retain, nonatomic) ATVFeedImageElement * image;
@property (copy, nonatomic) NSString * accountNameTitle;
@property (copy, nonatomic) NSString * accountNameInstructions;
@property (copy, nonatomic) NSString * accountNameLabel;
@property (copy, nonatomic) NSString * accountNameFootnote;
@property (copy, nonatomic) NSString * accountPasswordTitle;
@property (copy, nonatomic) NSString * accountPasswordInstructions;
@property (copy, nonatomic) NSString * accountPasswordLabel;
@property (copy, nonatomic) NSString * connectionString;
@property (copy, nonatomic) NSString * failureTitle;
@property (copy, nonatomic) NSString * failureInstructions;
@property (copy, nonatomic) NSString * urlToLoadAfterAuth;

- (NSString *)accountNameTitle;
- (NSString *)accountNameInstructions;
- (NSString *)accountNameLabel;
- (NSString *)accountNameFootnote;
- (NSString *)accountPasswordTitle;
- (NSString *)accountPasswordInstructions;
- (NSString *)accountPasswordLabel;
- (ATVFeedAuthenticationElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)urlToLoadAfterAuth;
- (NSString *)connectionString;
- (NSString *)failureTitle;
- (NSString *)failureInstructions;
- (void)setAccountNameTitle:(NSString *)arg0;
- (void)setAccountNameInstructions:(NSString *)arg0;
- (void)setAccountNameLabel:(NSString *)arg0;
- (void)setAccountNameFootnote:(NSString *)arg0;
- (void)setAccountPasswordTitle:(NSString *)arg0;
- (void)setAccountPasswordInstructions:(NSString *)arg0;
- (void)setAccountPasswordLabel:(NSString *)arg0;
- (void)setConnectionString:(NSString *)arg0;
- (void)setFailureTitle:(NSString *)arg0;
- (void)setFailureInstructions:(NSString *)arg0;
- (void)setUrlToLoadAfterAuth:(NSString *)arg0;
- (void)setImage:(ATVFeedImageElement *)arg0;
- (ATVFeedImageElement *)image;
- (void).cxx_destruct;

@end
