/* Runtime dump - MIPSmartPlaylistInfo
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPSmartPlaylistInfo : PBCodable <NSCopying>
{
    unsigned int _evaluationOrder;
    int _limitKind;
    unsigned int _limitOrder;
    unsigned int _limitValue;
    NSData * _smartCriteria;
    char _dynamic;
    char _enabledItemsOnly;
    char _filtered;
    char _genius;
    char _limited;
    char _reverseLimitOrder;
    struct ? _has;
}

@property (nonatomic) char hasDynamic;
@property (nonatomic) char dynamic;
@property (nonatomic) char hasFiltered;
@property (nonatomic) char filtered;
@property (nonatomic) char hasLimited;
@property (nonatomic) char limited;
@property (nonatomic) char hasLimitKind;
@property (nonatomic) int limitKind;
@property (nonatomic) char hasEvaluationOrder;
@property (nonatomic) unsigned int evaluationOrder;
@property (nonatomic) char hasLimitOrder;
@property (nonatomic) unsigned int limitOrder;
@property (nonatomic) char hasLimitValue;
@property (nonatomic) unsigned int limitValue;
@property (nonatomic) char hasEnabledItemsOnly;
@property (nonatomic) char enabledItemsOnly;
@property (nonatomic) char hasReverseLimitOrder;
@property (nonatomic) char reverseLimitOrder;
@property (readonly, nonatomic) char hasSmartCriteria;
@property (retain, nonatomic) NSData * smartCriteria;
@property (nonatomic) char hasGenius;
@property (nonatomic) char genius;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MIPSmartPlaylistInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setDynamic:(char)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned int)limitValue;
- (void)setSmartCriteria:(NSData *)arg0;
- (void)setHasDynamic:(char)arg0;
- (char)hasDynamic;
- (void)setFiltered:(char)arg0;
- (void)setHasFiltered:(char)arg0;
- (char)hasFiltered;
- (void)setLimited:(char)arg0;
- (void)setHasLimited:(char)arg0;
- (char)hasLimited;
- (void)setLimitKind:(int)arg0;
- (void)setHasLimitKind:(char)arg0;
- (char)hasLimitKind;
- (void)setEvaluationOrder:(unsigned int)arg0;
- (void)setHasEvaluationOrder:(char)arg0;
- (char)hasEvaluationOrder;
- (void)setLimitOrder:(unsigned int)arg0;
- (void)setHasLimitOrder:(char)arg0;
- (char)hasLimitOrder;
- (void)setLimitValue:(unsigned int)arg0;
- (void)setHasLimitValue:(char)arg0;
- (char)hasLimitValue;
- (void)setEnabledItemsOnly:(char)arg0;
- (void)setHasEnabledItemsOnly:(char)arg0;
- (char)hasEnabledItemsOnly;
- (void)setReverseLimitOrder:(char)arg0;
- (void)setHasReverseLimitOrder:(char)arg0;
- (char)hasReverseLimitOrder;
- (char)hasSmartCriteria;
- (void)setGenius:(char)arg0;
- (void)setHasGenius:(char)arg0;
- (char)hasGenius;
- (char)dynamic;
- (char)filtered;
- (char)limited;
- (int)limitKind;
- (unsigned int)evaluationOrder;
- (unsigned int)limitOrder;
- (char)enabledItemsOnly;
- (char)reverseLimitOrder;
- (NSData *)smartCriteria;
- (char)genius;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
