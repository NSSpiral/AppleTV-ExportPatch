/* Runtime dump - CMXmlUtils
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMXmlUtils : NSObject

+ (NSObject *)copyXhtmlDocument;
+ (NSString *)copyHeadElementWithTitle:(NSString *)arg0 deviceWidth:(int)arg1;
+ (void)filterString:(NSString *)arg0;
+ (NSObject *)copyHeadElement;
+ (CMXmlUtils *)copyHeadElementForDeviceWidth:(int)arg0;
+ (NSString *)copyFilteredString:(NSString *)arg0;
+ (NSData *)xhtmlStringWithXmlData:(NSData *)arg0;
+ (NSString *)copyHeadElementWithTitle:(NSString *)arg0;

@end
