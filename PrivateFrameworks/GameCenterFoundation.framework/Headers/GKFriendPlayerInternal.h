/* Runtime dump - GKFriendPlayerInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal
{
    NSString * _status;
    NSDate * _lastPlayedDate;
    GKGameInternal * _lastPlayedGame;
}

+ (NSArray *)secureCodedPropertyKeys;

- (NSDate *)lastPlayedDate;
- (void)setLastPlayedDate:(NSDate *)arg0;
- (void)dealloc;
- (NSString *)status;
- (void)setStatus:(NSString *)arg0;
- (GKGameInternal *)lastPlayedGame;
- (int)defaultFamiliarity;
- (char)isFriend;
- (void)setLastPlayedGame:(GKGameInternal *)arg0;

@end
