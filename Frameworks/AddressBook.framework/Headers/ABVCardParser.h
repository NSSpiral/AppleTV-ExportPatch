/* Runtime dump - ABVCardParser
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardParser : NSObject
{
    ABVCardValueSetter * _valueSetter;
    void * _source;
    ABVCardLexer * _lexer;
    NSData * _data;
    unsigned int _defaultEncoding;
    char _hasImportErrors;
    char _30vCard;
    NSString * _first;
    NSString * _last;
    NSString * _org;
    NSString * _formattedName;
    NSMutableArray * _emails;
    NSMutableArray * _dates;
    NSMutableArray * _phones;
    NSMutableArray * _addresses;
    NSMutableArray * _aims;
    NSMutableArray * _jabbers;
    NSMutableArray * _msns;
    NSMutableArray * _yahoos;
    NSMutableArray * _icqs;
    NSMutableArray * _untypedIMs;
    NSMutableArray * _instantMessengers;
    NSMutableArray * _socialProfiles;
    NSMutableArray * _relatedNames;
    NSMutableArray * _urls;
    NSMutableDictionary * _activityAlerts;
    NSMutableString * _notes;
    NSMutableString * _otherNotes;
    NSMutableDictionary * _extensions;
    NSString * _uid;
    NSData * _imageData;
    NSString * _imageURI;
    int _cropRectX;
    int _cropRectY;
    int _cropRectWidth;
    int _cropRectHeight;
    NSData * _cropRectChecksum;
    NSMutableArray * _itemParameters;
    NSString * _grouping;
    unsigned int _encoding;
    char _quotedPrintable;
    char _base64;
}

@property (nonatomic) void * source;

+ (struct __CFArray *)supportedProperties;

- (NSDictionary *)sortedPeopleAndProperties:(struct __CFArray * *)arg0;
- (char)_usesArrayForExternalPropKey:(NSString *)arg0;
- (void)cleanUpCardState;
- (NSString *)defaultLabel;
- (void)setLocalRecordHasAdditionalProperties:(char)arg0;
- (int)_addIMHandles:(id)arg0 toService:(struct __CFString *)arg1 multiValue:(void *)arg2 uniquenessCheckingMultiValue:(void *)arg3;
- (int)_addIMPPProfiles:(id)arg0 multiValue:(void *)arg1 uniquenessCheckingMultiValue:(void *)arg2;
- (char)_setPersonSounds:(void *)arg0 identifier:(int)arg1 fromActivity:(UIActivity *)arg2 alert:(UIAlertControllerVisualStyleAlert *)arg3 otherValue:(id)arg4;
- (void)noteLackOfValueForProperty:(unsigned int)arg0;
- (void)addMultiValues:(NSArray *)arg0 toProperty:(unsigned int)arg1 valueComparator:(id /* block */)arg2;
- (char)_setStringValueOrNoteIfNull:(id)arg0 forProperty:(unsigned int)arg1;
- (NSString *)_genericLabel;
- (id)parseSingleValue;
- (NSString *)genericLabel;
- (NSString *)phoneLabel;
- (NSObject *)_socialProfileService;
- (NSString *)_socialProfileUsername;
- (NSObject *)_socialProfileUserId;
- (NSString *)_socialProfileDisplayName;
- (id)parseInstantMessengerProfile:(id)arg0;
- (id)parseRemainingLine;
- (NSString *)dateFromISO8601String:(NSString *)arg0;
- (char)parseUID;
- (char)parseTEL;
- (char)parseADR;
- (char)parseORG;
- (NSURL *)parseURL;
- (NSString *)defaultURLLabel;
- (char)parseADD;
- (char)parseEMAIL;
- (char)addIMValueTo:(id)arg0;
- (char)parsePhoto:(UIImage *)arg0;
- (char)parseN;
- (char)parseVERSION;
- (char)parseABUID;
- (char)parseABExtensionType:(NSObject *)arg0;
- (char)parseBDAY;
- (char)parseIMPP;
- (char)parseNICKNAME;
- (char)parseABDATE;
- (void)parseABOrder;
- (void)parseABPhoto;
- (char)parseAlternateBirthday;
- (void)parseABShowAs;
- (char)parseABMaiden;
- (char)parseSocialProfiles;
- (char)parseABReleatedNames;
- (char)parseActivityAlerts;
- (NSArray *)parseValueArray;
- (char)_usesRemainingLineForExternalPropKey:(NSString *)arg0;
- (char)_handleUnknownTag:(NSString *)arg0 withValue:(NSValue *)arg1;
- (char)importToValueSetter:(id)arg0;
- (char)parseItem;
- (char)_setMultiValuesOrNoteIfNull:(id)arg0 forProperty:(unsigned int)arg1 valueComparator:(id /* block */)arg2;
- (void)addAddressMultiValues;
- (void)addSocialProfileMultiValues;
- (void)addInstantMessageMultiValues;
- (void)addActivityAlertMultiValues;
- (void)noteLackOfValueForImageData;
- (char)importToPerson:(void *)arg0 foundProperties:(struct __CFArray * *)arg1;
- (void *)copyNextPersonWithLength:(int *)arg0 foundProperties:(struct __CFArray * *)arg1;
- (struct __CFArray *)peopleAndProperties:(struct __CFArray * *)arg0;
- (char)hasImportErrors;
- (char)_setIntValueOrNoteIfNull:(int)arg0 forProperty:(int)arg1;
- (char)_setDataValueOrNoteIfNull:(id)arg0 forProperty:(unsigned int)arg1;
- (NSString *)defaultADRLabel;
- (ABVCardValueSetter *)_valueSetter;
- (void)dealloc;
- (ABVCardParser *)initWithData:(NSData *)arg0;
- (void *)source;
- (void)setSource:(void *)arg0;
- (void)finalize;

@end
