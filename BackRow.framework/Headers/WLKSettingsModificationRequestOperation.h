/* Runtime dump - WLKSettingsModificationRequestOperation
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/WLKSettingsRequestOperation.h>
@interface WLKSettingsModificationRequestOperation : WLKSettingsRequestOperation
{
    NSDictionary * _modifications;
}

+ (NSString *)URLBagKey;

- (NSObject *)_postBody;
- (WLKSettingsModificationRequestOperation *)initWithModifications:(NSDictionary *)arg0;
- (void).cxx_destruct;
- (SSMutableURLRequestProperties *)requestProperties;

@end
