/* Runtime dump - UILocalNotification
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UILocalNotification : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) NSDate * fireDate;
@property (copy, nonatomic) NSTimeZone * timeZone;
@property (nonatomic) unsigned int repeatInterval;
@property (copy, nonatomic) NSCalendar * repeatCalendar;
@property (copy, nonatomic) CLRegion * region;
@property (nonatomic) char regionTriggersOnce;
@property (copy, nonatomic) NSString * alertBody;
@property (nonatomic) char hasAction;
@property (copy, nonatomic) NSString * alertAction;
@property (copy, nonatomic) NSString * alertLaunchImage;
@property (copy, nonatomic) NSString * alertTitle;
@property (copy, nonatomic) NSString * soundName;
@property (nonatomic) int applicationIconBadgeNumber;
@property (copy, nonatomic) NSDictionary * userInfo;
@property (copy, nonatomic) NSString * category;
@property (nonatomic) int totalRepeatCount;
@property (nonatomic) int remainingRepeatCount;
@property (nonatomic) char hideAlertTitle;
@property (nonatomic) char allowSnooze;
@property (nonatomic) int soundType;
@property (nonatomic) char interruptAudioAndLockDevice;
@property (nonatomic) char resumeApplicationInBackground;
@property (nonatomic) char fireNotificationsWhenAppRunning;
@property (nonatomic) char showAlarmStatusBarItem;
@property (copy, nonatomic) NSString * customLockSliderLabel;
@property (copy, nonatomic) NSString * firedNotificationName;
@property (copy, nonatomic) NSString * snoozedNotificationName;
@property (nonatomic) char isTransient;

+ (UILocalNotification *)alloc;
+ (UILocalNotification *)allocWithZone:(struct _NSZone *)arg0;

- (UILocalNotification *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UILocalNotification *)init;
- (char)isValid;
- (void)validate;
- (UILocalNotification *)copyWithZone:(struct _NSZone *)arg0;
- (NSDate *)nextFireDateForLastFireDate:(NSDate *)arg0;
- (char)isTriggeredByDate;
- (NSDate *)nextFireDateAfterDate:(NSDate *)arg0 localTimeZone:(NSObject *)arg1;
- (int)compareFireDates:(id)arg0;
- (void)clearNonSystemProperties;
- (char)isTriggeredByRegion;

@end
