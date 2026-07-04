/* Runtime dump - GKConcernInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKConcernInternal : GKInternalRepresentation
{
    GKPlayerInternal * _player;
    NSString * _message;
    unsigned int _concernID;
}

@property (retain, nonatomic) GKPlayerInternal * player;
@property (nonatomic) unsigned int concernID;
@property (copy, nonatomic) NSString * message;

+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (unsigned int)concernID;
- (void)setConcernID:(unsigned int)arg0;
- (void)setPlayer:(GKPlayerInternal *)arg0;
- (GKPlayerInternal *)player;

@end
