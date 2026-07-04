/* Runtime dump - GEOPDAddress
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAddress : PBCodable <NSCopying>
{
    int _knownAccuracy;
    NSMutableArray * _localizedAddress;
    NSMutableArray * _spokenNavigationAddress;
    NSMutableArray * _spokenStructuredAddress;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * localizedAddress;
@property (retain, nonatomic) NSMutableArray * spokenNavigationAddress;
@property (retain, nonatomic) NSMutableArray * spokenStructuredAddress;
@property (nonatomic) char hasKnownAccuracy;
@property (nonatomic) int knownAccuracy;

+ (NSData *)addressForPlaceData:(NSData *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDAddress *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setLocalizedAddress:(NSMutableArray *)arg0;
- (void)setSpokenNavigationAddress:(NSMutableArray *)arg0;
- (void)setSpokenStructuredAddress:(NSMutableArray *)arg0;
- (void)addLocalizedAddress:(NSString *)arg0;
- (void)addSpokenNavigationAddress:(NSString *)arg0;
- (void)addSpokenStructuredAddress:(NSString *)arg0;
- (unsigned int)localizedAddressCount;
- (void)clearLocalizedAddress;
- (NSObject *)localizedAddressAtIndex:(unsigned int)arg0;
- (unsigned int)spokenNavigationAddressCount;
- (void)clearSpokenNavigationAddress;
- (NSObject *)spokenNavigationAddressAtIndex:(unsigned int)arg0;
- (unsigned int)spokenStructuredAddressCount;
- (void)clearSpokenStructuredAddress;
- (NSObject *)spokenStructuredAddressAtIndex:(unsigned int)arg0;
- (void)setKnownAccuracy:(int)arg0;
- (void)setHasKnownAccuracy:(char)arg0;
- (char)hasKnownAccuracy;
- (NSMutableArray *)localizedAddress;
- (NSMutableArray *)spokenNavigationAddress;
- (NSMutableArray *)spokenStructuredAddress;
- (int)knownAccuracy;
- (NSString *)bestLocalizedAddress;
- (NSLocale *)spokenAddressForLocale:(NSObject *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
