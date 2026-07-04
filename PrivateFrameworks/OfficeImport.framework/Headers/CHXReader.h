/* Runtime dump - CHXReader
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXReader : NSObject

+ (NSObject *)readFromParentNode:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)chartPartWithParentNode:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (CHXReader *)externalDataRelationshipWithChartPart:(id)arg0 drawingState:(struct _xmlNode *)arg1;
+ (CHXReader *)externalDataWithChartPart:(id)arg0 relationship:(OCXRelationship *)arg1;
+ (NSObject *)readFromXmlDocument:(struct _xmlDoc *)arg0 chartStyleId:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;

@end
