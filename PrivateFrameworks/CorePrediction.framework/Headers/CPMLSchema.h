/* Runtime dump - CPMLSchema
 * Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@interface CPMLSchema : NSObject
{
    int yColumnPosition;
    NSMutableString * schemaHeader;
    NSMutableString * schemaHeaderWithType;
    NSMutableArray * attribute;
    NSMutableArray * schemaHDef;
    NSMutableArray * indexColumnList;
    NSMutableArray * nsRemapTable;
    NSMutableArray * schema;
    NSMutableArray * availableOptions;
}

@property (readonly, nonatomic) NSMutableArray * attribute;
@property (readonly, nonatomic) NSMutableArray * indexColumnList;
@property (readonly, nonatomic) NSMutableString * schemaHeader;
@property (readonly, nonatomic) NSMutableString * schemaHeaderWithType;
@property (readonly, nonatomic) NSMutableArray * nsRemapTable;
@property (readonly, nonatomic) NSMutableArray * availableOptions;

- (NSMutableArray *)attribute;
- (CPMLSchema *)init:(id)arg0;
- (void).cxx_destruct;
- (CPMLSchema *)initWithPlist:(NSMutableDictionary *)arg0;
- (NSMutableArray *)availableOptions;
- (unsigned int)getTotalAttributes;
- (int)getYColumnPosition;
- (int)getSchemaType:(unsigned int)arg0;
- (NSString *)getColumnName:(unsigned int)arg0;
- (int)getVectorContent:(unsigned int)arg0;
- (NSMutableString *)schemaHeaderWithType;
- (NSMutableArray *)indexColumnList;
- (char)isStringType:(unsigned int)arg0;
- (char)isVectorType:(unsigned int)arg0;
- (int)getColumnPosition:(NSObject *)arg0;
- (char)isRealType:(unsigned int)arg0;
- (char)isIntType:(unsigned int)arg0;
- (NSMutableArray *)nsRemapTable;
- (char)isColumnContinous:(unsigned long)arg0;
- (char)isNumType:(unsigned int)arg0;
- (char)hasOptions:(unsigned int)arg0;
- (NSMutableString *)schemaHeader;

@end
