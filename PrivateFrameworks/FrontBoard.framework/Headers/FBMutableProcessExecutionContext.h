/* Runtime dump - FBMutableProcessExecutionContext
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBMutableProcessExecutionContext : FBProcessExecutionContext

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

@end
