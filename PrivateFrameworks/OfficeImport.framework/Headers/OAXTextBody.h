/* Runtime dump - OAXTextBody
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXTextBody : NSObject

+ (int)readFlowType:(NSObject *)arg0;
+ (int)readAnchorType:(NSObject *)arg0;
+ (int)readHorizontalOverflowType:(NSObject *)arg0;
+ (void)readTextBodyFromXmlNode:(struct _xmlNode *)arg0 textBody:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readTextBodyProperties:(struct _xmlNode *)arg0 textBodyProperties:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readFlowType:(NSObject *)arg0 textBodyProperties:(NSDictionary *)arg1;
+ (void)readWrapType:(NSObject *)arg0 textBodyProperties:(NSDictionary *)arg1;
+ (void)readVerticalOverflowType:(NSObject *)arg0 textBodyProperties:(NSDictionary *)arg1;
+ (void)readHorizontalOverflowType:(NSObject *)arg0 textBodyProperties:(NSDictionary *)arg1;
+ (void)writeTextBodyAutoFit:(id)arg0 to:(NSObject *)arg1;
+ (NSObject *)stringWithTextBodyVerticalOverflowType:(int)arg0;
+ (NSObject *)stringWithTextBodyHorizontalOverflowType:(int)arg0;
+ (NSObject *)stringWithTextBodyFlowType:(int)arg0;
+ (NSObject *)stringWithTextBodyWrapType:(int)arg0;
+ (NSObject *)stringWithTextAnchorType:(int)arg0;

@end
