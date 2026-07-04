/* Runtime dump - CalFoundationPreferences
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalFoundationPreferences : NSObject
{
    CalPreferences * _preferences;
}

@property (readonly, nonatomic) char logAutoFlush;
@property (readonly, nonatomic) char logEmitUserNotifications;
@property (readonly, nonatomic) NSString * logFilePath;
@property (readonly, nonatomic) NSArray * logSimpleConfiguration;

+ (CalFoundationPreferences *)shared;

- (CalFoundationPreferences *)init;
- (void).cxx_destruct;
- (char)logAutoFlush;
- (char)logEmitUserNotifications;
- (NSArray *)logSimpleConfiguration;
- (NSString *)logFilePath;

@end
