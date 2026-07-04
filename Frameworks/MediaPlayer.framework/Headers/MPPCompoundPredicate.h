/* Runtime dump - MPPCompoundPredicate
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPCompoundPredicate : PBCodable <NSCopying>
{
    NSMutableArray * _predicates;
}

@property (retain, nonatomic) NSMutableArray * predicates;

- (void)addPredicates:(id)arg0;
- (unsigned int)predicatesCount;
- (void)clearPredicates;
- (NSObject *)predicatesAtIndex:(unsigned int)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MPPCompoundPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setPredicates:(NSMutableArray *)arg0;
- (NSMutableArray *)predicates;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
