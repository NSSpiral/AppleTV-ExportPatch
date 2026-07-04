/* Runtime dump - MPAVRoute
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoute : NSObject
{
    NSString * _routeName;
    char _picked;
    NSDictionary * _avRouteDescription;
    MPAVRoute * _wirelessDisplayRoute;
    int _displayRouteType;
    char _requiresPassword;
    NSString * _routeUID;
    int _routeType;
    int _pickableRouteType;
    int _routeSubtype;
}

@property (readonly, nonatomic) NSString * routeName;
@property (readonly, nonatomic) NSString * routeUID;
@property (readonly, nonatomic) int routeType;
@property (readonly, nonatomic) int pickableRouteType;
@property (readonly, nonatomic) int routeSubtype;
@property (readonly, nonatomic) MPAVRoute * wirelessDisplayRoute;
@property (readonly, nonatomic) char picked;
@property (readonly, nonatomic) char requiresPassword;
@property (readonly, nonatomic) int passwordType;
@property (readonly, nonatomic) char displayIsPicked;
@property (readonly, nonatomic) int displayRouteType;

- (NSString *)routeName;
- (char)displayIsPicked;
- (MPAVRoute *)wirelessDisplayRoute;
- (char)isPicked;
- (int)routeSubtype;
- (NSDictionary *)avRouteDescription;
- (int)pickableRouteType;
- (NSString *)routeUID;
- (NSString *)_initWithAVRouteDescription:(NSString *)arg0;
- (void)setRouteName:(NSString *)arg0;
- (void)setWirelessDisplayRoute:(MPAVRoute *)arg0;
- (void)setPicked:(char)arg0;
- (char)requiresPassword;
- (int)passwordType;
- (void)_routingControllerPickedRouteNotification:(NSNotification *)arg0;
- (void)setAVRouteDescription:(NSString *)arg0;
- (int)displayRouteType;
- (void)setDisplayRouteType:(int)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (int)routeType;

@end
