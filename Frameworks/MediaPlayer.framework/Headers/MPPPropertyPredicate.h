/* Runtime dump - MPPPropertyPredicate
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPPropertyPredicate : PBCodable <NSCopying>
{
    int _comparisonType;
    NSString * _property;
    MPPMediaPredicateValue * _value;
    struct ? _has;
}

@property (readonly, nonatomic) char hasProperty;
@property (retain, nonatomic) NSString * property;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) MPPMediaPredicateValue * value;
@property (nonatomic) char hasComparisonType;
@property (nonatomic) int comparisonType;

- (int)comparisonType;
- (void)setComparisonType:(int)arg0;
- (char)hasProperty;
- (char)hasComparisonType;
- (void)setHasComparisonType:(char)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MPPMediaPredicateValue *)value;
- (void)setValue:(MPPMediaPredicateValue *)arg0;
- (MPPPropertyPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasValue;
- (NSString *)property;
- (void)setProperty:(NSString *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
