/* Runtime dump - SBFLockScreenSimpleDateFormatter
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenSimpleDateFormatter : NSObject <SBFLockScreenDateFormatter>
{
    NSTimeZone * _timeZone;
}

@property (retain, nonatomic) NSTimeZone * timeZone;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setTimeZone:(NSTimeZone *)arg0;
- (NSTimeZone *)timeZone;
- (NSObject *)formatDateAsDayOfWeekMonthDayStyle:(NSObject *)arg0;
- (void)resetFormattersIfNecessary;
- (id)formatDateAsTimeNoAMPM:(id)arg0;

@end
