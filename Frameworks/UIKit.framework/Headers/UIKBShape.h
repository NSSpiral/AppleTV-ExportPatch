/* Runtime dump - UIKBShape
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBShape : NSObject <NSCoding, NSCopying>
{
    UIKBGeometry * m_geometry;
    struct CGRect m_frame;
    struct CGRect m_paddedFrame;
    unsigned int m_uid;
    char m_scaled;
    UIKBShape * m_originalShape;
}

@property (retain, nonatomic) UIKBGeometry * geometry;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGRect paddedFrame;
@property (readonly, nonatomic) unsigned int uid;
@property (retain, nonatomic) UIKBShape * originalShape;
@property (nonatomic) char scaled;

+ (NSString *)shape;
+ (UIKBShape *)shapeByCombining:(id)arg0 withShape:(NSString *)arg1;

- (void)dealloc;
- (UIKBShape *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIKBShape *)init;
- (void)setFrame:(struct CGRect)arg0;
- (struct CGRect)frame;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (UIKBShape *)initWithGeometry:(UIKBGeometry *)arg0 frame:(struct CGRect)arg1 paddedFrame:(struct CGSize)arg2;
- (UIKBShape *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (UIKBGeometry *)geometry;
- (struct CGRect)paddedFrame;
- (void)setPaddedFrame:(struct CGRect)arg0;
- (void)setGeometry:(UIKBGeometry *)arg0;
- (UIKBShape *)originalShape;
- (void)setOriginalShape:(UIKBShape *)arg0;
- (unsigned int)uid;
- (void)addRectFrom:(NSObject *)arg0 widthFraction:(float)arg1 heightFraction:(float)arg2 adjustOriginXFactor:(float)arg3 adjustOriginYFactor:(float)arg4 absoluteOriginFactors:(char)arg5;
- (struct CGRect)_scaleRect:(NSObject *)arg0 inYAxis:(SEL)arg1;
- (void)makeLikeOther:(id)arg0;
- (char)shouldUseGeometry;
- (void)addRectFrom:(NSObject *)arg0;
- (void)addRectFrom:(NSObject *)arg0 widthFraction:(float)arg1 heightFraction:(float)arg2 adjustOriginXFactor:(float)arg3 adjustOriginYFactor:(float)arg4;
- (void)addRectFrom:(NSObject *)arg0 mergeActionFactors:(id)arg1;
- (void)scaleWidth:(float)arg0;
- (void)scaleIfNeeded:(float)arg0 onlyYAxis:(char)arg1;
- (char)scaled;
- (void)setScaled:(char)arg0;

@end
