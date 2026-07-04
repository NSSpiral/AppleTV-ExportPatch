/* Runtime dump - WXTableCellProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WXTableCellProperties : NSObject

+ (void)initialize;
+ (void)readFrom:(struct _xmlNode *)arg0 to:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)writeForDocument:(NSObject *)arg0 state:(NSObject *)arg1;
+ (void)writeForStyle:(NSObject *)arg0 state:(NSObject *)arg1;
+ (unsigned long)bitfieldForCnfStyleFrom:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;

@end
