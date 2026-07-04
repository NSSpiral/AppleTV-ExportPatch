/* Runtime dump - EBSheet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBSheet : NSObject

+ (Class)edSheetClassFromXlSheetTypeEnum:(int)arg0;
+ (Class)ebSheetClassFromEDSheet:(NSObject *)arg0;
+ (void)readDelayedSheetWithIndex:(unsigned int)arg0 state:(NSObject *)arg1;
+ (void)readSheetWithIndex:(unsigned int)arg0 state:(NSObject *)arg1;

@end
