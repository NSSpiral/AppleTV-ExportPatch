/* Runtime dump - CNMutablePostalAddress
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNMutablePostalAddress : CNPostalAddress

@property (copy) NSString * street;
@property (copy) NSString * subLocality;
@property (copy) NSString * city;
@property (copy) NSString * subAdministrativeArea;
@property (copy) NSString * state;
@property (copy) NSString * postalCode;
@property (copy) NSString * country;
@property (copy) NSString * ISOCountryCode;

+ (NSString *)postalAddress;

- (void)setCity:(NSString *)arg0;
- (void)setPostalCode:(NSString *)arg0;
- (void)setISOCountryCode:(id)arg0;
- (void)setState:(NSString *)arg0;
- (void)setStreet:(NSString *)arg0;
- (void)setSubLocality:(NSString *)arg0;
- (void)setSubAdministrativeArea:(NSString *)arg0;
- (void)setCountry:(NSString *)arg0;

@end
