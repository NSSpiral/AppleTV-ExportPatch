/* Runtime dump - CTMmsEncoder
 * Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTMmsEncoder : NSObject

+ (CTMmsEncoder *)encodeSms:(id)arg0;
+ (NSString *)encodeMessage:(NSString *)arg0;
+ (NSData *)decodeMessageFromData:(NSData *)arg0;
+ (NSData *)decodeSmsFromData:(NSData *)arg0;

@end
