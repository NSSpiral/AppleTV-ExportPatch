/* Runtime dump - TSCH3DValueAxisLabelKind
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DValueAxisLabelKind : TSCH3DAxisLabelKind

+ (TSCH3DValueAxisLabelKind *)allocWithZone:(struct _NSZone *)arg0;
+ (NSString *)kind;
+ (TSCH3DValueAxisLabelKind *)_singletonAlloc;

- (double)unitSpaceValueForAxis:(id)arg0 index:(unsigned int)arg1;
- (id)labelForAxis:(id)arg0 index:(unsigned int)arg1;
- (unsigned int)count:(NSObject *)arg0;
- (TSCH3DValueAxisLabelKind *)retain;
- (void)release;
- (TSCH3DValueAxisLabelKind *)autorelease;
- (unsigned int)retainCount;
- (TSCH3DValueAxisLabelKind *)copyWithZone:(struct _NSZone *)arg0;

@end
