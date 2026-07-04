/* Runtime dump - PASampleAggregatorOptions
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleAggregatorOptions : NSObject
{
    char _tabDelineateBinaryImageSections;
    char _binaryImagesBeforeStacks;
    char _printSpinSignatureStack;
    char _printHeavyStacks;
    char _displayFrameAddresses;
    char _displaySub1MsCpuTime;
    char _displayStateChangesOnIdleThreads;
    char _displayProcessFirstLastTimes;
    char _displayOffsetsFromUnnamedSymbols;
    char _displaySymbolInformation;
    char _displayBinaryImageAddresses;
    char _displayBinaryImagesLackingNameOrPath;
    char _displayNonRunnableThreads;
    char _displayIdleWorkQueueThreads;
}

@property char tabDelineateBinaryImageSections;
@property char binaryImagesBeforeStacks;
@property char printSpinSignatureStack;
@property char printHeavyStacks;
@property char displayFrameAddresses;
@property char displaySub1MsCpuTime;
@property char displayStateChangesOnIdleThreads;
@property char displayProcessFirstLastTimes;
@property char displayOffsetsFromUnnamedSymbols;
@property char displaySymbolInformation;
@property char displayBinaryImageAddresses;
@property char displayBinaryImagesLackingNameOrPath;
@property char displayNonRunnableThreads;
@property char displayIdleWorkQueueThreads;
@property char verbose;

- (PASampleAggregatorOptions *)init;
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
- (char)printSpinSignatureStack;
- (void)setPrintSpinSignatureStack:(char)arg0;
- (char)printHeavyStacks;
- (void)setPrintHeavyStacks:(char)arg0;

@end
