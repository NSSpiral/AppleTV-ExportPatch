/* Runtime dump - ECUtils
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECUtils : NSObject

+ (NSNumber *)dateFromXlDateTimeNumber:(double)arg0 edWorkbook:(EDWorkbook *)arg1;
+ (NSObject *)renameMap;
+ (double)timeIntervalFromXlDateTimeNumber:(double)arg0 edWorkbook:(EDWorkbook *)arg1;
+ (unsigned int)dateTimeOffsetForBuggy1900Dates:(double)arg0 edWorkbook:(EDWorkbook *)arg1;
+ (char)isRenameFunction:(id)arg0;
+ (ECUtils *)renameFunction:(id)arg0;
+ (NSObject *)lassoStyleTableReferenceFromTableId:(NSObject *)arg0;
+ (NSString *)lassoDefaultTableName;
+ (BOOL)isValidDateTime:(double)arg0 edWorkbook:(EDWorkbook *)arg1;
+ (BOOL)validDateInExcel:(id)arg0 edWorkbook:(EDWorkbook *)arg1;
+ (double)dateTimeNumberFromNSDate:(NSDate *)arg0 edWorkbook:(EDWorkbook *)arg1;

@end
