/* Runtime dump - MPPSearchStringPredicate
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPSearchStringPredicate : PBCodable <NSCopying>
{
    NSMutableArray * _properties;
    NSString * _searchString;
}

@property (readonly, nonatomic) char hasSearchString;
@property (retain, nonatomic) NSString * searchString;
@property (retain, nonatomic) NSMutableArray * properties;

- (void)addProperties:(NSDictionary *)arg0;
- (unsigned int)propertiesCount;
- (void)clearProperties;
- (NSObject *)propertiesAtIndex:(unsigned int)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MPPSearchStringPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)searchString;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setProperties:(NSMutableArray *)arg0;
- (NSMutableArray *)properties;
- (void)setSearchString:(NSString *)arg0;
- (char)hasSearchString;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
