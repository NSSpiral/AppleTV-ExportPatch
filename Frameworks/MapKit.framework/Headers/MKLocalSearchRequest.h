/* Runtime dump - MKLocalSearchRequest
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocalSearchRequest : NSObject <NSCopying>
{
    NSString * _naturalLanguageQuery;
    char _hasRegion;
    struct ? _region;
    char _allowPhoneNumberLookupUsingCellular;
    <GEOCompletionItem> * _geoCompletionItem;
    CLLocation * _deviceLocation;
    _MKLocalSearchMerchantParameters * _merchantParameters;
    NSArray * _phoneNumbers;
    NSArray * _muids;
    int _resultProviderID;
    NSString * _contactsDataString;
    NSString * _canonicalSearchString;
}

@property (copy, nonatomic) NSString * naturalLanguageQuery;
@property (nonatomic) struct ? region;
@property (retain, nonatomic) CLLocation * deviceLocation;
@property (retain, nonatomic) _MKLocalSearchMerchantParameters * merchantParameters;
@property (retain, nonatomic) NSArray * phoneNumbers;
@property (nonatomic) char allowPhoneNumberLookupUsingCellular;
@property (retain, nonatomic) NSArray * muids;
@property (nonatomic) int resultProviderID;
@property (retain, nonatomic) NSString * contactsDataString;
@property (retain, nonatomic) NSString * canonicalSearchString;
@property (readonly, nonatomic) char _hasRegion;
@property (readonly, nonatomic) <GEOCompletionItem> * geoCompletionItem;

+ (MKLocalSearchRequest *)searchRequestWithCompletion:(id /* block */)arg0;

- (void)_setContactsDataString:(NSString *)arg0;
- (<GEOCompletionItem> *)geoCompletionItem;
- (CLLocation *)_deviceLocation;
- (NSDictionary *)_merchantParameters;
- (NSArray *)_phoneNumbers;
- (char)_allowPhoneNumberLookupUsingCellular;
- (NSArray *)_muids;
- (char)_hasRegion;
- (NSString *)_canonicalSearchString;
- (NSString *)naturalLanguageQuery;
- (void)setNaturalLanguageQuery:(NSString *)arg0;
- (NSDictionary *)_dictionaryRepresentation;
- (void)_setDeviceLocation:(NSObject *)arg0;
- (void)_setMerchantParameters:(NSDictionary *)arg0;
- (void)_setPhoneNumbers:(id)arg0;
- (void)_setMuids:(id)arg0;
- (void)_setResultProviderID:(int)arg0;
- (NSString *)_contactsDataString;
- (void)_setCanonicalSearchString:(NSString *)arg0;
- (void)_setAllowPhoneNumberLookupUsingCellular:(char)arg0;
- (NSString *)description;
- (MKLocalSearchRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setRegion:(struct ?)arg0;
- (struct ?)region;
- (MKLocalSearchRequest *)initWithCompletion:(id /* block */)arg0;
- (int)_resultProviderID;

@end
