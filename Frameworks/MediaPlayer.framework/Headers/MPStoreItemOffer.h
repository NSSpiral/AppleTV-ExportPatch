/* Runtime dump - MPStoreItemOffer
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemOffer : NSObject <NSSecureCoding>
{
    NSDictionary * _lookupDictionary;
}

@property (readonly, copy, nonatomic) NSArray * assets;
@property (readonly, copy, nonatomic) NSString * buyParameters;
@property (readonly, copy, nonatomic) NSString * formattedPrice;
@property (readonly, copy, nonatomic) NSString * offerType;
@property (readonly, copy, nonatomic) NSNumber * price;

+ (char)supportsSecureCoding;

- (NSString *)offerType;
- (MPStoreItemOffer *)initWithLookupItemOffer:(SSLookupItem *)arg0;
- (NSString *)buyParameters;
- (NSString *)formattedPrice;
- (NSNumber *)price;
- (NSObject *)actionTextForType:(NSObject *)arg0;
- (MPStoreItemOffer *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void).cxx_destruct;
- (MPStoreItemOffer *)initWithLookupDictionary:(NSDictionary *)arg0;
- (NSArray *)assets;

@end
