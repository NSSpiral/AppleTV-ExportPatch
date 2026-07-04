/* Runtime dump - SALocalSearchOfferList
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchOfferList : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * offers;
@property (copy, nonatomic) NSString * providerId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)offerList;
+ (NSDictionary *)offerListWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)offers;
- (void)setProviderId:(NSString *)arg0;
- (NSString *)providerId;
- (NSString *)encodedClassName;
- (void)setOffers:(NSArray *)arg0;

@end
