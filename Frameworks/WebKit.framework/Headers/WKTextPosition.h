/* Runtime dump - WKTextPosition
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKTextPosition : UITextPosition
{
    struct CGRect _positionRect;
}

@property (nonatomic) struct CGRect positionRect;

+ (WKTextPosition *)textPositionWithRect:(struct CGRect)arg0;

- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void).cxx_construct;
- (struct CGRect)positionRect;
- (void)setPositionRect:(struct CGRect)arg0;

@end
