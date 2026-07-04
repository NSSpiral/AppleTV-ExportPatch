/* Runtime dump - MFDataDetectors
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFDataDetectors : NSObject

+ (char)urlIfyNode:(NSObject *)arg0 phoneNumberTypes:(unsigned int)arg1;
+ (MFDataDetectors *)sharedDetectionController;
+ (Class)_DDURLifierClass;
+ (NSString *)urlMatchesForString:(NSString *)arg0 includingTel:(char)arg1;
+ (char)urlIfyNode:(NSObject *)arg0;
+ (NSString *)urlMatchesForString:(NSString *)arg0;

@end
