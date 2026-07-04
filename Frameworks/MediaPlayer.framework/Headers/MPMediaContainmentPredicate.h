/* Runtime dump - MPMediaContainmentPredicate
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaContainmentPredicate : MPMediaPredicate
{
    NSString * _property;
    NSSet * _values;
}

@property (readonly, copy, nonatomic) NSString * property;
@property (readonly, copy, nonatomic) NSSet * values;

+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 values:(NSSet *)arg1;

- (NSObject *)ML3PredicateForContainer;
- (NSObject *)ML3PredicateForTrack;
- (NSObject *)_ML3PredicateForEntityClass:(Class)arg0;
- (MPMediaContainmentPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSSet *)values;
- (void).cxx_destruct;
- (NSString *)property;

@end
