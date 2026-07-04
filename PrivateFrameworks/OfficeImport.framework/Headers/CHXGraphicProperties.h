/* Runtime dump - CHXGraphicProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXGraphicProperties : NSObject

+ (void)setGraphicPropertiesFromXmlElementWithGraphicProperties:(NSDictionary *)arg0 element:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (char)isGraphicPropertiesContainedByXmlElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (NSDictionary *)oadGraphicPropertiesFromXmlElementWithGraphicProperties:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;

@end
