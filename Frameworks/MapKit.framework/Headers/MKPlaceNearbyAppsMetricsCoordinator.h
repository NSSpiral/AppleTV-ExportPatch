/* Runtime dump - MKPlaceNearbyAppsMetricsCoordinator
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceNearbyAppsMetricsCoordinator : NSObject
{
    SSMetricsController * _metricsController;
    char _controllerReady;
    NSMutableArray * _callbacks;
    SSURLBag * _urlBag;
    NSString * _pageContext;
    NSString * _topic;
}

@property (copy, nonatomic) NSString * topic;
@property (copy, nonatomic) NSString * pageContext;
@property (readonly, nonatomic) NSMutableArray * callbacks;
@property (readonly, nonatomic) SSURLBag * urlBag;
@property (nonatomic) char controllerReady;

- (MKPlaceNearbyAppsMetricsCoordinator *)initWithConfigurationIdentifier:(NSString *)arg0;
- (SSURLBag *)urlBag;
- (void)performCallbacks;
- (char)controllerReady;
- (void)getMetricsControllerWithCompletionHandler:(id /* block */)arg0;
- (void)setControllerReady:(char)arg0;
- (void)sendEvent:(NSObject *)arg0;
- (void).cxx_destruct;
- (NSString *)topic;
- (NSMutableArray *)callbacks;
- (void)setTopic:(NSString *)arg0;
- (void)setPageConfiguration:(NSDictionary *)arg0;
- (NSString *)pageContext;
- (void)setPageContext:(NSString *)arg0;

@end
