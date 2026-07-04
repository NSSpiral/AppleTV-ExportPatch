/* Runtime dump - UIAttachmentBehavior
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAttachmentBehavior : UIDynamicBehavior
{
    struct CGPoint _anchorPoint;
    struct CGPoint _anchorPointA;
    struct CGPoint _anchorPointB;
    PKExtendedPhysicsBody * _anchorBody;
    PKPhysicsJoint * _joint;
    float _damping;
    float _frequency;
    float _length;
    int _type;
    struct ? _stateFlags;
    int _attachedBehaviorType;
}

@property (readonly, copy, nonatomic) NSArray * items;
@property (readonly, nonatomic) int attachedBehaviorType;
@property (nonatomic) struct CGPoint anchorPoint;
@property (nonatomic) float length;
@property (nonatomic) float damping;
@property (nonatomic) float frequency;

- (void)dealloc;
- (UIAttachmentBehavior *)init;
- (NSString *)description;
- (void)setDamping:(float)arg0;
- (float)length;
- (int)type;
- (struct CGPoint)anchorPoint;
- (NSArray *)items;
- (void)setAnchorPoint:(struct CGPoint)arg0;
- (UIAttachmentBehavior *)initWithItem:(NSObject *)arg0 point:(struct CGPoint)arg1 attachedToAnchor:(struct CGPoint)arg2;
- (UIAttachmentBehavior *)initWithItem:(NSObject *)arg0 point:(struct CGPoint)arg1 attachedToItem:(NSObject *)arg2 point:(struct CGPoint)arg3;
- (void)setLength:(float)arg0;
- (void)_changedParameter;
- (void)_reevaluateJoint;
- (float)damping;
- (float)frequency;
- (void)setFrequency:(float)arg0;
- (UIAttachmentBehavior *)initWithItem:(NSObject *)arg0 attachedToAnchor:(struct CGPoint)arg1;
- (UIAttachmentBehavior *)initWithItem:(NSObject *)arg0 attachedToItem:(NSObject *)arg1;
- (UIAttachmentBehavior *)initWithItem:(NSObject *)arg0 offsetFromCenter:(struct UIOffset)arg1 attachedToAnchor:(struct CGPoint)arg2;
- (UIAttachmentBehavior *)initWithItem:(NSObject *)arg0 offsetFromCenter:(struct UIOffset)arg1 attachedToItem:(NSObject *)arg2 offsetFromCenter:(struct UIOffset)arg3;
- (void)_associate;
- (void)_dissociate;
- (int)attachedBehaviorType;

@end
