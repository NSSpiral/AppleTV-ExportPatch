/* Runtime dump - SFAirDropBrowser
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropBrowser : NSObject
{
    char _didDelay;
    struct __SFBrowser * _browser;
    NSObject<OS_dispatch_source> * _timer;
    double _startTime;
    NSMutableDictionary * _nodes;
    NSArray * _people;
    <SFAirDropBrowserDelegate> * _delegate;
}

@property (readonly, nonatomic) NSArray * people;
@property (weak) <SFAirDropBrowserDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<SFAirDropBrowserDelegate> *)arg0;
- (SFAirDropBrowser *)init;
- (<SFAirDropBrowserDelegate> *)delegate;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (NSArray *)people;
- (void)updateDiscoveredPeople;
- (void)handleBrowserCallBack;

@end
