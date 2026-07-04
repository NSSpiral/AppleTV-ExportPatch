/* Runtime dump - BBObserverBulletinUpdateAdd
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverBulletinUpdateAdd : BBObserverBulletinUpdate
{
    char _shouldPlayLightsAndSirens;
}

@property (readonly, nonatomic) char shouldPlayLightsAndSirens;

+ (char)supportsSecureCoding;

- (BBObserverBulletinUpdateAdd *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)shouldPlayLightsAndSirens;
- (BBObserverBulletinUpdateAdd *)initWithBulletin:(BBBulletin *)arg0 updateType:(int)arg1 transactionID:(unsigned int)arg2;
- (BBObserverBulletinUpdateAdd *)initWithBulletin:(BBBulletin *)arg0 updateType:(int)arg1 transactionID:(unsigned int)arg2 shouldPlayLightsAndSirens:(char)arg3;

@end
