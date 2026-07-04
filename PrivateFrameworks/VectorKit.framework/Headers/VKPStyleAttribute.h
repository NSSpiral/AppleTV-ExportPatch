/* Runtime dump - VKPStyleAttribute
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPStyleAttribute : PBCodable <NSCopying>
{
    struct ? _intValues;
    struct ? _longIntValues;
    int _key;
    int _score;
    struct ? _has;
}

@property (nonatomic) int key;
@property (readonly, nonatomic) unsigned int intValuesCount;
@property (readonly, nonatomic) int * intValues;
@property (nonatomic) char hasScore;
@property (nonatomic) int score;
@property (readonly, nonatomic) unsigned int longIntValuesCount;
@property (readonly, nonatomic) unsigned long long * longIntValues;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)key;
- (VKPStyleAttribute *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setKey:(int)arg0;
- (int)score;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (unsigned int)intValuesCount;
- (void)clearIntValues;
- (int)intValueAtIndex:(unsigned int)arg0;
- (void)addIntValue:(int)arg0;
- (unsigned int)longIntValuesCount;
- (void)clearLongIntValues;
- (unsigned long long)longIntValueAtIndex:(unsigned int)arg0;
- (void)addLongIntValue:(unsigned long long)arg0;
- (int *)intValues;
- (void)setIntValues:(int *)arg0 count:(unsigned int)arg1;
- (void)setScore:(int)arg0;
- (void)setHasScore:(char)arg0;
- (char)hasScore;
- (unsigned long long *)longIntValues;
- (void)setLongIntValues:(unsigned long long *)arg0 count:(unsigned int)arg1;

@end
