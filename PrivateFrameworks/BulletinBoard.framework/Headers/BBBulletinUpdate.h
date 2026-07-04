/* Runtime dump - BBBulletinUpdate
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinUpdate : NSObject
{
    char _shouldSync;
    BBBulletin * _bulletin;
    int _type;
    unsigned int _feeds;
}

@property (readonly, retain, nonatomic) BBBulletin * bulletin;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) char shouldSync;
@property (readonly, nonatomic) unsigned int feeds;

+ (BBBulletinUpdate *)modifyForBulletin:(id)arg0 feeds:(unsigned int)arg1;
+ (BBBulletinUpdate *)removeForBulletin:(BBBulletin *)arg0 feeds:(unsigned int)arg1 shouldSync:(char)arg2;

- (void)dealloc;
- (int)type;
- (BBBulletin *)bulletin;
- (unsigned int)feeds;
- (char)shouldSync;
- (NSString *)typeDescription;
- (BBBulletinUpdate *)initWithBulletin:(BBBulletin *)arg0 feeds:(unsigned int)arg1 type:(int)arg2 shouldSync:(char)arg3;

@end
