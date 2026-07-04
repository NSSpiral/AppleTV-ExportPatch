/* Runtime dump - BBObserverBulletinUpdate
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverBulletinUpdate : NSObject <NSSecureCoding>
{
    BBBulletin * _bulletin;
    unsigned int _transactionID;
    int _updateType;
}

@property (readonly, retain, nonatomic) BBBulletin * bulletin;
@property (readonly, nonatomic) int updateType;
@property (readonly, nonatomic) unsigned int transactionID;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (BBObserverBulletinUpdate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (BBBulletin *)bulletin;
- (unsigned int)transactionID;
- (int)updateType;
- (BBObserverBulletinUpdate *)initWithBulletin:(BBBulletin *)arg0 updateType:(int)arg1 transactionID:(unsigned int)arg2;

@end
