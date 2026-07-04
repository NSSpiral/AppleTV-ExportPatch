/* Runtime dump - VKPStyleContents
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPStyleContents : PBCodable <NSCopying>
{
    VKPStyleProperties * _properties;
    NSMutableArray * _zooms;
}

@property (readonly, nonatomic) char hasProperties;
@property (retain, nonatomic) VKPStyleProperties * properties;
@property (retain, nonatomic) NSMutableArray * zooms;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (VKPStyleContents *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setProperties:(VKPStyleProperties *)arg0;
- (VKPStyleProperties *)properties;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setZooms:(NSMutableArray *)arg0;
- (void)addZooms:(id)arg0;
- (unsigned int)zoomsCount;
- (void)clearZooms;
- (NSObject *)zoomsAtIndex:(unsigned int)arg0;
- (char)hasProperties;
- (NSMutableArray *)zooms;

@end
