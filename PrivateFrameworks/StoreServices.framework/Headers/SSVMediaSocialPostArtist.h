/* Runtime dump - SSVMediaSocialPostArtist
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaSocialPostArtist : NSObject <NSCopying, SSXPCCoding>
{
    NSString * _identifier;
    NSString * _name;
}

@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSString * name;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSVMediaSocialPostArtist *)initWithXPCEncoding:(NSString *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)identifier;
- (SSVMediaSocialPostArtist *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;

@end
