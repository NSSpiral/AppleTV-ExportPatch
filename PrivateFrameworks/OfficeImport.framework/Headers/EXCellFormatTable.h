/* Runtime dump - EXCellFormatTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXCellFormatTable : NSObject

+ (void)readCellFormatsFrom:(struct _xmlNode *)arg0 isStyle:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readFromCellXfsElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readFromCellStyleXfsElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readFromCellStylesElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;

@end
