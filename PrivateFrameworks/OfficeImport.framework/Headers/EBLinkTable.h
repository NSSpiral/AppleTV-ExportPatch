/* Runtime dump - EBLinkTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBLinkTable : NSObject

+ (int)mapXlLinkTypeToED:(int)arg0;
+ (int)mapEDLinkTypeToXl:(int)arg0;
+ (void)readFromState:(NSObject *)arg0;
+ (struct XlLinkTable *)createXlLinkTableFromLinksCollection:(unsigned int)arg0 workbook:(unsigned int)arg1 state:(unsigned int)arg2;

@end
