/* Runtime dump - CTAsciiAddress
 * Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTAsciiAddress : NSObject <NSCopying, CTMessageAddress>
{
    NSString * _address;
}

@property (readonly) NSString * address;

+ (CTAsciiAddress *)asciiAddressWithString:(NSString *)arg0;

- (CTAsciiAddress *)initWithAddress:(NSString *)arg0;
- (NSString *)encodedString;
- (NSString *)canonicalFormat;
- (void)dealloc;
- (CTAsciiAddress *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)address;

@end
