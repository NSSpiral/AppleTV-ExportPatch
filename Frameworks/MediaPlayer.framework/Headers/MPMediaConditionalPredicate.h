/* Runtime dump - MPMediaConditionalPredicate
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaConditionalPredicate : MPMediaPredicate <MPPProtobufferCoding>
{
    MPMediaPredicate * _conditionPredicate;
    MPMediaPredicate * _thenPredicate;
    MPMediaPredicate * _elsePredicate;
}

@property (readonly, copy, nonatomic) MPMediaPredicate * conditionPredicate;
@property (readonly, copy, nonatomic) MPMediaPredicate * thenPredicate;
@property (readonly, copy, nonatomic) MPMediaPredicate * elsePredicate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSPredicate *)predicateWithConditionPredicate:(MPMediaPredicate *)arg0 thenPredicate:(MPMediaPredicate *)arg1 elsePredicate:(MPMediaPredicate *)arg2;

- (MPMediaConditionalPredicate *)initWithProtobufferDecodableObject:(NSObject *)arg0;
- (NSObject *)protobufferEncodableObject;
- (NSObject *)ML3PredicateForContainer;
- (NSObject *)ML3PredicateForTrack;
- (NSString *)_ML3PredicateForEntityTypeSelector:(SEL)arg0;
- (void).cxx_destruct;
- (MPMediaConditionalPredicate *)initWithConditionPredicate:(MPMediaPredicate *)arg0 thenPredicate:(MPMediaPredicate *)arg1 elsePredicate:(MPMediaPredicate *)arg2;
- (MPMediaPredicate *)conditionPredicate;
- (MPMediaPredicate *)thenPredicate;
- (MPMediaPredicate *)elsePredicate;

@end
