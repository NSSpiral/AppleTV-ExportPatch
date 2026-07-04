/* Runtime dump - TSCH3DSeriesLabelKind
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSeriesLabelKind : TSCH3DAxisLabelKind

+ (TSCH3DSeriesLabelKind *)allocWithZone:(struct _NSZone *)arg0;
+ (NSString *)kind;
+ (TSCH3DSeriesLabelKind *)_singletonAlloc;

- (double)unitSpaceValueForAxis:(id)arg0 index:(unsigned int)arg1;
- (id)labelForAxis:(id)arg0 index:(unsigned int)arg1;
- (unsigned int)count:(NSObject *)arg0;
- (TSCH3DSeriesLabelKind *)retain;
- (void)release;
- (TSCH3DSeriesLabelKind *)autorelease;
- (unsigned int)retainCount;
- (TSCH3DSeriesLabelKind *)copyWithZone:(struct _NSZone *)arg0;

@end
