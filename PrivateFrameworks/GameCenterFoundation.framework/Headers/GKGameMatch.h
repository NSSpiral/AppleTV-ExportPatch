/* Runtime dump - GKGameMatch
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGameMatch : NSObject
{
    GKRecentMatchInternal * _internal;
    GKGame * _game;
    GKPlayer * _player;
}

@property (readonly, nonatomic) GKPlayer * player;
@property (readonly, nonatomic) GKGame * game;
@property (retain, nonatomic) NSDate * date;
@property (retain) GKRecentMatchInternal * internal;

+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKGameMatch *)instanceMethodSignatureForSelector:(SEL)arg0;

- (GKRecentMatchInternal *)internal;
- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (GKGameMatch *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (void)setInternal:(GKRecentMatchInternal *)arg0;
- (GKGameMatch *)initWithInternalRepresentation:(GKRecentMatchInternal *)arg0 game:(GKGame *)arg1;
- (GKGame *)game;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;
- (GKPlayer *)player;

@end
