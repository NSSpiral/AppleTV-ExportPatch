/* Runtime dump - CKDPQuery
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQuery : PBCodable <NSCopying>
{
    NSMutableArray * _filters;
    int _queryOperator;
    NSMutableArray * _sorts;
    NSMutableArray * _types;
    char _distinct;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * types;
@property (retain, nonatomic) NSMutableArray * filters;
@property (retain, nonatomic) NSMutableArray * sorts;
@property (nonatomic) char hasDistinct;
@property (nonatomic) char distinct;
@property (nonatomic) char hasQueryOperator;
@property (nonatomic) int queryOperator;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSMutableArray *)types;
- (CKDPQuery *)copyWithZone:(struct _NSZone *)arg0;
- (void)setFilters:(NSMutableArray *)arg0;
- (NSMutableArray *)filters;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addTypes:(NSArray *)arg0;
- (void)addFilters:(id)arg0;
- (void)addSorts:(id)arg0;
- (unsigned int)typesCount;
- (void)clearTypes;
- (NSObject *)typesAtIndex:(unsigned int)arg0;
- (unsigned int)filtersCount;
- (void)clearFilters;
- (NSObject *)filtersAtIndex:(unsigned int)arg0;
- (unsigned int)sortsCount;
- (void)clearSorts;
- (NSObject *)sortsAtIndex:(unsigned int)arg0;
- (void)setDistinct:(char)arg0;
- (void)setHasDistinct:(char)arg0;
- (char)hasDistinct;
- (int)queryOperator;
- (void)setQueryOperator:(int)arg0;
- (void)setHasQueryOperator:(char)arg0;
- (char)hasQueryOperator;
- (void)setTypes:(NSMutableArray *)arg0;
- (NSMutableArray *)sorts;
- (void)setSorts:(NSMutableArray *)arg0;
- (char)distinct;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
