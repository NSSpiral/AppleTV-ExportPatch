/* Runtime dump - TSCH3DCategoryAxisLabelKind
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DCategoryAxisLabelKind : TSCH3DAxisLabelKind

+ (TSCH3DCategoryAxisLabelKind *)allocWithZone:(struct _NSZone *)arg0;
+ (NSString *)kind;
+ (TSCH3DCategoryAxisLabelKind *)_singletonAlloc;

- (double)unitSpaceValueForAxis:(id)arg0 index:(unsigned int)arg1;
- (id)labelForAxis:(id)arg0 index:(unsigned int)arg1;
- (unsigned int)count:(NSObject *)arg0;
- (TSCH3DCategoryAxisLabelKind *)retain;
- (void)release;
- (TSCH3DCategoryAxisLabelKind *)autorelease;
- (unsigned int)retainCount;
- (TSCH3DCategoryAxisLabelKind *)copyWithZone:(struct _NSZone *)arg0;

@end
