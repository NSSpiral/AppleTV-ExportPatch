/* Runtime dump - CUIThemeSchemaRendition
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeSchemaRendition : CUIThemeRendition
{
    NSDictionary * cuiInfo;
    unsigned long _nimages;
    id _image;
    id _layoutRects;
    struct CGSize _intrinsicSize;
    struct CGRect _elementRect;
    int _columnSlices;
    int _rowSlices;
    struct ? _contentInsets;
    CUIPSDGradient * _gradient;
}

@property (readonly, nonatomic) unsigned long numberOfSlices;
@property (readonly, nonatomic) struct CGRect * sliceRects;
@property (readonly, nonatomic) CUIPSDGradient * gradient;

- (void)dealloc;
- (unsigned short)size;
- (unsigned short)layer;
- (NSString *)description;
- (unsigned short)state;
- (unsigned short)identifier;
- (float)scale;
- (unsigned short)value;
- (unsigned short)direction;
- (void).cxx_construct;
- (NSObject *)stringForState:(unsigned short)arg0;
- (struct ?)contentInsets;
- (CUIPSDGradient *)gradient;
- (struct ?)slices;
- (unsigned long)numberOfSlices;
- (CUIThemeSchemaRendition *)initWithCoreUIOptions:(NSDictionary *)arg0 forKey:(struct _renditionkeytoken *)arg1 artworkStatus:(struct _renditionkeytoken)arg2;
- (CUIImage *)referenceImage;
- (unsigned short)dimension1;
- (unsigned short)dimension2;
- (unsigned short)drawingLayer;
- (unsigned short)keyScale;
- (unsigned short)previousState;
- (struct CGRect *)sliceRects;
- (CUIThemeSchemaRendition *)initWithCoreUIOptions:(NSDictionary *)arg0 forKey:(struct _renditionkeytoken *)arg1;
- (struct CGRect)alignmentRectangle;
- (struct CGRect)edgeInsets:(struct UIEdgeInsets)arg0;
- (NSDictionary *)coreUIOptions;
- (NSString *)defaultTemplateName;
- (int)columnSlices;
- (int)rowSlices;
- (struct CGPoint)renditionCoordinatesForPartFeatures:(int)arg0;
- (NSString *)typeLocalizedString;
- (NSString *)stateLocalizedString;
- (NSString *)previousStateLocalizedString;
- (NSString *)directionLocalizedString;
- (NSString *)valueLocalizedString;
- (NSString *)previousValueLocalizedString;
- (NSString *)sizeLocalizedString;
- (NSString *)presentationStateLocalizedString;
- (NSString *)dimension1LocalizedString;
- (NSString *)dimension2LocalizedString;
- (NSString *)drawingLayerLocalizedString;
- (NSString *)lookLocalizedString;
- (NSString *)scaleLocalizedString;
- (unsigned short)previousValue;
- (NSString *)stringForValue:(unsigned short)arg0;
- (unsigned short)look;
- (unsigned short)presentationState;

@end
