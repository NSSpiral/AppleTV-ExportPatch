/* Runtime dump - VKPStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPStyle : PBCodable <NSCopying>
{
    struct ? _inherits;
    NSMutableArray * _attributes;
    NSData * _contents;
    NSString * _name;
    VKPStyleProperties * _properties;
    NSMutableArray * _zooms;
}

@property (readonly, nonatomic) unsigned int inheritsCount;
@property (readonly, nonatomic) unsigned int * inherits;
@property (retain, nonatomic) NSMutableArray * attributes;
@property (readonly, nonatomic) char hasProperties;
@property (retain, nonatomic) VKPStyleProperties * properties;
@property (retain, nonatomic) NSMutableArray * zooms;
@property (readonly, nonatomic) char hasContents;
@property (retain, nonatomic) NSData * contents;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (VKPStyle *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)contents;
- (void)setContents:(NSData *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSMutableArray *)attributes;
- (void)setProperties:(VKPStyleProperties *)arg0;
- (VKPStyleProperties *)properties;
- (void)setAttributes:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setZooms:(NSMutableArray *)arg0;
- (void)addAttributes:(NSDictionary *)arg0;
- (void)addZooms:(id)arg0;
- (unsigned int)inheritsCount;
- (void)clearInherits;
- (unsigned int)inheritAtIndex:(unsigned int)arg0;
- (void)addInherit:(unsigned int)arg0;
- (unsigned int)attributesCount;
- (void)clearAttributes;
- (NSObject *)attributesAtIndex:(unsigned int)arg0;
- (unsigned int)zoomsCount;
- (void)clearZooms;
- (NSObject *)zoomsAtIndex:(unsigned int)arg0;
- (unsigned int *)inherits;
- (void)setInherits:(unsigned int *)arg0 count:(unsigned int)arg1;
- (char)hasProperties;
- (char)hasContents;
- (char)hasName;
- (NSMutableArray *)zooms;

@end
