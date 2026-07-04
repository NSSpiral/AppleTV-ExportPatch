/* Runtime dump - SSVRedeemCodeMetadata
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVRedeemCodeMetadata : NSObject <NSCopying>
{
    NSDictionary * _dictionary;
    NSString * _inputCode;
}

@property (readonly, nonatomic) NSDictionary * redeemCodeDictionary;
@property (readonly, nonatomic) NSString * code;
@property (readonly, nonatomic) NSString * codeType;
@property (copy, nonatomic) NSString * inputCode;
@property (readonly, nonatomic) NSArray * items;

- (NSString *)code;
- (SSVRedeemCodeMetadata *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)items;
- (void).cxx_destruct;
- (SSVRedeemCodeMetadata *)initWithRedeemCodeDictionary:(NSDictionary *)arg0;
- (NSString *)inputCode;
- (void)setInputCode:(NSString *)arg0;
- (NSDictionary *)redeemCodeDictionary;
- (NSString *)codeType;

@end
