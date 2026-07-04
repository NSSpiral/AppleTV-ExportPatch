/* Runtime dump - MPPPersistentIDsPredicate
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPPersistentIDsPredicate : PBCodable <NSCopying>
{
    struct ? _persistentIDs;
    char _shouldContain;
    struct ? _has;
}

@property (nonatomic) char hasShouldContain;
@property (nonatomic) char shouldContain;
@property (readonly, nonatomic) unsigned int persistentIDsCount;
@property (readonly, nonatomic) long long * persistentIDs;

- (unsigned int)persistentIDsCount;
- (long long *)persistentIDs;
- (void)setShouldContain:(char)arg0;
- (void)addPersistentIDs:(long long)arg0;
- (char)hasShouldContain;
- (void)clearPersistentIDs;
- (long long)persistentIDsAtIndex:(unsigned int)arg0;
- (void)setHasShouldContain:(char)arg0;
- (void)setPersistentIDs:(long long *)arg0 count:(unsigned int)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MPPPersistentIDsPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)shouldContain;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
