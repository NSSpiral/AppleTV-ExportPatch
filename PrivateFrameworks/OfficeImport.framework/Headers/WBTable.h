/* Runtime dump - WBTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBTable : NSObject

+ (void)initPropertiesFrom:(NSObject *)arg0 to:(NSObject *)arg1 in:(id)arg2;
+ (void)readRowFrom:(NSObject *)arg0 textRuns:(id)arg1 to:(NSObject *)arg2;
+ (char)isTableFloating:(struct WrdTableProperties *)arg0 tracked:(struct WrdTableProperties)arg1;
+ (void)readFrom:(NSObject *)arg0 textRuns:(id)arg1 table:(_UIAlertSheetTable *)arg2;
+ (char)tryToReadRowFrom:(NSObject *)arg0 textRuns:(id)arg1 to:(NSObject *)arg2;

@end
