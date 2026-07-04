/* Runtime dump - NSProcessInfo
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSProcessInfo : NSObject
{
    NSDictionary * environment;
    NSArray * arguments;
    NSString * hostName;
    NSString * name;
    int automaticTerminationOptOutCounter;
}

@property (readonly, copy) NSDictionary * environment;
@property (readonly, copy) NSArray * arguments;
@property (readonly, copy) NSString * hostName;
@property (copy) NSString * processName;
@property (readonly) int processIdentifier;
@property (readonly, copy) NSString * globallyUniqueString;
@property (readonly, copy) NSString * operatingSystemVersionString;
@property (readonly) struct ? operatingSystemVersion;
@property (readonly) unsigned int processorCount;
@property (readonly) unsigned int activeProcessorCount;
@property (readonly) unsigned long long physicalMemory;
@property (readonly) double systemUptime;
@property char automaticTerminationSupportEnabled;

+ (NSProcessInfo *)processInfo;

- (void)_disableAutomaticTerminationWithoutSettingRelaunchable:(id)arg0;
- (void)_enableAutomaticTerminationWithoutSettingRelaunchable:(id)arg0;
- (void)_reactivateActivity:(id)arg0;
- (unsigned int)operatingSystem;
- (struct ?)operatingSystemVersion;
- (void)performActivityWithOptions:(unsigned long long)arg0 reason:(NSString *)arg1 usingBlock:(id /* block */)arg2;
- (void)setArguments:(NSArray *)arg0;
- (NSString *)globallyUniqueString;
- (NSString *)userName;
- (NSString *)userFullName;
- (NSString *)operatingSystemVersionString;
- (char)isOperatingSystemAtLeastVersion:(struct ?)arg0;
- (unsigned long long)physicalMemory;
- (char)isTranslated;
- (void)disableSuddenTermination;
- (void)enableSuddenTermination;
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg0;
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg0;
- (int)_suddenTerminationDisablingCount;
- (void)disableAutomaticTermination:(id)arg0;
- (void)enableAutomaticTermination:(id)arg0;
- (void)setAutomaticTerminationSupportEnabled:(char)arg0;
- (char)automaticTerminationSupportEnabled;
- (void)_disableAutomaticTerminationOnly:(id)arg0;
- (void)_enableAutomaticTerminationOnly:(id)arg0;
- (id)beginSuspensionOfSystemBehaviors:(unsigned long long)arg0 reason:(NSString *)arg1;
- (void)endSystemBehaviorSuspension:(id)arg0;
- (void)performActivityWithOptions:(unsigned long long)arg0 reason:(NSString *)arg1 block:(id /* block */)arg2;
- (void)performExpiringActivityWithReason:(NSString *)arg0 usingBlock:(id /* block */)arg1;
- (void)dealloc;
- (NSDictionary *)environment;
- (id)userHomeDirectory;
- (NSString *)processName;
- (unsigned int)processorCount;
- (int)processIdentifier;
- (NSDictionary *)beginActivityWithOptions:(unsigned long long)arg0 reason:(NSString *)arg1;
- (void)endActivity:(id)arg0;
- (NSString *)hostName;
- (unsigned int)activeProcessorCount;
- (NSString *)operatingSystemName;
- (NSArray *)arguments;
- (void)setProcessName:(NSString *)arg0;
- (double)systemUptime;

@end
