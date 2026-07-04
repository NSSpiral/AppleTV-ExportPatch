/* Runtime dump - WBTableRow
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBTableRow : NSObject

+ (void)readFrom:(NSObject *)arg0 textRuns:(id)arg1 to:(NSObject *)arg2 index:(unsigned int)arg3 row:(id)arg4;
+ (void)readCellsFrom:(NSObject *)arg0 textRuns:(id)arg1 level:(int)arg2 to:(NSObject *)arg3 properties:(struct WrdTableProperties *)arg4 tracked:(struct WrdTableAutoformatLookSpecifier *)arg5;
+ (void)collectCellProperties:(struct WrdTableProperties *)arg0 tracked:(struct WrdTableAutoformatLookSpecifier *)arg1 for:(struct WrdTableCellDescriptor *)arg2;

@end
