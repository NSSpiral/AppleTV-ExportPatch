/* Runtime dump - MPPConditionalPredicate
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPConditionalPredicate : PBCodable <NSCopying>
{
    MPPMediaPredicate * _conditionalPredicate;
    MPPMediaPredicate * _elsePredicate;
    MPPMediaPredicate * _thenPredicate;
}

@property (readonly, nonatomic) char hasConditionalPredicate;
@property (retain, nonatomic) MPPMediaPredicate * conditionalPredicate;
@property (readonly, nonatomic) char hasThenPredicate;
@property (retain, nonatomic) MPPMediaPredicate * thenPredicate;
@property (readonly, nonatomic) char hasElsePredicate;
@property (retain, nonatomic) MPPMediaPredicate * elsePredicate;

- (MPPMediaPredicate *)conditionalPredicate;
- (char)hasConditionalPredicate;
- (char)hasThenPredicate;
- (char)hasElsePredicate;
- (void)setConditionalPredicate:(MPPMediaPredicate *)arg0;
- (void)setThenPredicate:(MPPMediaPredicate *)arg0;
- (void)setElsePredicate:(MPPMediaPredicate *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MPPConditionalPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (MPPMediaPredicate *)thenPredicate;
- (MPPMediaPredicate *)elsePredicate;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
