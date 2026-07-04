/* Runtime dump - TSCH3DPrefilteredLineSetting
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPrefilteredLineSetting : NSObject
{
    char mDisableColorOutput;
    char mCullBackfaces;
    char mUseNormals;
    struct tvec4<float> mFilterRadius;
    float mLineWidth;
    struct tvec4<float> mStrokeColor;
    TSDStroke * mStroke;
}

@property (nonatomic) char useNormals;
@property (nonatomic) char disableColorOutput;
@property (nonatomic) char cullBackfaces;
@property (nonatomic) struct tvec4<float> filterRadius;
@property (nonatomic) float lineWidth;
@property (nonatomic) struct tvec4<float> strokeColor;
@property (copy, nonatomic) TSDStroke * stroke;

+ (SASettingEntity *)setting;

- (void)setFilterRadius:(struct tvec4<float>)arg0;
- (char)useNormals;
- (void)setUseNormals:(char)arg0;
- (char)disableColorOutput;
- (void)setDisableColorOutput:(char)arg0;
- (char)cullBackfaces;
- (void)setCullBackfaces:(char)arg0;
- (struct tvec4<float>)filterRadius;
- (void)dealloc;
- (TSCH3DPrefilteredLineSetting *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DPrefilteredLineSetting *)copyWithZone:(struct _NSZone *)arg0;
- (TSDStroke *)stroke;
- (float)lineWidth;
- (void)setLineWidth:(float)arg0;
- (void)setStrokeColor:(struct tvec4<float>)arg0;
- (struct tvec4<float>)strokeColor;
- (void).cxx_construct;
- (void)setStroke:(TSDStroke *)arg0;

@end
