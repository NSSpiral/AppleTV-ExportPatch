/* Runtime dump - CAMediaTimingFunction
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMediaTimingFunction : NSObject <NSCoding>
{
    struct CAMediaTimingFunctionPrivate * _priv;
}

+ (CAMediaTimingFunction *)sigmoidFunction;
+ (CAMediaTimingFunction *)_kbTimingFunction;
+ (CAMediaTimingFunction *)uiFunctionWithControlPoints:(struct CGPoint *)arg0;
+ (void)CAMLParserEndElement:(NSObject *)arg0 content:(char *)arg1;
+ (CAMediaTimingFunction *)functionWithControlPoints:(float)arg0 :(float)arg1 :(float)arg2 :(float)arg3;
+ (NSString *)functionWithName:(NSString *)arg0;

- (float)TSD_valueAtPercent:(double)arg0;
- (CAMediaTimingFunction *)initWithControlPoints:(float)arg0 :(float)arg1 :(float)arg2 :(float)arg3;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (void)_getPoints:(double *)arg0;
- (NSObject *)CAMLType;
- (void)getControlPointAtIndex:(unsigned long)arg0 values:(NSArray *)arg1;
- (void)dealloc;
- (CAMediaTimingFunction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (float)_solveForInput:(float)arg0;

@end
