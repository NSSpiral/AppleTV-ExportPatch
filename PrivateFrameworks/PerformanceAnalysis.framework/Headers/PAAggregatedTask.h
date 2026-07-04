/* Runtime dump - PAAggregatedTask
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAAggregatedTask : NSObject
{
    PASampleAggregator * _aggregator;
    NSMutableDictionary * _binaryImages;
}

@property (readonly) PASampleTimeSeriesDataStore * sampleStore;

- (void)dealloc;
- (int)compare:(NSObject *)arg0;
- (PASampleTimeSeriesDataStore *)sampleStore;
- (void)printToStream:(struct __sFILE *)arg0;
- (void)addSampleTask:(NSObject *)arg0 atTimestampIndex:(unsigned int)arg1;
- (PASampleAggregator *)aggregator;
- (unsigned long long)displayedBaseAddressForBinaryImage:(UIImage *)arg0;
- (unsigned long long)displayedBaseAddressForBinaryImage:(UIImage *)arg0 andUpdateIfLower:(char)arg1;
- (PAAggregatedTask *)initWithAggregator:(PASampleAggregator *)arg0 andSampleTask:(NSObject *)arg1 atTimestampIndex:(unsigned int)arg2;
- (NSString *)copyDescriptionForDisplayAddress:(unsigned long long)arg0 withSymbolicationAddress:(unsigned long long)arg1 inSymbolHandle:(PASymbolHandle *)arg2 displayFrameAddress:(char)arg3;
- (void)updateBinaryLocationIfLower:(id)arg0;
- (void)printBinaryImagesToStream:(struct __sFILE *)arg0;

@end
