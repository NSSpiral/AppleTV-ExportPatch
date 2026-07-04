/* Runtime dump - MFStringAccumulator
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFStringAccumulator : NSObject
{
    NSMutableString * _mutable;
    NSString * _immutable;
}

- (void)dealloc;
- (void)appendString:(NSString *)arg0;
- (NSString *)string;

@end
