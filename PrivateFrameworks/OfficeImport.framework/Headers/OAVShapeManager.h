/* Runtime dump - OAVShapeManager
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAVShapeManager : NSObject
{
    struct _xmlNode * mShape;
    unsigned short mType;
    OCPPackagePart * mPackagePart;
    NSDictionary * mShapeStyle;
    NSDictionary * mTextBoxStyle;
    OAVReadState * mOAVState;
}

- (void)dealloc;
- (unsigned short)type;
- (NSString *)path;
- (UIColor *)shadowColor;
- (struct _xmlNode *)shape;
- (float)shadowAlpha;
- (id)textRotation;
- (id)textAnchor;
- (OCPZipPackagePart *)packagePart;
- (NSObject *)oavState;
- (UIColor *)fillFgColor;
- (char)isStroked;
- (UIColor *)strokeFgColor;
- (UIColor *)fillBgColor;
- (UIColor *)strokeBgColor;
- (char)isFilled;
- (NSObject *)fillType;
- (float)fillFgAlpha;
- (float)fillAngle;
- (float)fillBgAlpha;
- (float)fillFocus;
- (struct EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (NSObject *)strokeFillType;
- (float)strokeFgAlpha;
- (float)strokeMiterLimit;
- (NSObject *)strokeCompoundType;
- (NSObject *)strokeCapStyle;
- (NSObject *)strokeJoinStyle;
- (NSObject *)strokeStartArrowType;
- (id)strokeStartArrowWidth;
- (id)strokeStartArrowLength;
- (NSObject *)strokeEndArrowType;
- (id)strokeEndArrowWidth;
- (id)strokeEndArrowLength;
- (char)isShadowed;
- (NSObject *)shadowType;
- (struct CsPoint<int>)limo;
- (char)isFillOK;
- (char)isStrokeOK;
- (char)isShadowOK;
- (NSObject *)imageFillId;
- (NSObject *)imageRelId;
- (NSObject *)movieRelId;
- (OAVShapeManager *)initWithShape:(struct _xmlNode *)arg0 type:(struct _xmlNode *)arg1 packagePart:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3;
- (char)isImage;
- (char)isPolyline;
- (char)isWordArt;
- (id)textBodyRects;
- (NSString *)imageFillTitle;
- (NSObject *)strokeDashStyle;
- (struct CGPoint)shadowOffsets;
- (char)autoInsets;
- (struct OAVTextBoxInsets)textInsets;
- (id)textLayoutFlow;
- (id)textAltLayoutFlow;
- (char)fitShapeToText;
- (NSObject *)textWrapStyle;
- (float)strokeWidth;
- (NSString *)points;

@end
