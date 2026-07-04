/* Runtime dump - MPMediaPropertyPredicate
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPropertyPredicate : MPMediaPredicate <MPPProtobufferCoding>
{
    NSString * _property;
    id _value;
    int _comparisonType;
}

@property (copy, nonatomic) NSString * property;
@property (copy, nonatomic) id value;
@property (nonatomic) int comparisonType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MPMediaPropertyPredicate *)predicateWithValue:(MPPMediaPredicateValue *)arg0 forProperty:(NSString *)arg1;
+ (MPMediaPropertyPredicate *)predicateWithValue:(MPPMediaPredicateValue *)arg0 forProperty:(NSString *)arg1 comparisonType:(int)arg2;

- (MPMediaPropertyPredicate *)initWithProtobufferDecodableObject:(NSObject *)arg0;
- (NSObject *)protobufferEncodableObject;
- (id)descriptionOfValue:(id)arg0 forProperty:(NSString *)arg1;
- (int)comparisonType;
- (void)setComparisonType:(int)arg0;
- (NSObject *)ML3PredicateForContainer;
- (NSObject *)ML3PredicateForTrack;
- (NSObject *)_ML3PredicateForML3EntityProperty:(NSObject *)arg0;
- (MPMediaPropertyPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (void).cxx_destruct;
- (NSString *)property;
- (void)setProperty:(NSString *)arg0;

@end
