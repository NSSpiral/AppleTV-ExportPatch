/* Runtime dump - MPPMediaQuery
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPMediaQuery : PBCodable <NSCopying>
{
    int _entityOrder;
    NSMutableArray * _filterPredicates;
    int _groupingType;
    NSMutableArray * _staticEntityIdentifiers;
    int _staticEntityType;
    char _filteringDisabled;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * filterPredicates;
@property (nonatomic) char hasGroupingType;
@property (nonatomic) int groupingType;
@property (nonatomic) char hasFilteringDisabled;
@property (nonatomic) char filteringDisabled;
@property (nonatomic) char hasEntityOrder;
@property (nonatomic) int entityOrder;
@property (retain, nonatomic) NSMutableArray * staticEntityIdentifiers;
@property (nonatomic) char hasStaticEntityType;
@property (nonatomic) int staticEntityType;

- (void)setFilterPredicates:(NSMutableArray *)arg0;
- (int)groupingType;
- (unsigned int)filterPredicatesCount;
- (NSMutableArray *)filterPredicates;
- (int)entityOrder;
- (char)filteringDisabled;
- (unsigned int)staticEntityIdentifiersCount;
- (NSMutableArray *)staticEntityIdentifiers;
- (int)staticEntityType;
- (void)addFilterPredicates:(id)arg0;
- (void)setGroupingType:(int)arg0;
- (void)setFilteringDisabled:(char)arg0;
- (void)setEntityOrder:(int)arg0;
- (void)setStaticEntityType:(int)arg0;
- (void)addStaticEntityIdentifiers:(id)arg0;
- (void)setStaticEntityIdentifiers:(NSMutableArray *)arg0;
- (void)clearFilterPredicates;
- (NSObject *)filterPredicatesAtIndex:(unsigned int)arg0;
- (char)hasGroupingType;
- (char)hasFilteringDisabled;
- (char)hasEntityOrder;
- (void)clearStaticEntityIdentifiers;
- (NSObject *)staticEntityIdentifiersAtIndex:(unsigned int)arg0;
- (char)hasStaticEntityType;
- (void)setHasGroupingType:(char)arg0;
- (void)setHasFilteringDisabled:(char)arg0;
- (void)setHasEntityOrder:(char)arg0;
- (void)setHasStaticEntityType:(char)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MPPMediaQuery *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
