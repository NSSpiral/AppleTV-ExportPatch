/* Runtime dump - GKRecentMatchInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKRecentMatchInternal : GKInternalRepresentation
{
    GKPlayerInternal * _player;
    GKGameRecordInternal * _game;
    NSDate * _date;
}

@property (retain, nonatomic) GKPlayerInternal * player;
@property (retain, nonatomic) GKGameRecordInternal * game;
@property (retain, nonatomic) NSDate * date;

+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSDate *)date;
- (void)setDate:(NSDate *)arg0;
- (GKGameRecordInternal *)game;
- (void)setGame:(GKGameRecordInternal *)arg0;
- (void)setPlayer:(GKPlayerInternal *)arg0;
- (GKPlayerInternal *)player;

@end
