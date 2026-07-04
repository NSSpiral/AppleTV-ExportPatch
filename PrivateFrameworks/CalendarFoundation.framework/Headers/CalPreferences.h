/* Runtime dump - CalPreferences
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalPreferences : NSObject
{
    NSString * _domain;
    NSMutableSet * _registeredNotificationsToReflect;
}

- (CalPreferences *)initWithDomain:(NSString *)arg0;
- (void)registerReflectionForPreferenceWithNotificationName:(NSString *)arg0;
- (NSObject *)getValueForPreference:(NSObject *)arg0 expectedClass:(Class)arg1;
- (void)setValueForPreference:(NSObject *)arg0 value:(NSObject *)arg1 notificationName:(NSString *)arg2;
- (char)getBooleanPreference:(NSObject *)arg0 defaultValue:(char)arg1;
- (void)setBooleanPreference:(NSObject *)arg0 value:(char)arg1 notificationName:(NSString *)arg2;
- (void)dealloc;
- (CalPreferences *)init;
- (void).cxx_destruct;
- (void)unregisterReflectionForPreferenceWithNotificationName:(NSString *)arg0;
- (void)_preferenceChangedInternally:(id)arg0;
- (void)_synchronizePreferences;
- (void)_preferenceChangedExternally:(id)arg0;

@end
