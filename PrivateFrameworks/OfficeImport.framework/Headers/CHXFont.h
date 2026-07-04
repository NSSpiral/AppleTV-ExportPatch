/* Runtime dump - CHXFont
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXFont : NSObject

+ (NSObject *)edFontWithOadTextBody:(NSObject *)arg0 state:(NSObject *)arg1;
+ (CHXFont *)defaultEdRunCollectionForTitle:(NSString *)arg0 state:(NSObject *)arg1;
+ (NSObject *)edRunCollectionFromXmlTextPropertiesElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (NSDictionary *)edFontWithOadCharacterProperties:(NSDictionary *)arg0 state:(NSObject *)arg1;
+ (NSObject *)edFontFromXmlTextPropertiesElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)mapFontProperties:(NSDictionary *)arg0 to:(NSObject *)arg1;
+ (void)mapFontProperties:(NSDictionary *)arg0 toTextProps:(id)arg1;

@end
