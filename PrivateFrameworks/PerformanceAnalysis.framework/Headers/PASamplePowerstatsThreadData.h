/* Runtime dump - PASamplePowerstatsThreadData
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASamplePowerstatsThreadData : PASampleThreadData
{
    unsigned int _powerstatsFlags;
}

- (unsigned int)powerstatsFlags;
- (char)hasValidPowerstatsFlags;
- (PASamplePowerstatsThreadData *)initWithStackshotThread:(PAStackshotThread *)arg0 andLeafFrame:(NSObject *)arg1;

@end
