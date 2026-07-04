/* Runtime dump - ODXData
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODXData : NSObject

+ (NSObject *)readPointListFromNode:(struct _xmlNode *)arg0 pointIdMap:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readConnectionListFromNode:(struct _xmlNode *)arg0 pointIdMap:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)associatePresentationsInIdMap:(NSObject *)arg0;
+ (NSObject *)readPointFromNode:(struct _xmlNode *)arg0 pointIdMap:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (int)readPointTypeFromNode:(struct _xmlNode *)arg0;
+ (void)readConnectionFromNode:(struct _xmlNode *)arg0 pointIdMap:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (int)readConnectionTypeFromNode:(struct _xmlNode *)arg0;
+ (void)readNode:(struct _xmlNode *)arg0 toDiagram:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (NSObject *)readModelIdentifierFromNode:(struct _xmlNode *)arg0 attributeName:(struct _xmlNode *)arg1;

@end
