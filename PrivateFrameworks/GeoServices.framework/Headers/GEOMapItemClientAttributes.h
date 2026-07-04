/* Runtime dump - GEOMapItemClientAttributes
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemClientAttributes : PBCodable <NSCopying>
{
    GEOMapItemAddressBookAttributes * _addressBookAttributes;
    GEOMapItemRoutineAttributes * _routineAttributes;
}

@property (readonly, nonatomic) char hasAddressBookAttributes;
@property (retain, nonatomic) GEOMapItemAddressBookAttributes * addressBookAttributes;
@property (readonly, nonatomic) char hasRoutineAttributes;
@property (retain, nonatomic) GEOMapItemRoutineAttributes * routineAttributes;

+ (GEOMapItemClientAttributes *)clientAttributesCopyForSharing:(id)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOMapItemClientAttributes *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setRoutineAttributes:(GEOMapItemRoutineAttributes *)arg0;
- (GEOMapItemAddressBookAttributes *)addressBookAttributes;
- (char)hasAddressBookAttributes;
- (char)hasRoutineAttributes;
- (GEOMapItemRoutineAttributes *)routineAttributes;
- (void)setAddressBookAttributes:(GEOMapItemAddressBookAttributes *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
