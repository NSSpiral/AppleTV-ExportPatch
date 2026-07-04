/* Runtime dump - OABDefaultsManager
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABDefaultsManager : NSObject <OABPropertiesManager>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (struct EshColor)shadowColor;
- (int)shadowAlpha;
- (struct EshColor)fillFgColor;
- (char)isStroked;
- (struct EshColor)strokeFgColor;
- (struct EshColor)fillBgColor;
- (struct EshColor)strokeBgColor;
- (char)isFilled;
- (int)fillType;
- (int)fillFgAlpha;
- (int)fillAngle;
- (int)fillFocusLeft;
- (int)fillFocusTop;
- (int)fillFocusRight;
- (int)fillFocusBottom;
- (unsigned int)fillBlipID;
- (NSString *)fillBlipName;
- (struct EshBlip *)fillBlipDataReference;
- (int)fillBgAlpha;
- (long)fillFocus;
- (struct EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (int)strokeFillType;
- (unsigned int)strokeFillBlipID;
- (NSString *)strokeFillBlipName;
- (int)strokeFgAlpha;
- (int)strokeMiterLimit;
- (int)strokeCompoundType;
- (int)strokePresetDash;
- (struct EshTablePropVal<int> *)strokeCustomDash;
- (int)strokeCapStyle;
- (int)strokeJoinStyle;
- (int)strokeStartArrowType;
- (int)strokeStartArrowWidth;
- (int)strokeStartArrowLength;
- (int)strokeEndArrowType;
- (int)strokeEndArrowWidth;
- (int)strokeEndArrowLength;
- (char)isShadowed;
- (int)shadowType;
- (long)shadowOffsetX;
- (long)shadowOffsetY;
- (long)shadowSoftness;
- (char)isFillOK;
- (char)isStrokeOK;
- (char)isShadowOK;
- (char)isTextPath;
- (NSString *)textPathUnicodeString;
- (int)textPathTextAlignment;
- (int)textPathFontSize;
- (NSString *)textPathFontFamily;
- (char)textPathBold;
- (char)textPathItalic;
- (char)textPathUnderline;
- (char)textPathSmallcaps;
- (char)textPathStrikethrough;
- (long)strokeWidth;
- (char)hidden;

@end
