/* Runtime dump - SSVRedeemCodeItem
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVRedeemCodeItem : NSObject
{
    NSMutableDictionary * _dictionary;
}

@property (readonly, nonatomic) NSDictionary * redeemCodeDictionary;
@property (readonly, nonatomic) long long itemIdentifier;

- (void).cxx_destruct;
- (SSVRedeemCodeItem *)initWithLookupItem:(SSLookupItem *)arg0;
- (long long)itemIdentifier;
- (SSVRedeemCodeItem *)initWithRedeemCodeDictionary:(NSDictionary *)arg0;
- (NSDictionary *)redeemCodeDictionary;

@end
