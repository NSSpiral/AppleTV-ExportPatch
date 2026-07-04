/* Runtime dump - MPMediaCompoundPredicate
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaCompoundPredicate : MPMediaPredicate <MPPProtobufferCoding>
{
    NSArray * _predicates;
}

@property (readonly, copy, nonatomic) NSArray * predicates;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MPMediaCompoundPredicate *)predicateMatchingPredicates:(id)arg0;

- (MPMediaCompoundPredicate *)initWithProtobufferDecodableObject:(NSObject *)arg0;
- (NSObject *)protobufferEncodableObject;
- (NSObject *)ML3PredicateForContainer;
- (NSObject *)ML3PredicateForTrack;
- (NSString *)_ML3PredicateForEntityTypeSelector:(SEL)arg0;
- (MPMediaCompoundPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (NSArray *)predicates;
- (MPMediaCompoundPredicate *)initWithPredicates:(NSArray *)arg0;

@end
