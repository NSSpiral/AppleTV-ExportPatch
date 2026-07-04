/* Runtime dump - MFReformattedAddress
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFReformattedAddress : NSObject
{
    NSString * _address;
    struct _NSRange _middleTruncationRange;
}

@property (readonly, nonatomic) NSString * localPart;
@property (readonly, nonatomic) NSString * domainPart;
@property (nonatomic) struct _NSRange middleTruncationRange;

- (MFReformattedAddress *)initWithAddress:(NSString *)arg0;
- (NSObject *)attributedStringWithFontSize:(float)arg0 maximumWidth:(float)arg1 options:(unsigned int)arg2;
- (float)widthWithFontSize:(float)arg0 maximumWidth:(float)arg1 options:(unsigned int)arg2;
- (NSString *)localPart;
- (void)setMiddleTruncationRange:(struct _NSRange)arg0;
- (struct _NSRange)middleTruncationRange;
- (NSString *)domainPart;
- (void)dealloc;
- (NSString *)description;

@end
