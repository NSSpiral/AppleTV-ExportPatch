/* Runtime dump - EDGradientFill
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDGradientFill : EDFill
{
    int mType;
    NSMutableDictionary * mStops;
    double mDegree;
    struct CGRect mFocusRect;
}

+ (NSObject *)gradientWithType:(int)arg0 degree:(double)arg1 top:(double)arg2 bottom:(double)arg3 right:(double)arg4 left:(double)arg5 stops:(struct CGSize)arg6 resources:(NSArray *)arg7;
+ (NSObject *)gradientWithType:(int)arg0 degree:(double)arg1 focusRect:(struct CGRect)arg2 stops:(struct CGSize)arg3 resources:(NSArray *)arg4;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setType:(int)arg0;
- (int)type;
- (EDGradientFill *)copyWithZone:(struct _NSZone *)arg0;
- (BOOL)isEmpty;
- (void).cxx_construct;
- (void)setStops:(id)arg0;
- (id)stops;
- (EDGradientFill *)initWithResources:(NSArray *)arg0;
- (void)setStopColor:(UIColor *)arg0 atPosition:(struct CGPoint)arg1;
- (char)isEqualToGradientFill:(id)arg0;
- (double)degree;
- (struct CGRect)focusRect;
- (NSObject *)colorForStopAtPosition:(NSObject *)arg0;
- (void)setFocusRect:(struct CGRect)arg0;
- (void)setDegree:(double)arg0;
- (EDGradientFill *)initWithType:(int)arg0 degree:(double)arg1 top:(double)arg2 bottom:(double)arg3 right:(double)arg4 left:(double)arg5 stops:(struct CGSize)arg6 resources:(NSArray *)arg7;
- (EDGradientFill *)initWithType:(int)arg0 degree:(double)arg1 focusRect:(struct CGRect)arg2 stops:(struct CGSize)arg3 resources:(NSArray *)arg4;

@end
