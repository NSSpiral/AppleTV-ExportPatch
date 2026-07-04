/* Runtime dump - UIMotionEffectGroup
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMotionEffectGroup : UIMotionEffect
{
    NSArray * _motionEffects;
}

@property (copy, nonatomic) NSArray * motionEffects;

- (void)dealloc;
- (UIMotionEffectGroup *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)debugDescription;
- (UIMotionEffectGroup *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)motionEffects;
- (void)setMotionEffects:(NSArray *)arg0;
- (NSSet *)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg0;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg0;

@end
