/* Runtime dump - GEONameInfoList
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONameInfoList : PBCodable <NSCopying>
{
    NSMutableArray * _nameInfos;
}

@property (retain, nonatomic) NSMutableArray * nameInfos;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEONameInfoList *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSMutableArray *)nameInfos;
- (void)setNameInfos:(NSMutableArray *)arg0;
- (void)addNameInfo:(NSDictionary *)arg0;
- (unsigned int)nameInfosCount;
- (void)clearNameInfos;
- (NSObject *)nameInfoAtIndex:(unsigned int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
