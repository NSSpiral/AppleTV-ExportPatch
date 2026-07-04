/* Runtime dump - GEOPDIndexQueryNode
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDIndexQueryNode : PBCodable <NSCopying>
{
    NSString * _field;
    NSMutableArray * _operands;
    int _type;
    NSString * _value;
}

@property (nonatomic) int type;
@property (readonly, nonatomic) char hasField;
@property (retain, nonatomic) NSString * field;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) NSString * value;
@property (retain, nonatomic) NSMutableArray * operands;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (GEOPDIndexQueryNode *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasValue;
- (void)setField:(NSString *)arg0;
- (char)hasField;
- (NSString *)field;
- (void)setOperands:(NSMutableArray *)arg0;
- (unsigned int)operandsCount;
- (void)clearOperands;
- (NSMutableArray *)operands;
- (void)addOperand:(id)arg0;
- (NSObject *)operandAtIndex:(unsigned int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
