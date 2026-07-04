/* Runtime dump - WBTableStyleOverride
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBTableStyleOverride : NSObject

+ (void)readFrom:(NSObject *)arg0 wrdStyle:(struct WrdStyle *)arg1 style:(struct WrdParagraphProperties *)arg2 part:(struct WrdParagraphProperties *)arg3 tableStyleOverride:(struct WrdCharacterProperties *)arg4;
+ (void)prepareForWriting:(id)arg0 tableStyleOverride:(WBTableStyleOverride *)arg1 wrdProperties:(struct WrdCharacterProperties *)arg2 tracked:(struct CsColour)arg3;

@end
