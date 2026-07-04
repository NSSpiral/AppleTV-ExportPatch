/* Runtime dump - GEOAddress
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying>
{
    NSMutableArray * _formattedAddressLines;
    int _formattedAddressType;
    GEOStructuredAddress * _structuredAddress;
    struct ? _has;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) NSMutableArray * formattedAddressLines;
@property (readonly, nonatomic) char hasStructuredAddress;
@property (retain, nonatomic) GEOStructuredAddress * structuredAddress;
@property (nonatomic) char hasFormattedAddressType;
@property (nonatomic) int formattedAddressType;

+ (NSData *)geoAddressForPlaceData:(NSData *)arg0;

- (NSString *)singleLineAddress;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOAddress *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setFormattedAddressLines:(NSMutableArray *)arg0;
- (NSMutableArray *)formattedAddressLines;
- (GEOAddress *)initWithAddressString:(NSString *)arg0;
- (NSDictionary *)addressDictionary;
- (NSString *)bestName;
- (void)addFormattedAddressLine:(id)arg0;
- (unsigned int)formattedAddressLinesCount;
- (void)clearFormattedAddressLines;
- (NSObject *)formattedAddressLineAtIndex:(unsigned int)arg0;
- (int)formattedAddressType;
- (void)setFormattedAddressType:(int)arg0;
- (void)setHasFormattedAddressType:(char)arg0;
- (char)hasFormattedAddressType;
- (GEOAddress *)initWithUrlRepresentation:(NSDictionary *)arg0;
- (NSDictionary *)urlRepresentation;
- (char)_isEquivalentURLRepresentationTo:(id)arg0;
- (void)setStructuredAddress:(GEOStructuredAddress *)arg0;
- (char)hasStructuredAddress;
- (GEOStructuredAddress *)structuredAddress;
- (GEOAddress *)initWithAddressDictionary:(NSDictionary *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
