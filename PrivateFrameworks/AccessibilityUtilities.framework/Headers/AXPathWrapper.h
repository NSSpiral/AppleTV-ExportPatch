/* Runtime dump - AXPathWrapper
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXPathWrapper : NSObject <NSSecureCoding>
{
    struct CGPath * _path;
}

@property (nonatomic) struct CGPath * path;

+ (char)supportsSecureCoding;
+ (AXPathWrapper *)currentSharedInstance;

- (void)dealloc;
- (AXPathWrapper *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (struct CGPath *)path;
- (void)setPath:(struct CGPath *)arg0;

@end
