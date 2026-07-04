/* Runtime dump - ABVCardRecord
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardRecord : NSObject
{
    void * _record;
    struct __CFArray * _properties;
}

+ (char)includeREVInVCards;
+ (char)includeNotesInVCards;
+ (char)includeImageURIInVCards;
+ (char)includeABClipRectInVCardPhotos;
+ (struct __CFArray *)supportedProperties;
+ (char)privateVCardEnabled;
+ (void)setPrivateVCardEnabled:(char)arg0;
+ (void)setVCardField:(id)arg0 isPrivate:(char)arg1;
+ (void)clearPrivateFields;
+ (char)vcardFieldisPrivate:(id)arg0;
+ (void)setIncludeNotesInVCards:(char)arg0;
+ (void)setIncludeREVInVCards:(char)arg0;
+ (void)setIncludePhotosInVCards:(char)arg0;
+ (char)includePhotosInVCards;

- (NSData *)_21vCardRepresentationAsData;
- (NSDictionary *)_copyVCardRepresentationAsStringIncludeExternalProperties:(char)arg0 withPhoto:(UIImage *)arg1 extraPhotoParameters:(NSDictionary *)arg2 includePrivateData:(char)arg3;
- (char)useThumbnailImageFormatIfAvailable;
- (NSDictionary *)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(char)arg0;
- (NSDate *)newISO8061StringFromDate:(NSDate *)arg0;
- (NSString *)stringForAlternateBirthdayComponent:(id)arg0 key:(NSString *)arg1 format:(NSString *)arg2;
- (void *)copyValueForProperty:(unsigned int)arg0;
- (char)_showField:(unsigned int)arg0 identifier:(int)arg1;
- (struct __CFString *)_vCardKeyForGenericLabel:(NSString *)arg0;
- (void)appendLabel:(NSString *)arg0 toVCardRep:(NSObject *)arg1 inGroup:(NSObject *)arg2;
- (id)encodedDataForValue:(id)arg0 charsetName:(id *)arg1;
- (id)encodedLineForValue:(id)arg0;
- (id)propertyLineForIMHandles:(id)arg0 labels:(TSCH3DLabelResources *)arg1 vCardProperty:(NSObject *)arg2;
- (id)_valueForPersonSounds:(void *)arg0 identifier:(int)arg1;
- (void)_addPersonSounds:(void *)arg0 identifier:(int)arg1 toActivityAlerts:(id *)arg2 activity:(UIActivity *)arg3 alert:(UIAlertControllerVisualStyleAlert *)arg4;
- (NSDictionary *)_dictionaryForActivityAlerts;
- (NSObject *)_typeParameterForToneType:(NSObject *)arg0;
- (id)_fullNameIncludingAuxiliaryElements:(char)arg0;
- (char)_isCompany;
- (NSString *)alternateName;
- (NSString *)_realCompositeName;
- (struct __CFString *)_vCardKeyForEmailLabel:(NSString *)arg0;
- (NSString *)_vCardKeysForPhoneLabel:(NSString *)arg0;
- (NSString *)_vCardKeyForAddressLabel:(NSString *)arg0 vCard3:(char)arg1;
- (NSObject *)propertyLineForGenericABProperty21:(unsigned int)arg0 vCardProperty:(NSObject *)arg1;
- (char)_showField:(unsigned int)arg0;
- (NSDate *)ISO8061StringFromDate:(NSDate *)arg0;
- (NSDictionary *)dataForInstantMessageProperties;
- (NSObject *)dataForSocialProfileProperty:(void *)arg0 groupCount:(int *)arg1;
- (id)ISO8061StringFromDateTime:(id)arg0;
- (NSString *)stringFromAlternateBirthday:(id)arg0;
- (char)_usesArrayForExternalPropKey:(NSString *)arg0;
- (NSObject *)_prodID;
- (NSObject *)propertyLineForGenericABProperty:(unsigned int)arg0 vCardProperty:(NSObject *)arg1 is21:(char)arg2 groupCount:(int *)arg3;
- (id)propertyLineForInstantMessageHandles:(char)arg0 groupCount:(int *)arg1;
- (NSObject *)propertyLineForIMPPProperty:(char)arg0 groupCount:(int *)arg1;
- (void)_appendPropValue:(id)arg0 forExternalPropKey:(NSString *)arg1 toOutString:(NSString *)arg2 usingDelimiter:(id)arg3;
- (NSObject *)dataForSoundProperty:(void *)arg0;
- (ABVCardRecord *)initWithVCardRepresentation:(NSDictionary *)arg0;
- (id)vCardRepresentationForMode:(int)arg0;
- (void)dealloc;
- (ABVCardRecord *)init;
- (void *)valueForProperty:(unsigned int)arg0;
- (void *)record;
- (ABVCardRecord *)initWithRecord:(void *)arg0;
- (NSString *)_fullName;
- (char)setValue:(void *)arg0 forProperty:(unsigned int)arg1;
- (NSData *)imageData;

@end
