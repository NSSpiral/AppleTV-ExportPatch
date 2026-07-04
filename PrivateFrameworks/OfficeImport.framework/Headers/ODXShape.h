/* Runtime dump - ODXShape
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODXShape : NSObject

+ (void)readNode:(struct _xmlNode *)arg0 toShape:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readTypeFromNode:(struct _xmlNode *)arg0 toShape:(struct _xmlNode *)arg1;
+ (void)readAdjustmentListNode:(struct _xmlNode *)arg0 toShape:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;

@end
