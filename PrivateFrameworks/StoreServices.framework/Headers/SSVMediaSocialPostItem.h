/* Runtime dump - SSVMediaSocialPostItem
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaSocialPostItem : NSObject <NSCopying, SSXPCCoding>
{
    NSString * _identifier;
    NSString * _type;
}

@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSString * type;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSVMediaSocialPostItem *)initWithXPCEncoding:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (SSVMediaSocialPostItem *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;

@end
