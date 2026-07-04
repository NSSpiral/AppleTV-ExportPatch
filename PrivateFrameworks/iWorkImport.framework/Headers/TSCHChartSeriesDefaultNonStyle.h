/* Runtime dump - TSCHChartSeriesDefaultNonStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesDefaultNonStyle : NSObject <TSCHStyleActAlike>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TSCHChartSeriesDefaultNonStyle *)defaultNonStyle;
+ (TSCHChartSeriesDefaultNonStyle *)defaultValueForProperty:(int)arg0;
+ (int)defaultIntValueForProperty:(int)arg0;
+ (float)defaultFloatValueForProperty:(int)arg0;
+ (NSObject *)boxedDefaultValueForProperty:(int)arg0;
+ (TSCHChartSeriesDefaultNonStyle *)allocWithZone:(struct _NSZone *)arg0;
+ (NSDictionary *)properties;
+ (TSCHChartSeriesDefaultNonStyle *)_singletonAlloc;

- (char)overridesProperty:(int)arg0;
- (int)intValueForProperty:(int)arg0;
- (char)definesProperty:(int)arg0;
- (float)floatValueForProperty:(int)arg0;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSObject *)boxedValueForProperty:(int)arg0;
- (NSObject *)defaultValueForProperty:(int)arg0;
- (int)defaultIntValueForProperty:(int)arg0;
- (float)defaultFloatValueForProperty:(int)arg0;
- (NSObject *)boxedDefaultValueForProperty:(int)arg0;
- (TSCHChartSeriesDefaultNonStyle *)retain;
- (void)release;
- (TSCHChartSeriesDefaultNonStyle *)autorelease;
- (unsigned int)retainCount;
- (TSCHChartSeriesDefaultNonStyle *)copyWithZone:(struct _NSZone *)arg0;
- (void *)valueForProperty:(int)arg0;
- (NSDictionary *)properties;

@end
