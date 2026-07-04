/* Runtime dump - ATVTimeZoneUtility
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVTimeZoneUtility : NSObject

+ (char)userAllowedAutomaticTimeZoneSelection;
+ (char)setAutomaticTimeZoneSelectionEnabled:(char)arg0;
+ (char)isTimeZoneSet;
+ (ATVTimeZoneUtility *)timeZoneCityDisplayNameIncludingCountry:(char)arg0;
+ (char)setTimeZoneFromCityID:(NSObject *)arg0;
+ (char)isAutomaticTimeZoneSelectionEnabled;
+ (char)setUserAllowedAutomaticTimeZoneSelection:(char)arg0;
+ (char)wasTimeZoneSetByCoreLocation;
+ (NSObject *)timeZoneCityID;
+ (NSTimeZone *)timeZone;

@end
