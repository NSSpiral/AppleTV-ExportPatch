/* Runtime dump - AAUIMyPhotoRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIMyPhotoRequest : AARequest
{
    ACAccount * _account;
    NSString * _serverCacheTag;
    SSAccount * _iTunesAccount;
}

@property (copy, nonatomic) NSString * serverCacheTag;
@property (retain, nonatomic) SSAccount * iTunesAccount;

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (SSAccount *)iTunesAccount;
- (NSString *)serverCacheTag;
- (void)setServerCacheTag:(NSString *)arg0;
- (void)setiTunesAccount:(SSAccount *)arg0;
- (AAUIMyPhotoRequest *)initWithAccount:(ACAccount *)arg0;
- (NSURLRequest *)urlRequest;

@end
