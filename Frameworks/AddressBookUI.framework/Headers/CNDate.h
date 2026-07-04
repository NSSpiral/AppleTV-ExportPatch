/* Runtime dump - CNDate
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNDate : NSObject

+ (NSDate *)yearlessComponentsFromDate:(NSDate *)arg0 calendar:(NSCalendar *)arg1;
+ (NSDate *)componentsFromDate:(NSDate *)arg0 calendar:(NSCalendar *)arg1;
+ (void)localeDidChange:(char)arg0;
+ (char)isYearlessComponents:(NSArray *)arg0;
+ (NSDate *)yearlessComponentsFromDate:(NSDate *)arg0;
+ (NSDate *)componentsFromDate:(NSDate *)arg0;
+ (CNDate *)currentCalendarGMT;
+ (id)gregorianCalendarGMT;
+ (void)initialize;
+ (CNDate *)dateFromComponents:(NSArray *)arg0;

@end
