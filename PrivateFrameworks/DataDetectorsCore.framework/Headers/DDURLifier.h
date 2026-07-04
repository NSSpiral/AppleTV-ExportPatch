/* Runtime dump - DDURLifier
 * Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDURLifier : NSObject

+ (char)urlIfyNode:(NSObject *)arg0 phoneNumberTypes:(unsigned int)arg1;
+ (NSString *)urlMatchesForString:(NSString *)arg0 includingTel:(char)arg1;
+ (char)urlIfyNode:(NSObject *)arg0;
+ (void)initialize;
+ (NSString *)urlMatchesForString:(NSString *)arg0 phoneNumberTypes:(unsigned int)arg1;
+ (char)urlIfyTextNode:(NSObject *)arg0 inNode:(NSObject *)arg1 forMatches:(TSDMagicMoveTextureZOrdererFlattenableMatches *)arg2;
+ (NSObject *)urlIfyNode:(NSObject *)arg0 usingScanner:(struct __DDScanner *)arg1 phoneNumberTypes:(unsigned int)arg2 withReferenceDate:(NSDate *)arg3 andTimeZone:(NSObject *)arg4;
+ (NSString *)urlMatchesForString:(NSString *)arg0 usingScanner:(struct __DDScanner *)arg1 withPhoneNumberTypes:(unsigned int)arg2 referenceDate:(NSDate *)arg3 timeZone:(NSTimeZone *)arg4 storingResultsIn:(id)arg5;
+ (NSObject *)urlIfyNode:(NSObject *)arg0 usingScanner:(struct __DDScanner *)arg1 phoneNumberTypes:(unsigned int)arg2;
+ (NSString *)urlMatchesForString:(NSString *)arg0;

@end
