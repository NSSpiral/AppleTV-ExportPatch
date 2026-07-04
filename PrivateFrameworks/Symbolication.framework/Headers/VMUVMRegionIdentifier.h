/* Runtime dump - VMUVMRegionIdentifier
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUVMRegionIdentifier : NSObject
{
    NSMutableArray * _regions;
    NSMapTable * _mallocZoneStatisticsMap;
}

- (VMUVMRegionIdentifier *)initWithTask:(unsigned int)arg0;
- (void)dealloc;
- (NSMutableArray *)regions;
- (VMUVMRegionIdentifier *)initWithTask:(unsigned int)arg0 options:(unsigned int)arg1;
- (VMUVMRegionIdentifier *)initWithTask:(unsigned int)arg0 pid:(int)arg1 options:(unsigned int)arg2;
- (NSObject *)descriptionForRange:(struct _VMURange)arg0 options:(unsigned int)arg1;
- (NSDictionary *)descriptionForMallocZoneTotalsWithOptions:(unsigned int)arg0;
- (NSObject *)descriptionForRange:(struct _VMURange)arg0;
- (NSDictionary *)descriptionForRegionTotalsWithOptions:(unsigned int)arg0;

@end
