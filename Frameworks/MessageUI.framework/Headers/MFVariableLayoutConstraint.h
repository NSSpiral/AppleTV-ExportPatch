/* Runtime dump - MFVariableLayoutConstraint
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFVariableLayoutConstraint : NSObject
{
    char _cachedInterpolatedValueIsValid;
    float _cachedInterpolatedValue;
    float _medianValue;
    id _interpolationFormula;
}

@property (nonatomic) float medianValue;
@property (nonatomic) id interpolationFormula;

+ (NSString *)medianContentSizeCategory;
+ (int)_medianContentSizeIndex;

- (void)setMedianValue:(float)arg0;
- (void)setInterpolationFormula:(id)arg0;
- (void)_didReceiveContentSizeCategoryNameDidChageNotification:(NSNotification *)arg0;
- (float)medianValue;
- (id)interpolationFormula;
- (MFVariableLayoutConstraint *)initWithMedianConstraintValue:(float)arg0 interpolationFormula:(id)arg1;
- (float)interpolatedValue;
- (void)dealloc;

@end
