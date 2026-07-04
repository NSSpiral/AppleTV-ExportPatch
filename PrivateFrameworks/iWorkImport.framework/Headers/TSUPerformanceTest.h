/* Runtime dump - TSUPerformanceTest
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUPerformanceTest : NSObject
{
    NSString * mName;
    SEL mSelector;
    id mTarget;
    double mGoalTime;
    double mPrecision;
    char mQuiet;
    struct TSUOpstat_s mTiming;
    char mPassed;
}

@property (readonly, nonatomic) NSString * name;
@property (nonatomic) struct TSUOpstat_s timing;
@property (nonatomic) double goalTime;
@property (nonatomic) double precision;
@property (nonatomic) char quiet;
@property (readonly, nonatomic) char passed;

+ (NSString *)csvHeader;

- (double)precision;
- (void)setPrecision:(double)arg0;
- (void)dealloc;
- (NSString *)name;
- (void)run;
- (TSUPerformanceTest *)initWithName:(NSString *)arg0 selector:(SEL)arg1 target:(NSObject *)arg2 goalTime:(double)arg3;
- (void)setQuiet:(char)arg0;
- (char)passed;
- (void)report;
- (char)quiet;
- (NSString *)csvString;
- (double)goalTime;
- (void)setGoalTime:(double)arg0;
- (void)setTiming:(struct TSUOpstat_s)arg0;
- (struct TSUOpstat_s)timing;

@end
