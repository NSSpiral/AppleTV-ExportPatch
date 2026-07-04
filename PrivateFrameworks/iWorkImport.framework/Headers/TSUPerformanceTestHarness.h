/* Runtime dump - TSUPerformanceTestHarness
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUPerformanceTestHarness : NSObject
{
    NSMutableArray * mTestCases;
    char mQuiet;
    int mPassingTests;
    int mTotalTests;
    char mPassed;
    struct timeval mSetupTime;
}

@property (nonatomic) char quiet;
@property (readonly, nonatomic) int passingTestCount;
@property (readonly, nonatomic) int testCount;
@property (readonly, nonatomic) char passed;

+ (TSUPerformanceTestHarness *)harness;

- (void)dealloc;
- (TSUPerformanceTestHarness *)init;
- (void)cleanup;
- (void)setQuiet:(char)arg0;
- (NSString *)testWithName:(NSString *)arg0 selector:(SEL)arg1 goalTime:(double)arg2;
- (void)setup;
- (void)testSuite;
- (char)passed;
- (void)report;
- (id)p_createResultDirectory;
- (void)p_writeSystemConfigurationToDirectory:(id)arg0;
- (void)p_writeConsoleMessagesToDirectory:(id)arg0;
- (void)p_writeCsvResultsToDirectory:(id)arg0;
- (void)runTestWithName:(NSString *)arg0 selector:(SEL)arg1 goalTime:(double)arg2;
- (void)runTestWithName:(NSString *)arg0 selector:(SEL)arg1 goalTime:(double)arg2 precision:(double)arg3;
- (char)runTests;
- (char)quiet;
- (int)passingTestCount;
- (int)testCount;

@end
