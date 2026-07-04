/* Runtime dump - SBBulletinEvent
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBBulletinEvent : NSObject
{
    NSString * _bulletinID;
    id _handler;
}

+ (SBBulletinEvent *)eventForBulletin:(id)arg0 block:(id /* block */)arg1;

- (void)dealloc;
- (NSString *)bulletinID;
- (void)execute;
- (SBBulletinEvent *)initWithBulletin:(BBBulletin *)arg0 block:(id /* block */)arg1;

@end
