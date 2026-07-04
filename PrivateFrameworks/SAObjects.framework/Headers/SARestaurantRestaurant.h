/* Runtime dump - SARestaurantRestaurant
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARestaurantRestaurant : SALocalSearchBusiness2

@property (copy, nonatomic) NSArray * attributeSet;
@property (copy, nonatomic) NSString * currencySymbol;
@property (copy, nonatomic) NSArray * makeReservationPunchOuts;
@property (copy, nonatomic) NSURL * menuLink;
@property (copy, nonatomic) NSArray * openings;
@property (copy, nonatomic) NSArray * orderDeliveryPunchOuts;
@property (copy, nonatomic) NSString * priceRange;

+ (SARestaurantRestaurant *)restaurant;
+ (NSDictionary *)restaurantWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)currencySymbol;
- (void)setCurrencySymbol:(NSString *)arg0;
- (NSString *)groupIdentifier;
- (void)setAttributeSet:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSArray *)attributeSet;
- (NSArray *)makeReservationPunchOuts;
- (void)setMakeReservationPunchOuts:(NSArray *)arg0;
- (NSURL *)menuLink;
- (void)setMenuLink:(NSURL *)arg0;
- (NSArray *)openings;
- (void)setOpenings:(NSArray *)arg0;
- (NSArray *)orderDeliveryPunchOuts;
- (void)setOrderDeliveryPunchOuts:(NSArray *)arg0;
- (NSString *)priceRange;
- (void)setPriceRange:(NSString *)arg0;

@end
