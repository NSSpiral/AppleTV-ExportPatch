/* Runtime dump - BBSyncDelayedDismissal
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSyncDelayedDismissal : NSObject
{
    BBBulletin * _bulletin;
    unsigned int _feeds;
}

@property (retain, nonatomic) BBBulletin * bulletin;
@property (nonatomic) unsigned int feeds;

- (void)dealloc;
- (BBBulletin *)bulletin;
- (unsigned int)feeds;
- (void)setBulletin:(BBBulletin *)arg0;
- (void)setFeeds:(unsigned int)arg0;

@end
