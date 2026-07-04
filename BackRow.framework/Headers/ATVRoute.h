/* Runtime dump - ATVRoute
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVRoute : NSObject
{
    struct __NStatSource * _statSource;
    struct NStatCounts _statCounts;
    struct NStatCounts _previouStatCounts;
    unsigned long long _routeID;
    unsigned long long _parentRouteID;
    unsigned long long _gatewayID;
    struct sockaddr _hostAddress;
    id _gatewayAddress;
    NSString * _interfaceName;
    unsigned int _flags;
    <ATVRouteDelegate> * _delegate;
    NSString * _destinationIPAddress;
    NSString * _gatewayIPAddress;
}

@property <ATVRouteDelegate> * delegate;
@property (retain) NSString * interfaceName;
@property (retain) NSString * gatewayIPAddress;
@property (retain) NSString * destinationIPAddress;

- (void)updateCounts;
- (ATVRoute *)initWithStatSource:(struct __NStatSource *)arg0;
- (void)configureRoute;
- (void)setDestinationIPAddress:(NSString *)arg0;
- (void)setGatewayIPAddress:(NSString *)arg0;
- (NSString *)destinationIPAddress;
- (NSString *)gatewayIPAddress;
- (NSString *)cumulativeDescription;
- (NSDictionary *)cumulativeStatsDictionary;
- (NSString *)deltaDescription;
- (NSDictionary *)statsDictionary;
- (NSDictionary *)deltaStatsDictionary;
- (void)asyncUpdateCounts;
- (void)dealloc;
- (void)setDelegate:(<ATVRouteDelegate> *)arg0;
- (NSString *)description;
- (<ATVRouteDelegate> *)delegate;
- (void)setInterfaceName:(NSString *)arg0;
- (NSString *)interfaceName;

@end
