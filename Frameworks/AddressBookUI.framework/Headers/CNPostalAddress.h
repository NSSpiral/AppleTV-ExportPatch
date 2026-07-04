/* Runtime dump - CNPostalAddress
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNPostalAddress : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary * _addressDictionary;
}

@property (readonly, copy) NSString * street;
@property (readonly, copy) NSString * subLocality;
@property (readonly, copy) NSString * city;
@property (readonly, copy) NSString * subAdministrativeArea;
@property (readonly, copy) NSString * state;
@property (readonly, copy) NSString * postalCode;
@property (readonly, copy) NSString * country;
@property (readonly, copy) NSString * ISOCountryCode;
@property (readonly, nonatomic) NSString * formattedAddressSingleLine;
@property (retain) NSMutableDictionary * addressDictionary;
@property (readonly, nonatomic) NSString * formattedAddress;

+ (CNPostalAddress *)postalAddress;
+ (CNPostalAddress *)localizedAddressFormatDictionaryForCountryCode:(id)arg0;
+ (CNPostalAddress *)defaultCountryCode;
+ (NSDictionary *)addressFormatsDictionary;
+ (CNPostalAddress *)localizedCountryNameForCountryCode:(id)arg0;
+ (CNPostalAddress *)postalAddressWithDictionary:(NSDictionary *)arg0;

- (NSString *)city;
- (id)keyboardSettingsForAddressPart:(id)arg0;
- (NSString *)ISOCountryCode;
- (NSString *)formattedAddress;
- (NSString *)formattedAddressSingleLine;
- (NSString *)postalCode;
- (char)_isAddressFieldEqual:(id)arg0 toField:(MFMailComposeRecipientView *)arg1;
- (void)setAddressDictionary:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (CNPostalAddress *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (CNPostalAddress *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)state;
- (CNPostalAddress *)copyWithZone:(struct _NSZone *)arg0;
- (CNPostalAddress *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSMutableDictionary *)addressDictionary;
- (NSString *)subLocality;
- (NSString *)subAdministrativeArea;
- (NSString *)country;
- (NSString *)street;

@end
