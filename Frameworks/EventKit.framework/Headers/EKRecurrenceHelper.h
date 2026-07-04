/* Runtime dump - EKRecurrenceHelper
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRecurrenceHelper : NSObject
{
    NSString * _specifier;
    char _dirty;
    char _parsed;
    NSArray * _daysOfTheWeek;
    NSArray * _daysOfTheMonth;
    NSArray * _daysOfTheYear;
    NSArray * _weeksOfTheYear;
    NSArray * _monthsOfTheYear;
    NSArray * _setPositions;
}

@property (readonly, nonatomic) char isDirty;
@property (copy, nonatomic) NSString * specifier;
@property (copy, nonatomic) NSArray * daysOfTheWeek;
@property (copy, nonatomic) NSArray * daysOfTheMonth;
@property (copy, nonatomic) NSArray * daysOfTheYear;
@property (copy, nonatomic) NSArray * weeksOfTheYear;
@property (copy, nonatomic) NSArray * monthsOfTheYear;
@property (copy, nonatomic) NSArray * setPositions;

- (NSArray *)monthsOfTheYear;
- (NSArray *)daysOfTheMonth;
- (void)revert;
- (void)setDaysOfTheWeek:(NSArray *)arg0;
- (void)setDaysOfTheMonth:(NSArray *)arg0;
- (void)setSetPositions:(NSArray *)arg0;
- (void)setMonthsOfTheYear:(NSArray *)arg0;
- (void)setDaysOfTheYear:(NSArray *)arg0;
- (void)setWeeksOfTheYear:(NSArray *)arg0;
- (NSArray *)daysOfTheWeek;
- (NSArray *)setPositions;
- (NSArray *)daysOfTheYear;
- (NSArray *)weeksOfTheYear;
- (NSString *)specifier;
- (void)_updateSpecifier;
- (void)_clearArrays;
- (void)_parseSpecifierIfNeeded;
- (void)_appendDaysOfTheWeek:(id)arg0 toSpecifier:(PSPhoneNumberSpecifier *)arg1;
- (void)_appendIndexList:(NSArray *)arg0 toSpecifier:(PSPhoneNumberSpecifier *)arg1 propertyKey:(unsigned short)arg2;
- (id)_parseDaysOfWeek:(struct ? *)arg0 range:(unsigned short *)arg1;
- (NSArray *)_parseIndexList:(struct ? *)arg0 range:(unsigned short *)arg1;
- (EKRecurrenceHelper *)initWithSpecifier:(NSString *)arg0;
- (void)setSpecifier:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (char)isDirty;

@end
