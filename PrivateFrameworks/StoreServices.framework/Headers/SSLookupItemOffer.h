/* Runtime dump - SSLookupItemOffer
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLookupItemOffer : NSObject
{
    NSDictionary * _dictionary;
}

@property (readonly, nonatomic) NSDictionary * lookupDictionary;
@property (readonly, nonatomic) NSString * buyParameters;
@property (readonly, nonatomic) NSString * formattedPrice;
@property (readonly, nonatomic) NSString * offerType;
@property (readonly, nonatomic) NSNumber * price;

- (NSString *)offerType;
- (NSString *)buyParameters;
- (NSString *)formattedPrice;
- (NSNumber *)price;
- (NSObject *)actionTextForType:(NSObject *)arg0;
- (void)dealloc;
- (NSDictionary *)lookupDictionary;
- (SSLookupItemOffer *)initWithLookupDictionary:(NSDictionary *)arg0;

@end
