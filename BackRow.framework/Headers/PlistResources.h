/* Runtime dump - PlistResources
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedAuthenticationResources.h>

@class BRMerchant;
@interface PlistResources : ATVFeedAuthenticationResources
{
    NSDictionary * _dictionary;
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
- (UIImage *)titleImage;
- (PlistResources *)initWithDictionary:(NSDictionary *)arg0 merchant:(BRMerchant *)arg1;
- (NSString *)stringForKey:(NSString *)arg0 orSuper:(SEL)arg1;
- (NSString *)connectionString;
- (void)dealloc;

@end
