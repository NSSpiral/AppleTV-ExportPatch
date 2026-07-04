/* Runtime dump - WBTableProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBTableProperties : NSObject

+ (void)readFrom:(NSObject *)arg0 wrdProperties:(struct WrdTableProperties *)arg1 tracked:(struct WrdTableAutoformatLookSpecifier *)arg2 properties:(struct WrdTableCellDescriptor *)arg3;
+ (NSDate *)formattingChangeDate:(struct WrdDateTime *)arg0;
+ (void)mapWordProperties:(struct WrdTableProperties *)arg0 reader:(struct WrdTableAutoformatLookSpecifier *)arg1 toProperties:(struct WrdTableCellDescriptor *)arg2;

@end
