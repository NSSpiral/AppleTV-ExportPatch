/* Runtime dump - WXCharacterRun
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WXCharacterRun : NSObject

+ (void)readFrom:(struct _xmlNode *)arg0 to:(struct _xmlNode *)arg1;
+ (void)readFromString:(NSString *)arg0 source:(struct _xmlNode *)arg1 to:(struct _xmlNode *)arg2;
+ (WXCharacterRun *)fontForRun:(id)arg0 fontType:(int)arg1;
+ (char)isSpecialCharacter:(unsigned short)arg0;

@end
