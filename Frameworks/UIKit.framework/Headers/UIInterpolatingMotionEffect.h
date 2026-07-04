/* Runtime dump - UIInterpolatingMotionEffect
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInterpolatingMotionEffect : UIMotionEffect
{
    float _horizontalAccelerationBoostFactor;
    float _verticalAccelerationBoostFactor;
    NSString * _keyPath;
    int _type;
    id _minimumRelativeValue;
    id _maximumRelativeValue;
}

@property (readonly, nonatomic) NSString * keyPath;
@property (readonly, nonatomic) int type;
@property (retain, nonatomic) id minimumRelativeValue;
@property (retain, nonatomic) id maximumRelativeValue;

- (void)dealloc;
- (UIInterpolatingMotionEffect *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (int)type;
- (UIInterpolatingMotionEffect *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)keyPath;
- (NSSet *)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg0;
- (UIInterpolatingMotionEffect *)initWithKeyPath:(NSString *)arg0 type:(int)arg1;
- (void)setMinimumRelativeValue:(id)arg0;
- (void)setMaximumRelativeValue:(id)arg0;
- (void)_setHorizontalAccelerationBoostFactor:(float)arg0;
- (float)_horizontalAccelerationBoostFactor;
- (void)_setVerticalAccelerationBoostFactor:(float)arg0;
- (float)_verticalAccelerationBoostFactor;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg0;
- (void)_setKeyPath:(NSString *)arg0;
- (void)_setType:(int)arg0;
- (id)minimumRelativeValue;
- (id)maximumRelativeValue;

@end
