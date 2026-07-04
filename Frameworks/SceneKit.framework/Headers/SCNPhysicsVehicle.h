/* Runtime dump - SCNPhysicsVehicle
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsVehicle : SCNPhysicsBehavior
{
    SCNPhysicsBody * _chassisBody;
    NSArray * _wheels;
    SCNPhysicsWorld * _world;
    struct btRaycastVehicle * _vehicle;
    float _speedKmHour;
}

@property (readonly, nonatomic) float speedInKilometersPerHour;
@property (readonly, nonatomic) NSArray * wheels;
@property (readonly, nonatomic) SCNPhysicsBody * chassisBody;

+ (NSObject *)SCNJSExportProtocol;
+ (NSObject *)vehicleWithChassisBody:(SCNPhysicsBody *)arg0 wheels:(NSArray *)arg1;
+ (char)supportsSecureCoding;

- (SCNPhysicsWorld *)physicsWorld;
- (void)_addToPhysicsWorld:(SKPhysicsWorld *)arg0;
- (void)_willRemoveFromPhysicsWorld:(SKPhysicsWorld *)arg0;
- (void)_handleCreateIfNeeded:(char)arg0;
- (struct btRaycastVehicle *)btVehicle;
- (void)_initializeWheelsArray;
- (SCNPhysicsVehicle *)initWithChassisBody:(SCNPhysicsBody *)arg0 wheels:(NSArray *)arg1;
- (void)_createWheel:(id)arg0;
- (NSObject *)wheelAtIndex:(unsigned int)arg0;
- (void)applyEngineForce:(float)arg0 forWheelAtIndex:(int)arg1;
- (void)setSteeringAngle:(float)arg0 forWheelAtIndex:(int)arg1;
- (void)applyBrakingForce:(float)arg0 forWheelAtIndex:(int)arg1;
- (float)speedInKilometersPerHour;
- (NSArray *)wheels;
- (SCNPhysicsBody *)chassisBody;
- (void)_customDecodingOfSCNPhysicsVehicle:(id)arg0;
- (void)dealloc;
- (SCNPhysicsVehicle *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)valueForKeyPath:(NSString *)arg0;
- (void)setValue:(NSObject *)arg0 forKeyPath:(NSString *)arg1;
- (void)_update;

@end
