/* Runtime dump - CMColorProperty
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMColorProperty : CMProperty
{
    OITSUColor * wdValue;
}

+ (UIColor *)cssStringFromOADColor:(UIColor *)arg0;
+ (float)transformedAlphaFromOADColor:(UIColor *)arg0;
+ (CMColorProperty *)nsColorFromShading:(id)arg0;
+ (CMColorProperty *)resolveStyleColorWithPercentage:(float)arg0 shading:(WDShading *)arg1;
+ (CMColorProperty *)resolveStyleColorWithPercentage:(float)arg0 foregroundColor:(UIColor *)arg1 backgroundColor:(UIColor *)arg2;
+ (float)resolveColorValueWithPercentage:(float)arg0 foregroundComponent:(float)arg1 backgroundComponent:(float)arg2;
+ (CMColorProperty *)nsColorFromOADFill:(id)arg0 state:(NSObject *)arg1;
+ (UIColor *)nsColorFromOADColor:(UIColor *)arg0 state:(NSObject *)arg1;
+ (CMColorProperty *)cssStringFromRed:(float)arg0 green:(float)arg1 blue:(float)arg2;
+ (UIColor *)cssStringFromTSUColor:(UIColor *)arg0;
+ (struct CGColor *)copyCGColorFromOADColor:(UIColor *)arg0 state:(NSObject *)arg1;
+ (struct CGColor *)copyCGColorFromOADFill:(id)arg0 state:(NSObject *)arg1;
+ (CMColorProperty *)cssStringFromOADGradientFill:(id)arg0 state:(NSObject *)arg1;

- (void *)value;
- (CMColorProperty *)initWithColor:(UIColor *)arg0;
- (NSString *)cssStringForName:(NSString *)arg0;
- (NSString *)cssString;
- (char)isEqualTo:(id)arg0;

@end
