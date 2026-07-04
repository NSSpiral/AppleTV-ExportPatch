/* Runtime dump - SALocalSearchOffer
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchOffer : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * identifier;
@property (retain, nonatomic) SAUIAppPunchOut * offerPunchOut;
@property (copy, nonatomic) NSString * title;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)offer;
+ (NSDictionary *)offerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)identifier;
- (NSString *)title;
- (void)setIdentifier:(NSString *)arg0;
- (NSString *)encodedClassName;
- (SAUIAppPunchOut *)offerPunchOut;
- (void)setOfferPunchOut:(SAUIAppPunchOut *)arg0;

@end
