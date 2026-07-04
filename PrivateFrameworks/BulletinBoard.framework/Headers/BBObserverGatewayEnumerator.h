/* Runtime dump - BBObserverGatewayEnumerator
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverGatewayEnumerator : NSObject
{
    char _cancelled;
    NSArray * _gateways;
    BBBulletin * _bulletin;
    unsigned int _feeds;
    NSMutableSet * _gatewaysPlayedLightsAndSirens;
    double _gatewayTimeout;
}

@property (copy, nonatomic) NSArray * gateways;
@property (retain, nonatomic) BBBulletin * bulletin;
@property (nonatomic) unsigned int feeds;
@property (nonatomic) double gatewayTimeout;
@property (copy, nonatomic) NSMutableSet * gatewaysPlayedLightsAndSirens;

- (void)cancel;
- (void)dealloc;
- (BBObserverGatewayEnumerator *)init;
- (BBBulletin *)bulletin;
- (unsigned int)feeds;
- (void)setBulletin:(BBBulletin *)arg0;
- (void)setFeeds:(unsigned int)arg0;
- (void)setGateways:(NSArray *)arg0;
- (void)setGatewayTimeout:(double)arg0;
- (void)enumerateWithCompletion:(id /* block */)arg0;
- (void)attemptNextGatewayInEnumerator:(NSEnumerator *)arg0 playLightsAndSirens:(char)arg1 completion:(id /* block */)arg2;
- (void)sendToDefaultGatewayToPlayLightsAndSirens:(char)arg0;
- (id)defaultGateway;
- (NSArray *)gateways;
- (double)gatewayTimeout;
- (NSMutableSet *)gatewaysPlayedLightsAndSirens;
- (void)setGatewaysPlayedLightsAndSirens:(NSMutableSet *)arg0;

@end
