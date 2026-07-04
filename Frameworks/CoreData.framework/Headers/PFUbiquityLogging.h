/* Runtime dump - PFUbiquityLogging
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityLogging : NSObject
{
    int _desiredLogLevel;
}

@property (nonatomic) int desiredLogLevel;

+ (char)canLogMessageAtLevel:(int)arg0;
+ (void)setLoggingLevel:(int)arg0;
+ (void)initialize;

- (void)userDefaultsChanged:(NSNotification *)arg0;
- (void)checkUserDefaults;
- (void)setDesiredLogLevel:(int)arg0;
- (int)desiredLogLevel;
- (void)dealloc;
- (PFUbiquityLogging *)init;

@end
