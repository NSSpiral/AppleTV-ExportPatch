/* Runtime dump - ATVNetworkStatisticsMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVRouteDelegate;

@class ATVRoute;
@interface ATVNetworkStatisticsMonitor : NSObject <ATVRouteDelegate>
{
    NSDictionary * _tcpStatistics;
    NSDictionary * _ipStatistics;
    NSDictionary * _interfaceStatistics;
    NSTimer * _monitorTimer;
    int _packetsReceived;
    int _inputErrors;
    int _packetsSent;
    int _outputErrors;
    int _bytesReceived;
    int _bytesSent;
    int _packetsDropped;
    char _shouldIncludeIPStats;
    char _shouldIncludeInterfaceStats;
    NSMutableArray * _addedRoutes;
    struct __NStatManager * _statManager;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property char shouldIncludeIPStats;
@property char shouldIncludeInterfaceStats;
@property (readonly) int packetsReceived;
@property (readonly) int inputErrors;
@property (readonly) int packetsSent;
@property (readonly) int outputErrors;
@property (readonly) int bytesReceived;
@property (readonly) int bytesSent;
@property (readonly) int packetsDropped;

- (void)startRouteMonitoring;
- (NSObject *)cumulativeDefaultRouteStatistics;
- (void)stopRouteMonitoring;
- (void)gatherStats;
- (NSDictionary *)tcpStatistics;
- (void)resetStats;
- (void)updateRouteCountsForRoutes:(id)arg0;
- (id)_defaultRoutes;
- (id)_outboundRoutes;
- (void)_startRouteMonitoring;
- (void)_stopRouteMonitoring;
- (void)_gatherNetStatistics;
- (NSDictionary *)ipStatistics;
- (NSDictionary *)interfaceStatistics;
- (void)updateRouteCounts;
- (void)updateRouteCountsForDefaultRoute;
- (NSObject *)activeRouteStatistics;
- (NSObject *)activeDefaultRouteStatistics;
- (NSObject *)cumulativeRouteStatistics;
- (NSString *)routeStatisticsForHost:(NSString *)arg0;
- (char)shouldIncludeIPStats;
- (void)setShouldIncludeIPStats:(char)arg0;
- (char)shouldIncludeInterfaceStats;
- (void)setShouldIncludeInterfaceStats:(char)arg0;
- (int)inputErrors;
- (int)outputErrors;
- (int)packetsDropped;
- (void)_gatherTCPStatistics;
- (void)_gatherIPStatistics;
- (void)_gatherInterfaceStatistics;
- (void)_routeAdded:(struct __NStatSource *)arg0;
- (void)routeRemoved:(ATVRoute *)arg0;
- (void)dealloc;
- (ATVNetworkStatisticsMonitor *)init;
- (void)stopMonitoring;
- (void)startMonitoring;
- (int)bytesSent;
- (int)packetsSent;
- (int)bytesReceived;
- (int)packetsReceived;

@end
