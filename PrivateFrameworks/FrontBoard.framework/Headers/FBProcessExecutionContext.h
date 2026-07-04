/* Runtime dump - FBProcessExecutionContext
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessExecutionContext : NSObject
{
    NSArray * _arguments;
    NSDictionary * _environment;
    NSURL * _standardOutputURL;
    NSURL * _standardErrorURL;
    char _waitForDebugger;
    char _disableASLR;
    char _checkForLeaks;
    int _launchIntent;
    unsigned int _launchAssertionFlags;
    double _watchdogExtension;
}

@property (retain, nonatomic) NSArray * arguments;
@property (retain, nonatomic) NSDictionary * environment;
@property (retain, nonatomic) NSURL * standardOutputURL;
@property (retain, nonatomic) NSURL * standardErrorURL;
@property (nonatomic) char waitForDebugger;
@property (nonatomic) char disableASLR;
@property (nonatomic) char checkForLeaks;
@property (nonatomic) int launchIntent;
@property (nonatomic) double watchdogExtension;
@property (nonatomic) unsigned int launchAssertionFlags;

+ (double)watchdogIntervalForLaunchIntent:(int)arg0;

- (void)setArguments:(NSArray *)arg0;
- (void)dealloc;
- (NSDictionary *)environment;
- (void)setEnvironment:(NSDictionary *)arg0;
- (int)launchIntent;
- (unsigned int)_launchAssertionFlags;
- (double)watchdogExtension;
- (double)_launchWatchdogInterval;
- (NSURL *)standardOutputURL;
- (void)setStandardOutputURL:(NSURL *)arg0;
- (NSURL *)standardErrorURL;
- (void)setStandardErrorURL:(NSURL *)arg0;
- (char)waitForDebugger;
- (void)setWaitForDebugger:(char)arg0;
- (char)disableASLR;
- (void)setDisableASLR:(char)arg0;
- (char)checkForLeaks;
- (void)setCheckForLeaks:(char)arg0;
- (void)setLaunchIntent:(int)arg0;
- (unsigned int)launchAssertionFlags;
- (void)setLaunchAssertionFlags:(unsigned int)arg0;
- (void)setWatchdogExtension:(double)arg0;
- (NSArray *)arguments;

@end
