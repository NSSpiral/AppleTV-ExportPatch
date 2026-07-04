/* Runtime dump - PXLegacyText
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PXLegacyText : NSObject

+ (struct PptTextMasterStyleAtom *)textMasterStyleOfType:(int)arg0 state:(BOOL)arg1;
+ (void)readLegacyTextFromData:(NSData *)arg0 toShape:(struct _xmlNode *)arg1 state:(NSObject *)arg2;
+ (void)readLegacyTextGlobalsFromData:(NSData *)arg0 state:(NSObject *)arg1;

@end
