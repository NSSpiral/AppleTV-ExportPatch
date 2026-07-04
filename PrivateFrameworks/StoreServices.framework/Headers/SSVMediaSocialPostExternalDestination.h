/* Runtime dump - SSVMediaSocialPostExternalDestination
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaSocialPostExternalDestination : NSObject <NSCopying, SSXPCCoding>
{
    NSString * _accessToken;
    NSString * _pageAccessToken;
    NSString * _pageIdentifier;
    NSString * _serviceIdentifier;
}

@property (copy, nonatomic) NSString * accessToken;
@property (copy, nonatomic) NSString * serviceIdentifier;
@property (copy, nonatomic) NSString * pageAccessToken;
@property (copy, nonatomic) NSString * pageIdentifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)serviceIdentifier;
- (void)setServiceIdentifier:(NSString *)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSVMediaSocialPostExternalDestination *)initWithXPCEncoding:(NSString *)arg0;
- (SSVMediaSocialPostExternalDestination *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setAccessToken:(NSString *)arg0;
- (void)setPageAccessToken:(NSString *)arg0;
- (void)setPageIdentifier:(NSString *)arg0;
- (NSString *)accessToken;
- (NSString *)pageAccessToken;
- (NSString *)pageIdentifier;

@end
