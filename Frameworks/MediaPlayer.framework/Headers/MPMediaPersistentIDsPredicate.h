/* Runtime dump - MPMediaPersistentIDsPredicate
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPersistentIDsPredicate : MPMediaPredicate <MPPProtobufferCoding>
{
    long long * _persistentIDs;
    char _shouldContain;
    unsigned int _count;
}

@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) long long * persistentIDs;
@property (readonly, nonatomic) char shouldContain;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MPMediaPersistentIDsPredicate *)predicateWithPersistentIDs:(long long *)arg0 count:(long long)arg1 shouldContain:(unsigned int)arg2;

- (MPMediaPersistentIDsPredicate *)initWithProtobufferDecodableObject:(NSObject *)arg0;
- (NSObject *)protobufferEncodableObject;
- (long long *)persistentIDs;
- (NSObject *)ML3PredicateForContainer;
- (NSObject *)ML3PredicateForTrack;
- (NSObject *)_ML3PredicateForEntityClass:(Class)arg0;
- (void)dealloc;
- (MPMediaPersistentIDsPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (char)shouldContain;

@end
