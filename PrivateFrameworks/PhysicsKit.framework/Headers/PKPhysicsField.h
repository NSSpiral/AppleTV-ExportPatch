/* Runtime dump - PKPhysicsField
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsField : NSObject
{
    struct shared_ptr<PKCField> _field;
    PKRegion * _region;
    id _position;
    float _rotation;
    id _scale;
    char _override;
}

@property (nonatomic) float strength;
@property (nonatomic) float falloff;
@property (nonatomic) char enabled;
@property (nonatomic) char override;
@property (retain, nonatomic) id region;
@property (nonatomic) id direction;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) id position;
@property (nonatomic) float rotation;
@property (nonatomic) id scale;
@property (nonatomic) float minimumRadius;
@property (weak, nonatomic) <NSObject> * representedObject;

- (float)falloff;
- (void)setFalloff:(float)arg0;
- (void)setMinimumRadius:(float)arg0;
- (float)minimumRadius;
- (void)dealloc;
- (PKPhysicsField *)init;
- (char)isActive;
- (struct SCNVector3)scale;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (void)setPosition:(struct CGPoint)arg0;
- (struct SCNVector3)position;
- (void)setDirection:(TDThemeDirection *)arg0;
- (void)setScale:(SKScale *)arg0;
- (struct SCNVector3)direction;
- (void)setActive:(char)arg0;
- (void)setRotation:(float)arg0;
- (float)rotation;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setRegion:(PKRegion *)arg0;
- (PKRegion *)region;
- (float)strength;
- (void)setStrength:(float)arg0;
- (<NSObject> *)representedObject;
- (void)setRepresentedObject:(<NSObject> *)arg0;
- (unsigned int)categoryBitMask;
- (void)setCategoryBitMask:(unsigned int)arg0;
- (char)isOverride;
- (struct shared_ptr<PKCField>)_field;
- (void)set_field:(struct shared_ptr<PKCField>)arg0;
- (char)override;
- (void)setIsOverride:(char)arg0;
- (void)setOverride:(char)arg0;

@end
