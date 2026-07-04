/* Runtime dump - UIKBGeometry
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBGeometry : NSObject <NSCoding, NSCopying>
{
    NSString * m_name;
    struct ? m_x;
    struct ? m_y;
    struct ? m_w;
    struct ? m_h;
    struct ? m_paddingTop;
    struct ? m_paddingLeft;
    struct ? m_paddingBottom;
    struct ? m_paddingRight;
    char m_explicitlySpecified;
}

@property (retain, nonatomic) NSString * name;
@property (nonatomic) struct ? x;
@property (nonatomic) struct ? y;
@property (nonatomic) struct ? w;
@property (nonatomic) struct ? h;
@property (nonatomic) struct ? paddingTop;
@property (nonatomic) struct ? paddingLeft;
@property (nonatomic) struct ? paddingBottom;
@property (nonatomic) struct ? paddingRight;
@property (nonatomic) char explicitlySpecified;

+ (SCNGeometry *)geometry;
+ (void)performOperations:(NSArray *)arg0 withScale:(/* block */ id)arg1;
+ (NSObject *)geometryWithRect:(struct CGRect)arg0;
+ (UIKBGeometry *)geometryWithOriginValue:(struct ?)arg0 sizeValue:(struct ?)arg1;
+ (UIKBGeometry *)codeStringForValue:(struct ?)arg0;

- (void)dealloc;
- (UIKBGeometry *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIKBGeometry *)init;
- (struct CGRect)frame;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (UIKBGeometry *)copyWithZone:(struct _NSZone *)arg0;
- (struct ?)x;
- (void)setX:(struct ?)arg0;
- (struct ?)y;
- (void)setY:(struct ?)arg0;
- (struct ?)paddingTop;
- (void)setPaddingTop:(struct ?)arg0;
- (void)setPaddingLeft:(struct ?)arg0;
- (struct ?)paddingLeft;
- (struct ?)paddingRight;
- (NSString *)shortDescription;
- (struct ?)w;
- (struct ?)h;
- (void)setW:(struct ?)arg0;
- (void)setH:(struct ?)arg0;
- (struct CGRect)paddedFrameWithResolvedFrame:(char)arg0;
- (struct CGRect)frameWithContainingFrame:(NSObject *)arg0;
- (struct ?)paddingBottom;
- (void)setPaddingBottom:(struct ?)arg0;
- (void)setPaddingRight:(struct ?)arg0;
- (char)explicitlySpecified;
- (void)setExplicitlySpecified:(char)arg0;
- (UIKBGeometry *)initWithName:(NSString *)arg0 rect:(struct ?)arg1 padding:(struct CGSize)arg2;
- (struct CGRect)paddedFrameWithContainingFrame:(NSObject *)arg0;
- (NSObject *)overrideGeometry:(NSObject *)arg0;
- (char)usesPercentages;
- (char)usesAutomaticMetrics;

@end
