/* Runtime dump - PLSearchIndexDateFormatter
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchIndexDateFormatter : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSDateFormatter * _dateFormatter;
    NSString * _yearFormat;
    NSString * _monthFormat;
    NSString * _displayFormat;
    NSString * _parseFormat;
    char _localeDidChange;
}

- (void)dealloc;
- (PLSearchIndexDateFormatter *)init;
- (NSDate *)newLocalizedComponentsFromDate:(NSDate *)arg0 includeMonth:(char)arg1;
- (void)_localeDidChange:(NSDictionary *)arg0;
- (void)_inqUpdateDateFormat:(NSString *)arg0;
- (void)_inqSetupDateFormatter;
- (NSDate *)_inqNewLocalizedStringFromDate:(NSDate *)arg0;
- (NSDate *)newLocalizedStringFromDate:(NSDate *)arg0;
- (id)newLocalizedStringFromYear:(id)arg0 month:(_UIDatePickerMode_YearMonth *)arg1;

@end
