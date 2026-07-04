/* Runtime dump - ATVFlickrProviderForAccount
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFlickrProvider.h>

@class ATVInternetPhotosAccount;
@interface ATVFlickrProviderForAccount : ATVFlickrProvider
{
    ATVInternetPhotosAccount * _account;
}

+ (NSNumber *)providerForAccount:(NSObject *)arg0;

- (NSString *)hashForDataAtIndex:(long)arg0;
- (char)_handlesObject:(NSObject *)arg0;
- (NSData *)_data;
- (void)dealloc;
- (ATVFlickrProviderForAccount *)initWithAccount:(ATVInternetPhotosAccount *)arg0;

@end
