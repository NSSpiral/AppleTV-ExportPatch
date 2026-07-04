/* Runtime dump - SCNPhysicsVehicleWheel
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsVehicleWheel : NSObject <NSCopying, NSSecureCoding>
{
    id _reserved;
    SCNNode * _node;
    SCNPhysicsVehicle * _vehicle;
    int _wheelIndex;
    float _suspensionStiffness;
    float _suspensionCompression;
    float _suspensionDamping;
    float _maximumSuspensionTravel;
    float _frictionSlip;
    float _maximumSuspensionForce;
    struct SCNVector3 _connectionPosition;
    struct SCNVector3 _steeringAxis;
    struct SCNVector3 _axle;
    float _radius;
    float _suspensionRestLength;
    char _isFront;
}

@property (readonly) SCNNode * node;
@property float suspensionStiffness;
@property float suspensionCompression;
@property float suspensionDamping;
@property float maximumSuspensionTravel;
@property float frictionSlip;
@property float maximumSuspensionForce;
@property struct SCNVector3 connectionPosition;
@property struct SCNVector3 steeringAxis;
@property struct SCNVector3 axle;
@property float radius;
@property float suspensionRestLength;

+ (NSObject *)SCNJSExportProtocol;
+ (NSObject *)wheelWithNode:(SCNNode *)arg0;
+ (char)supportsSecureCoding;

- (void)setConnectionPosition:(struct SCNVector3)arg0;
- (float)suspensionStiffness;
- (void)setSuspensionStiffness:(float)arg0;
- (float)suspensionCompression;
- (void)setSuspensionCompression:(float)arg0;
- (float)suspensionDamping;
- (void)setSuspensionDamping:(float)arg0;
- (float)maximumSuspensionTravel;
- (void)setMaximumSuspensionTravel:(float)arg0;
- (float)frictionSlip;
- (void)setFrictionSlip:(float)arg0;
- (float)maximumSuspensionForce;
- (void)setMaximumSuspensionForce:(float)arg0;
- (struct SCNVector3)connectionPosition;
- (struct SCNVector3)steeringAxis;
- (void)setSteeringAxis:(struct SCNVector3)arg0;
- (struct SCNVector3)axle;
- (void)setAxle:(struct SCNVector3)arg0;
- (float)suspensionRestLength;
- (void)setSuspensionRestLength:(float)arg0;
- (char)isFront;
- (void)setIsFront:(char)arg0;
- (void)_setVehicle:(SCNPhysicsVehicle *)arg0;
- (void)_setWheelIndex:(int)arg0;
- (void)dealloc;
- (SCNPhysicsVehicleWheel *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNPhysicsVehicleWheel *)init;
- (SCNPhysicsVehicleWheel *)copy;
- (SCNPhysicsVehicleWheel *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (SCNNode *)node;
- (void)setNode:(SCNNode *)arg0;
- (float)radius;
- (void)setRadius:(float)arg0;

@end
