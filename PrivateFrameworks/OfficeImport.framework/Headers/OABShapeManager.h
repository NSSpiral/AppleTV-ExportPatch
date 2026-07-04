/* Runtime dump - OABShapeManager
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager>
{
    struct EshShape * mShape;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (OABShapeManager *)initWithShape:(struct EshShape *)arg0;
- (char)isStroked;
- (char)isFilled;
- (OABShapeManager *)initWithShape:(struct EshShape *)arg0 masterShape:(struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> >)arg1;
- (char)isShadowed;
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
- (char)hidden;

@end
