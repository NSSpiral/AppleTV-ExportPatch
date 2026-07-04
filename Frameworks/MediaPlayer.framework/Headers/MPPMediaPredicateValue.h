/* Runtime dump - MPPMediaPredicateValue
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPMediaPredicateValue : PBCodable <NSCopying>
{
    double _doublePredicateValue;
    long long _integerPredicateValue;
    NSData * _bytesPredicateValue;
    float _floatPredicateValue;
    NSString * _stringPredicateValue;
    int _type;
    char _boolPredicateValue;
    struct ? _has;
}

@property (nonatomic) int type;
@property (nonatomic) char hasIntegerPredicateValue;
@property (nonatomic) long long integerPredicateValue;
@property (nonatomic) char hasDoublePredicateValue;
@property (nonatomic) double doublePredicateValue;
@property (nonatomic) char hasFloatPredicateValue;
@property (nonatomic) float floatPredicateValue;
@property (nonatomic) char hasBoolPredicateValue;
@property (nonatomic) char boolPredicateValue;
@property (readonly, nonatomic) char hasStringPredicateValue;
@property (retain, nonatomic) NSString * stringPredicateValue;
@property (readonly, nonatomic) char hasBytesPredicateValue;
@property (retain, nonatomic) NSData * bytesPredicateValue;

- (long long)integerPredicateValue;
- (double)doublePredicateValue;
- (float)floatPredicateValue;
- (char)boolPredicateValue;
- (NSString *)stringPredicateValue;
- (NSData *)bytesPredicateValue;
- (void)setIntegerPredicateValue:(long long)arg0;
- (void)setFloatPredicateValue:(float)arg0;
- (void)setDoublePredicateValue:(double)arg0;
- (void)setStringPredicateValue:(NSString *)arg0;
- (void)setBytesPredicateValue:(NSData *)arg0;
- (char)hasIntegerPredicateValue;
- (char)hasDoublePredicateValue;
- (char)hasFloatPredicateValue;
- (char)hasBoolPredicateValue;
- (void)setBoolPredicateValue:(char)arg0;
- (char)hasStringPredicateValue;
- (char)hasBytesPredicateValue;
- (void)setHasIntegerPredicateValue:(char)arg0;
- (void)setHasDoublePredicateValue:(char)arg0;
- (void)setHasFloatPredicateValue:(char)arg0;
- (void)setHasBoolPredicateValue:(char)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (MPPMediaPredicateValue *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
