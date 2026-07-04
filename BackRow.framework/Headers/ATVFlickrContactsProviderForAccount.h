/* Runtime dump - ATVFlickrContactsProviderForAccount
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFlickrProvider.h>

@class ATVInternetPhotosAccount;
@interface ATVFlickrContactsProviderForAccount : ATVFlickrProvider
{
    ATVInternetPhotosAccount * _account;
}

+ (NSNumber *)providerForAccount:(NSObject *)arg0;

- (NSString *)hashForDataAtIndex:(long)arg0;
- (char)_handlesObject:(NSObject *)arg0;
- (NSData *)_data;
- (void)dealloc;
- (ATVFlickrContactsProviderForAccount *)initWithAccount:(ATVInternetPhotosAccount *)arg0;

@end
