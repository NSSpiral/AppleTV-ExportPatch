/* Runtime dump - OABFillPropertiesManager
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager>
{
    struct EshFill * mFill;
    int mShapeType;
    <OABPropertiesManager> * mMasterManager;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (struct EshColor)shadowColor;
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
- (OABFillPropertiesManager *)initWithFill:(struct EshFill *)arg0 shapeType:(struct EshFill)arg1 masterShape:(id)arg2;

@end
