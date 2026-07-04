/* Runtime dump - PASampleAggregator
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleAggregator : NSObject
{
    PASampleAggregatorOptions * _options;
    PASampleTimeSeriesDataStore * _sampleStore;
    NSMutableSet * _tasks;
    NSMutableArray * _wallTimestamps;
    NSMutableArray * _machTimestamps;
}

@property char tabDelineateBinaryImageSections;
@property char binaryImagesBeforeStacks;
@property char displayFrameAddresses;
@property char displaySub1MsCpuTime;
@property char displayStateChangesOnIdleThreads;
@property char displayOffsetsFromUnnamedSymbols;
@property char displaySymbolInformation;
@property char displayBinaryImageAddresses;
@property char displayBinaryImagesLackingNameOrPath;
@property char displayNonRunnableThreads;
@property char displayProcessFirstLastTimes;
@property char displayIdleWorkQueueThreads;
@property char verbose;
@property PASampleAggregatorOptions * options;
@property (retain) NSMutableSet * tasks;
@property (readonly) PASampleTimeSeriesDataStore * sampleStore;
@property (readonly) unsigned int count;

- (void)dealloc;
- (unsigned int)count;
- (void)setOptions:(PASampleAggregatorOptions *)arg0;
- (PASampleAggregatorOptions *)options;
- (void)setSamples:(id)arg0;
- (char)displayFrameAddresses;
- (char)displayStateChangesOnIdleThreads;
- (char)displaySub1MsCpuTime;
- (char)displayProcessFirstLastTimes;
- (char)displayOffsetsFromUnnamedSymbols;
- (char)displaySymbolInformation;
- (char)displayBinaryImageAddresses;
- (char)displayBinaryImagesLackingNameOrPath;
- (char)displayNonRunnableThreads;
- (char)displayIdleWorkQueueThreads;
- (void)setDisplayFrameAddresses:(char)arg0;
- (void)setDisplayStateChangesOnIdleThreads:(char)arg0;
- (void)setDisplaySub1MsCpuTime:(char)arg0;
- (void)setDisplayProcessFirstLastTimes:(char)arg0;
- (void)setDisplayOffsetsFromUnnamedSymbols:(char)arg0;
- (void)setDisplaySymbolInformation:(char)arg0;
- (void)setDisplayBinaryImageAddresses:(char)arg0;
- (void)setDisplayBinaryImagesLackingNameOrPath:(char)arg0;
- (void)setDisplayNonRunnableThreads:(char)arg0;
- (void)setDisplayIdleWorkQueueThreads:(char)arg0;
- (char)verbose;
- (void)setVerbose:(char)arg0;
- (char)tabDelineateBinaryImageSections;
- (void)setTabDelineateBinaryImageSections:(char)arg0;
- (char)binaryImagesBeforeStacks;
- (void)setBinaryImagesBeforeStacks:(char)arg0;
- (NSMutableSet *)tasks;
- (double)wallTimeAtTimestampIndex:(unsigned int)arg0;
- (PASampleTimeSeriesDataStore *)sampleStore;
- (void)printDateToStream:(struct __sFILE *)arg0;
- (void)printHeaderToStream:(struct __sFILE *)arg0;
- (id)sortedTasks;
- (void)printToStream:(struct __sFILE *)arg0;
- (void)printFooterToStream:(struct __sFILE *)arg0;
- (NSURLSessionTask *)newAggregatedTaskForIdentificationPurposesWithSampleTask:(NSObject *)arg0;
- (NSURLSessionTask *)newAggregatedTaskForSampleTask:(NSObject *)arg0 atTimestampIndex:(unsigned int)arg1;
- (void)addSampleTask:(NSObject *)arg0 atTimestampIndex:(unsigned int)arg1;
- (PASampleAggregator *)initWithSampleStore:(PASampleTimeSeriesDataStore *)arg0;
- (double)machTimeAtTimestampIndex:(unsigned int)arg0;
- (void)setTasks:(NSMutableSet *)arg0;

@end
