/* Runtime dump - VKLabelNavRoad
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavRoad : NSObject <VKLabelNavFeature>
{
    VKLabelTile * _tile;
    struct ? * _data;
    unsigned int _vertexIndexA;
    unsigned int _vertexIndexB;
    struct ? * _junctionA;
    struct ? * _junctionB;
    VKLabelNavJunction * _navJunctionA;
    struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > _simplifiedPoints;
    struct Matrix<float, 2, 1> _direction;
    char _isRoadLabelUnique;
    char _isOnRoute;
    char _isStartOfRoadName;
    char _isInGuidance;
    char _isGuidanceStepStart;
    char _areLabelsDisabled;
    struct PolylineCoordinate _routeOffset;
    float _routeCrossProduct;
    int _intraRoadPriority;
    double _length;
    NSString * _name;
    NSString * _shieldDisplayGroup;
    NSString * _shieldGroup;
    VKLabelNavRoadLabel * _roadSign;
    VKLabelNavRoadLabel * _roadShield;
    char _areNavStylesInitialized;
    char _hasVisibleSigns;
    char _hasVisibleShields;
    char _suppressRoadSignIfShieldPresent;
}

@property (readonly, nonatomic) VKLabelTile * tile;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) char * cstrName;
@property (readonly, nonatomic) NSString * shieldDisplayGroup;
@property (readonly, nonatomic) NSString * shieldGroup;
@property (readonly, nonatomic) struct ? * junctionB;
@property (readonly, nonatomic) VKLabelNavJunction * navJunctionA;
@property (nonatomic) struct Matrix<float, 2, 1> direction;
@property (nonatomic) char isOnRoute;
@property (nonatomic) char isStartOfRoadName;
@property (nonatomic) char isInGuidance;
@property (nonatomic) char isGuidanceStepStart;
@property (nonatomic) char areLabelsDisabled;
@property (nonatomic) struct PolylineCoordinate routeOffset;
@property (nonatomic) float routeCrossProduct;
@property (nonatomic) int intraRoadPriority;
@property (nonatomic) char isRoadLabelUnique;
@property (readonly, nonatomic) char isAwayFromRoute;
@property (readonly, nonatomic) char suppressRoadSignIfShieldPresent;
@property (readonly, nonatomic) char isRamp;
@property (readonly, nonatomic) char isOnewayToJunction;
@property (readonly, nonatomic) int roadClass;
@property (readonly, nonatomic) int roadSignAlignment;

- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (double)length;
- (void)setDirection:(struct Matrix<float, 2, 1>)arg0;
- (struct Matrix<float, 2, 1>)direction;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct PolylineCoordinate)routeOffset;
- (void)setRouteOffset:(struct PolylineCoordinate)arg0;
- (char)hasShield;
- (char)isRamp;
- (char)isAwayFromRoute;
- (void)_worldRoadPoints:(struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > *)arg0;
- (char)isOnRoute;
- (char)_worldPointForRoadOffset:(float)arg0 worldPoint:(struct VKPoint *)arg1;
- (NSObject *)labelWithType:(char)arg0;
- (float)_findRoadOffsetForDistanceToRay:(float)arg0 rayStart:(struct VKPoint)arg1 rayVector:(struct Matrix<float, 2, 1>)arg2 roadGraph:(VKLabelNavRoadGraph *)arg3;
- (char)_findLabelAnchorPoint:(struct VKPoint *)arg0 isShieldLabel:(char)arg1 desiredOffsetDistance:(float)arg2 maxOffsetDistance:(float)arg3 minJunctionDistance:(float)arg4 roadGraph:(VKLabelNavRoadGraph *)arg5;
- (int)roadSignAlignment;
- (NSString *)_newLabelWithNavContext:(struct NavContext *)arg0 isShieldLabel:(char)arg1 worldPoint:(char)arg2 alignment:(struct VKPoint)arg3;
- (void)clearRoadSign;
- (NSString *)shieldDisplayGroup;
- (char)isStartOfRoadName;
- (char)isInGuidance;
- (int)intraRoadPriority;
- (char)isGuidanceStepStart;
- (VKLabelNavRoad *)initWithRoadEdge:(struct ? *)arg0 navJunctionA:(struct ?)arg1 routeOffset:(unsigned int)arg2 tile:(unsigned int)arg3;
- (char *)cstrName;
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg0;
- (int)roadClass;
- (char)isOnewayToJunction;
- (void)getRoadEdge:(struct ? *)arg0;
- (char)matchesRoadEdge:(struct ? *)arg0;
- (char)matchesRoad:(id)arg0;
- (char)hasVisibleSigns;
- (char)hasVisibleShields;
- (NSString *)shieldGroup;
- (void)createLabelWithNavContext:(struct NavContext *)arg0 isShieldLabel:(char)arg1 desiredOffsetDistance:(char)arg2 maxOffsetDistance:(float)arg3 minJunctionDistance:(float)arg4 minRouteDistance:(float)arg5 roadGraph:(float)arg6;
- (void)recreateRoadSignWithAlignment:(int)arg0 navContext:(struct NavContext *)arg1;
- (void)appendSimplifiedWorldRoadPoints:(struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > *)arg0;
- (VKLabelTile *)tile;
- (void)setIsOnRoute:(char)arg0;
- (void)setIsStartOfRoadName:(char)arg0;
- (void)setIsInGuidance:(char)arg0;
- (void)setIsGuidanceStepStart:(char)arg0;
- (float)routeCrossProduct;
- (void)setRouteCrossProduct:(float)arg0;
- (struct ? *)junctionB;
- (void)setIntraRoadPriority:(int)arg0;
- (char)areLabelsDisabled;
- (void)setAreLabelsDisabled:(char)arg0;
- (char)isRoadLabelUnique;
- (void)setIsRoadLabelUnique:(char)arg0;
- (VKLabelNavJunction *)navJunctionA;
- (char)suppressRoadSignIfShieldPresent;

@end
