/* Runtime dump - WBTableCellBodyProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBTableCellBodyProperties : NSObject

+ (void)readFrom:(struct WrdTableProperties *)arg0 tracked:(struct WrdTableAutoformatLookSpecifier *)arg1 properties:(struct WrdTableCellDescriptor *)arg2 index:(struct WrdShading *)arg3;
+ (void)mapWordProperties:(struct WrdTableProperties *)arg0 toProperties:(struct WrdTableAutoformatLookSpecifier *)arg1 index:(struct WrdTableCellDescriptor *)arg2;
+ (void)mapProperties:(NSDictionary *)arg0 toWordProperties:(struct WrdTableProperties *)arg1 index:(struct WrdTableAutoformatLookSpecifier *)arg2;
+ (void)write:(char *)arg0 wrdProperties:(struct WrdTableProperties *)arg1 tracked:(struct WrdTableAutoformatLookSpecifier *)arg2 index:(struct WrdTableCellDescriptor *)arg3;
+ (NSDate *)formattingChangeDate:(struct WrdDateTime *)arg0;

@end
