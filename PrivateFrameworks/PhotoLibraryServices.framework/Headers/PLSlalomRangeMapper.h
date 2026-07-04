/* Runtime dump - PLSlalomRangeMapper
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSlalomRangeMapper : NSObject
{
    NSMutableArray * _originalLengths;
    NSMutableArray * _scaledLengths;
    NSMutableArray * _scaledRegions;
}

- (void)dealloc;
- (PLSlalomRangeMapper *)init;
- (float)_mapTime:(float)arg0 fromLengths:(id)arg1 toLengths:(id)arg2;
- (void)addNextRange:(float)arg0 scaledLength:(float)arg1;
- (float)scaledTimeForOriginalTime:(float)arg0;
- (float)originalTimeForScaledTime:(float)arg0;
- (void)markScaledRegionWithRate:(float)arg0 rampInStartTime:(float)arg1 rampInEndTime:(float)arg2 rampOutStartTime:(float)arg3 rampOutEndTime:(float)arg4;
- (void)enumerateScaledRegionsUsingBlock:(id /* block */)arg0;

@end
