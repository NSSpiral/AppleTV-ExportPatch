/* Runtime dump - SBFAnimationCurveSettings
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFAnimationCurveSettings : _UISettings
{
    unsigned int _curve;
    struct CGPoint _controlPoint1;
    struct CGPoint _controlPoint2;
}

@property (nonatomic) unsigned int curve;
@property (nonatomic) struct CGPoint controlPoint1;
@property (nonatomic) struct CGPoint controlPoint2;

+ (SBFAnimationCurveSettings *)settingsControllerModule;
+ (NSString *)_rowsRelativeToKeyPath:(NSString *)arg0;

- (void)setCurve:(unsigned int)arg0;
- (unsigned int)curve;
- (void)setDefaultValues;
- (void)_invalidate;
- (struct CGPoint)controlPoint1;
- (struct CGPoint)controlPoint2;
- (void)setControlPoint1:(struct CGPoint)arg0;
- (void)setControlPoint2:(struct CGPoint)arg0;

@end
