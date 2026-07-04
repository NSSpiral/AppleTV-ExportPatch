/* Runtime dump - FeedElementResources
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedAuthenticationResources.h>

@class ATVFeedAuthenticationElement;
@interface FeedElementResources : ATVFeedAuthenticationResources
{
    ATVFeedAuthenticationElement * _feedElement;
}

- (NSString *)accountNameTitle;
- (NSString *)accountNameInstructions;
- (NSString *)accountNameLabel;
- (NSString *)accountNameFootnote;
- (NSString *)accountPasswordTitle;
- (NSString *)accountPasswordInstructions;
- (NSString *)accountPasswordLabel;
- (NSString *)authenticationFailureInstructions;
- (NSString *)authenticationFailureTitle;
- (FeedElementResources *)initWithFeedElement:(ATVFeedAuthenticationElement *)arg0;
- (UIImage *)titleImage;
- (NSString *)connectionString;
- (NSString *)string:(NSString *)arg0 orSuper:(SEL)arg1;
- (void)dealloc;

@end
