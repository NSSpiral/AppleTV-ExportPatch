/* Runtime dump - PBPlaceholder
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBPlaceholder : NSObject

+ (int)placeholderTypeFromTextType:(int)arg0;
+ (int)readPlaceholderType:(int)arg0;
+ (int)readPlaceholderSize:(int)arg0;
+ (int)readPlaceholderOrientation:(int)arg0;
+ (char)isBodyPlaceholder:(int)arg0;
+ (char)isTitlePlaceholder:(int)arg0;
+ (void)writePlaceholder:(id)arg0 toPlaceholderAtom:(struct PptOEPlaceholderAtom *)arg1 isMaster:(/* block */ id * *)arg2 isNotes:(/* block */ id)arg3;

@end
