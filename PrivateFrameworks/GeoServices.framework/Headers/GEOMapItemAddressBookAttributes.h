/* Runtime dump - GEOMapItemAddressBookAttributes
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying>
{
    int _addressType;
    NSString * _name;
    NSString * _spokenName;
    char _isMe;
    struct ? _has;
}

@property (nonatomic) char hasAddressType;
@property (nonatomic) int addressType;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;
@property (readonly, nonatomic) char hasSpokenName;
@property (retain, nonatomic) NSString * spokenName;
@property (nonatomic) char hasIsMe;
@property (nonatomic) char isMe;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (GEOMapItemAddressBookAttributes *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setSpokenName:(NSString *)arg0;
- (char)hasSpokenName;
- (NSString *)spokenName;
- (void)setIsMe:(char)arg0;
- (int)addressType;
- (char)isMe;
- (void)setAddressType:(int)arg0;
- (void)setHasAddressType:(char)arg0;
- (char)hasAddressType;
- (void)setHasIsMe:(char)arg0;
- (char)hasIsMe;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;

@end
