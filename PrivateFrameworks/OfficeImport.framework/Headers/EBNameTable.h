/* Runtime dump - EBNameTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBNameTable : NSObject

+ (NSString *)edNameFromXlName:(struct XlName *)arg0 name:(struct XlString *)arg1 state:(struct XlString *)arg2;
+ (struct XlName *)xlNameFromEDName:(struct XlString *)arg0 state:(struct XlString *)arg1;
+ (void)readFromState:(NSObject *)arg0;
+ (struct XlNameTable *)createXlNameTableFromNamesCollection:(unsigned int)arg0 state:(unsigned int)arg1;

@end
