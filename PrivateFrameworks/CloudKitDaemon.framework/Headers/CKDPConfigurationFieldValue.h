/* Runtime dump - CKDPConfigurationFieldValue
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPConfigurationFieldValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _longValue;
    NSData * _bytesValue;
    NSMutableArray * _fieldValues;
    NSMutableArray * _listValues;
    NSString * _stringValue;
    int _type;
    char _boolValue;
    struct ? _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasBytesValue;
@property (retain, nonatomic) NSData * bytesValue;
@property (nonatomic) char hasBoolValue;
@property (nonatomic) char boolValue;
@property (nonatomic) char hasLongValue;
@property (nonatomic) long long longValue;
@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString * stringValue;
@property (retain, nonatomic) NSMutableArray * fieldValues;
@property (retain, nonatomic) NSMutableArray * listValues;

- (char)boolValue;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)doubleValue;
- (void)setType:(int)arg0;
- (int)type;
- (CKDPConfigurationFieldValue *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (long long)longValue;
- (void)setBytesValue:(NSData *)arg0;
- (unsigned int)listValuesCount;
- (void)clearListValues;
- (char)hasBytesValue;
- (void)setDoubleValue:(double)arg0;
- (void)setHasDoubleValue:(char)arg0;
- (char)hasDoubleValue;
- (char)hasStringValue;
- (NSData *)bytesValue;
- (NSMutableArray *)listValues;
- (void)setListValues:(NSMutableArray *)arg0;
- (void)addFieldValues:(NSArray *)arg0;
- (void)addListValues:(NSArray *)arg0;
- (unsigned int)fieldValuesCount;
- (void)clearFieldValues;
- (NSObject *)fieldValuesAtIndex:(unsigned int)arg0;
- (NSObject *)listValuesAtIndex:(unsigned int)arg0;
- (void)setBoolValue:(char)arg0;
- (void)setHasBoolValue:(char)arg0;
- (char)hasBoolValue;
- (void)setLongValue:(long long)arg0;
- (void)setHasLongValue:(char)arg0;
- (char)hasLongValue;
- (NSMutableArray *)fieldValues;
- (void)setFieldValues:(NSMutableArray *)arg0;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
