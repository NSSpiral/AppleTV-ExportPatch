/* Runtime dump - SSVMediaSocialPostDescription
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaSocialPostDescription : NSObject <NSCopying, SSXPCCoding>
{
    NSNumber * _accountIdentifier;
    NSArray * _attachments;
    char _attributed;
    NSString * _authorIdentifier;
    NSString * _authorType;
    NSArray * _contentItems;
    NSArray * _externalServiceDestinations;
    NSString * _sourceApplicationIdentifier;
    NSString * _text;
}

@property (copy, nonatomic) NSNumber * accountIdentifier;
@property (copy, nonatomic) NSArray * attachments;
@property (nonatomic) char attributed;
@property (copy, nonatomic) NSString * authorIdentifier;
@property (copy, nonatomic) NSString * authorType;
@property (copy, nonatomic) NSArray * contentItems;
@property (copy, nonatomic) NSArray * externalServiceDestinations;
@property (copy, nonatomic) NSString * sourceApplicationIdentifier;
@property (copy, nonatomic) NSString * text;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSVMediaSocialPostDescription *)initWithXPCEncoding:(NSString *)arg0;
- (void)setAccountIdentifier:(NSNumber *)arg0;
- (SSVMediaSocialPostDescription *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void).cxx_destruct;
- (NSArray *)attachments;
- (void)setAttachments:(NSArray *)arg0;
- (NSNumber *)accountIdentifier;
- (void)setAttributed:(char)arg0;
- (void)setAuthorIdentifier:(NSString *)arg0;
- (void)setAuthorType:(NSString *)arg0;
- (void)setContentItems:(NSArray *)arg0;
- (void)setExternalServiceDestinations:(NSArray *)arg0;
- (void)setSourceApplicationIdentifier:(NSString *)arg0;
- (char)isAttributed;
- (NSString *)authorIdentifier;
- (NSString *)authorType;
- (NSArray *)contentItems;
- (NSArray *)externalServiceDestinations;
- (NSString *)sourceApplicationIdentifier;

@end
