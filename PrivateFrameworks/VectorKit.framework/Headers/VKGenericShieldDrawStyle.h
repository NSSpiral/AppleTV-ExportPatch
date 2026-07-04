/* Runtime dump - VKGenericShieldDrawStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGenericShieldDrawStyle : VKRenderStyle
{
    struct StyleData * _customData;
}

@property (readonly, nonatomic) int style;
@property (readonly, nonatomic) struct Matrix<float, 4, 1> backgroundColor;
@property (readonly, nonatomic) struct Matrix<float, 4, 1> borderColor;
@property (readonly, nonatomic) struct Matrix<float, 4, 1> textColor;
@property (readonly, nonatomic) float haloSize;
@property (readonly, nonatomic) struct Matrix<float, 4, 1> haloColor;
@property (readonly, nonatomic) struct CGSize dropShadowOffset;
@property (readonly, nonatomic) float dropShadowSize;
@property (readonly, nonatomic) struct Matrix<float, 4, 1> dropShadowColor;

+ (int)renderStyleID;

- (void)dealloc;
- (struct Matrix<float, 4, 1>)backgroundColor;
- (int)style;
- (struct Matrix<float, 4, 1>)textColor;
- (struct Matrix<float, 4, 1>)borderColor;
- (struct Matrix<float, 4, 1>)dropShadowColor;
- (VKGenericShieldDrawStyle *)initWithStyleData:(struct StyleData *)arg0 info:(struct map<gss::PropertyID, signed char, std::__1::less<gss::PropertyID>, std::__1::allocator<std::__1::pair<const gss::PropertyID, signed char> > >)arg1;
- (VKGenericShieldDrawStyle *)initWithStyle:(int)arg0 backgroundColor:(struct Matrix<float, 4, 1>)arg1 textColor:(struct Matrix<float, 4, 1>)arg2;
- (float)haloSize;
- (struct Matrix<float, 4, 1>)haloColor;
- (float)dropShadowSize;
- (struct CGSize)dropShadowOffset;

@end
