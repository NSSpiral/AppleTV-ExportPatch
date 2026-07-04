/* Runtime dump - CMTimeMappingAsValue
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface CMTimeMappingAsValue : NSValue
{
    struct ? _timeMapping;
}

+ (CMTimeMappingAsValue *)valueWithCMTimeMapping:(struct ?)arg0;

- (struct ?)CMTimeMappingValue;
- (NSString *)description;
- (void)getValue:(void *)arg0;
- (char *)objCType;

@end
