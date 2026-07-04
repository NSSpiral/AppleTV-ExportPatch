/* Runtime dump - WBOfficeArt
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBOfficeArt : NSObject

+ (void)setShapeAddress:(struct WrdFileShapeAddress *)arg0 toDrawable:(struct WrdFileShapeAddress)arg1;
+ (void)readFrom:(NSObject *)arg0 at:(int)arg1 textRun:(struct WrdCharacterTextRun *)arg2 paragraph:(struct WrdCharacterProperties *)arg3 to:(NSObject *)arg4;

@end
