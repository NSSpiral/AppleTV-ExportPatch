/* Runtime dump - CMTimeAsValue
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface CMTimeAsValue : NSValue
{
    struct ? _time;
}

+ (CMTimeAsValue *)valueWithCMTime:(struct ?)arg0;

- (int)intValue;
- (char)boolValue;
- (NSString *)description;
- (double)doubleValue;
- (int)integerValue;
- (void)getValue:(void *)arg0;
- (float)floatValue;
- (unsigned int)unsignedIntegerValue;
- (long long)longLongValue;
- (unsigned int)unsignedIntValue;
- (char *)objCType;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long)unsignedLongValue;
- (long)longValue;
- (unsigned char)unsignedCharValue;
- (unsigned short)unsignedShortValue;
- (char)charValue;
- (short)shortValue;
- (struct ?)CMTimeValue;

@end
