/* Runtime dump - SettingsUtilities
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface SettingsUtilities : NSObject

+ (int)activePortValueForConfig:(NSObject *)arg0;
+ (NSObject *)networkStringForType:(int)arg0 config:(NSDictionary *)arg1;
+ (SettingsUtilities *)localizedStringForPCAccessMode:(int)arg0;
+ (int)nextModeFromPCAccessMode:(int)arg0 accessControlled:(char)arg1;
+ (NSObject *)wirelessIPConfigStringForConfig:(NSObject *)arg0;
+ (NSObject *)wiredIPConfigStringForConfig:(NSObject *)arg0;
+ (NSObject *)activePortForConfig:(NSObject *)arg0;
+ (NSObject *)networkNameForConfig:(NSObject *)arg0;
+ (SettingsUtilities *)_IPConfigStringForInterface:(int)arg0 config:(NSDictionary *)arg1;
+ (NSObject *)networkTextureForType:(int)arg0 config:(NSDictionary *)arg1;
+ (char)truncateValueIfTooLong:(int)arg0;
+ (NSObject *)signalStrengthForConfig:(NSObject *)arg0;

@end
