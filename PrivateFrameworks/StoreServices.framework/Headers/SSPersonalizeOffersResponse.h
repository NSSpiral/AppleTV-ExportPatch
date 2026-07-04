/* Runtime dump - SSPersonalizeOffersResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPersonalizeOffersResponse : NSObject <SSXPCCoding>
{
    NSMutableDictionary * _actionDisplayNames;
    NSMutableDictionary * _actionParameters;
    NSArray * _items;
    NSMutableDictionary * _priceDisplayNames;
}

@property (readonly, nonatomic) NSArray * personalizedItems;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSPersonalizeOffersResponse *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (NSString *)actionParametersForItemIdentifier:(NSString *)arg0;
- (NSObject *)priceDisplayForItemType:(NSObject *)arg0;
- (NSObject *)actionDisplayNameForItemType:(NSObject *)arg0;
- (void)_setPersonalizedItems:(NSArray *)arg0;
- (NSArray *)personalizedItems;
- (void)setActionDisplayNameString:(NSString *)arg0 forItemType:(NSObject *)arg1;
- (void)setActionParameters:(NSMutableDictionary *)arg0 forItemIdentifier:(NSString *)arg1;
- (void)setPriceDisplayString:(NSString *)arg0 forItemType:(NSObject *)arg1;

@end
