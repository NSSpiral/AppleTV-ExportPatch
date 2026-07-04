/* Runtime dump - WBTableRowProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBTableRowProperties : NSObject

+ (void)readFrom:(NSObject *)arg0 wrdProperties:(struct WrdTableProperties *)arg1 tracked:(struct WrdTableAutoformatLookSpecifier *)arg2 properties:(struct WrdTableCellDescriptor *)arg3;
+ (void)mapWordProperties:(struct WrdTableProperties *)arg0 toProperties:(struct WrdTableAutoformatLookSpecifier *)arg1;
+ (void)write:(char *)arg0 properties:(NSDictionary *)arg1 wrdProperties:(struct WrdTableProperties *)arg2 tracked:(struct WrdTableAutoformatLookSpecifier *)arg3;
+ (void)mapProperties:(NSDictionary *)arg0 toWordProperties:(struct WrdTableProperties *)arg1;

@end
