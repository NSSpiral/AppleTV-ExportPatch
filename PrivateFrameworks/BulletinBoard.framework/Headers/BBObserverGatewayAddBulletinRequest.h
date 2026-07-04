/* Runtime dump - BBObserverGatewayAddBulletinRequest
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverGatewayAddBulletinRequest : NSObject
{
    NSString * _bulletinID;
    NSString * _sectionID;
    NSDate * _timeout;
    id _timeoutHandler;
}

@property (retain, nonatomic) NSString * bulletinID;
@property (retain, nonatomic) NSString * sectionID;
@property (retain, nonatomic) NSDate * timeout;
@property (copy, nonatomic) id timeoutHandler;

- (void)setSectionID:(NSString *)arg0;
- (void)dealloc;
- (void)setBulletinID:(NSString *)arg0;
- (NSString *)bulletinID;
- (id /* block */)timeoutHandler;
- (void)setTimeoutHandler:(id /* block */)arg0;
- (NSString *)sectionID;
- (void)setTimeout:(NSDate *)arg0;
- (NSDate *)timeout;

@end
