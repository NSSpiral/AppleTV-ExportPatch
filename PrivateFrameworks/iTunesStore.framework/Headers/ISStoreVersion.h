/* Runtime dump - ISStoreVersion
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISStoreVersion : NSObject
{
    NSURL * _redirectURL;
}

@property (retain, nonatomic) NSURL * redirectURL;

- (void)dealloc;
- (ISStoreVersion *)initWithDictionary:(NSDictionary *)arg0;
- (NSURL *)redirectURL;
- (void)setRedirectURL:(NSURL *)arg0;

@end
