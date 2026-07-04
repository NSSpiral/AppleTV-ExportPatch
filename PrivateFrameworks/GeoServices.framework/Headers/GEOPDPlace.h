/* Runtime dump - GEOPDPlace
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlace : PBCodable <NSCopying>
{
    unsigned long long _muid;
    unsigned long long _preferredMuid;
    NSMutableArray * _components;
    int _resultProviderId;
    int _status;
    struct ? _has;
}

@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasPreferredMuid;
@property (nonatomic) unsigned long long preferredMuid;
@property (retain, nonatomic) NSMutableArray * components;
@property (nonatomic) char hasResultProviderId;
@property (nonatomic) int resultProviderId;

+ (GEOPDPlace *)failedPlaceDataForMuid:(unsigned long long)arg0;
+ (NSData *)failedPlaceData;
+ (NSData *)attributionForPlaceData:(NSData *)arg0 type:(int)arg1;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDPlace *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSMutableArray *)components;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setHasStatus:(char)arg0;
- (char)hasStatus;
- (NSString *)bestName;
- (NSArray *)phoneNumbers;
- (unsigned long long)muid;
- (char)isDisputed;
- (void)setResultProviderId:(int)arg0;
- (void)setHasResultProviderId:(char)arg0;
- (char)hasResultProviderId;
- (int)resultProviderId;
- (NSLocale *)spokenNameForLocale:(NSObject *)arg0;
- (void)setMuid:(unsigned long long)arg0;
- (void)setHasMuid:(char)arg0;
- (char)hasMuid;
- (NSString *)compactDebugDescription;
- (char)isCacheable;
- (NSArray *)copyWithoutETAComponents;
- (void)setFirstSeenTimestamp:(double)arg0;
- (NSDictionary *)_cleanedPhoneNumberForPhoneNumberRepresentation:(NSDictionary *)arg0;
- (NSString *)_entityName;
- (void)_removeETAComponents;
- (void)setComponents:(NSMutableArray *)arg0;
- (char)hasExpiredComponentsAsOf:(double)arg0;
- (NSURL *)businessURL;
- (NSData *)copyWithStrippedOptionalData;
- (char)hasPreferredMuid;
- (unsigned long long)preferredMuid;
- (void)addComponent:(_UIDatePickerComponent *)arg0;
- (unsigned int)componentsCount;
- (void)clearComponents;
- (NSObject *)componentAtIndex:(unsigned int)arg0;
- (void)setPreferredMuid:(unsigned long long)arg0;
- (void)setHasPreferredMuid:(char)arg0;
- (<GEOMapItemPrivate> *)geoMapItem;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
