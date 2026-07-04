/* Runtime dump - CTEmailAddress
 * Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress>
{
    NSString * _address;
}

@property (readonly) NSString * address;

+ (CTEmailAddress *)emailAddress:(NSString *)arg0;

- (CTEmailAddress *)initWithAddress:(NSString *)arg0;
- (NSString *)encodedString;
- (NSString *)canonicalFormat;
- (void)dealloc;
- (CTEmailAddress *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)address;

@end
