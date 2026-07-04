/* Runtime dump - BBBulletinTransaction
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinTransaction : NSObject
{
    NSString * _bulletinID;
    unsigned int _transactionID;
}

@property (readonly, copy, nonatomic) NSString * bulletinID;
@property (readonly, nonatomic) unsigned int transactionID;

+ (NSObject *)transactionWithBulletinID:(NSString *)arg0;

- (void)dealloc;
- (NSString *)description;
- (NSString *)bulletinID;
- (unsigned int)transactionID;
- (unsigned int)incrementTransactionID;
- (BBBulletinTransaction *)initWithBulletinID:(NSString *)arg0;

@end
