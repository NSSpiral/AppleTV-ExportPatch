/* Runtime dump - CKDPRecordFieldDerivedField
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordFieldDerivedField : PBCodable <NSCopying>
{
    CKDPRecordFieldIdentifier * _aggregatedField;
    NSMutableArray * _aggregatedTypes;
    int _aggregationFunction;
    NSMutableArray * _filters;
    CKDPRecordFieldIdentifier * _groupByField;
    CKDPRecordFieldIdentifier * _identifier;
    NSMutableArray * _targetTypes;
    struct ? _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) CKDPRecordFieldIdentifier * identifier;
@property (retain, nonatomic) NSMutableArray * aggregatedTypes;
@property (retain, nonatomic) NSMutableArray * targetTypes;
@property (retain, nonatomic) NSMutableArray * filters;
@property (readonly, nonatomic) char hasAggregatedField;
@property (retain, nonatomic) CKDPRecordFieldIdentifier * aggregatedField;
@property (readonly, nonatomic) char hasGroupByField;
@property (retain, nonatomic) CKDPRecordFieldIdentifier * groupByField;
@property (nonatomic) char hasAggregationFunction;
@property (nonatomic) int aggregationFunction;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordFieldIdentifier *)identifier;
- (CKDPRecordFieldDerivedField *)copyWithZone:(struct _NSZone *)arg0;
- (void)setFilters:(NSMutableArray *)arg0;
- (void)setIdentifier:(CKDPRecordFieldIdentifier *)arg0;
- (NSMutableArray *)filters;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasIdentifier;
- (void)addFilters:(id)arg0;
- (unsigned int)filtersCount;
- (void)clearFilters;
- (NSObject *)filtersAtIndex:(unsigned int)arg0;
- (void)addAggregatedTypes:(NSArray *)arg0;
- (void)addTargetTypes:(NSArray *)arg0;
- (unsigned int)aggregatedTypesCount;
- (void)clearAggregatedTypes;
- (NSObject *)aggregatedTypesAtIndex:(unsigned int)arg0;
- (unsigned int)targetTypesCount;
- (void)clearTargetTypes;
- (NSObject *)targetTypesAtIndex:(unsigned int)arg0;
- (void)setAggregatedField:(CKDPRecordFieldIdentifier *)arg0;
- (void)setGroupByField:(CKDPRecordFieldIdentifier *)arg0;
- (char)hasAggregatedField;
- (char)hasGroupByField;
- (void)setAggregationFunction:(int)arg0;
- (void)setHasAggregationFunction:(char)arg0;
- (char)hasAggregationFunction;
- (NSMutableArray *)aggregatedTypes;
- (void)setAggregatedTypes:(NSMutableArray *)arg0;
- (NSMutableArray *)targetTypes;
- (void)setTargetTypes:(NSMutableArray *)arg0;
- (CKDPRecordFieldIdentifier *)aggregatedField;
- (CKDPRecordFieldIdentifier *)groupByField;
- (int)aggregationFunction;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
