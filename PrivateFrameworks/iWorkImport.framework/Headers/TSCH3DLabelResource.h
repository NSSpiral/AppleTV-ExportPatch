/* Runtime dump - TSCH3DLabelResource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLabelResource : TSCH3DResource <TSCH3DStringIndexableResource>
{
    char mSizeAndOffsetCalculated;
    struct tvec2<float> mTightSize;
    struct tvec2<float> mSize;
    struct tvec2<float> mLabelRenderOffset;
    struct tvec2<float> mBitmapLabelRenderOffset;
    TSCH3DLabelResourceAttributes * mAttributes;
}

@property (readonly, nonatomic) struct tvec2<float> labelSize;
@property (readonly, nonatomic) struct tvec2<float> tightSize;
@property (readonly, nonatomic) struct tvec2<int> clampedLabelSampledSize;
@property (readonly, nonatomic) struct tvec2<float> labelRenderOffset;
@property (copy, nonatomic) TSCH3DLabelResourceAttributes * attributes;
@property (readonly, nonatomic) struct tvec2<float> bitmapLabelRenderOffset;

+ (NSDictionary *)resourceWithLabelAttributes:(NSDictionary *)arg0;

- (struct tvec2<int>)clampedLabelSampledSize;
- (TSCH3DLabelResource *)initWithLabelAttributes:(NSDictionary *)arg0;
- (struct tvec2<int>)p_clampedLabelSampledSizeReturningClampedRatio:(float *)arg0;
- (struct tvec2<float>)bitmapLabelRenderOffset;
- (void)p_calculateSizeAndOffset;
- (struct tvec2<int>)labelSizeWithSamples:(float)arg0;
- (struct tvec2<float>)tightSize;
- (struct tvec2<float>)labelRenderOffset;
- (void)dealloc;
- (TSCH3DLabelResource *)init;
- (char)isEqual:(NSObject *)arg0;
- (void)setString:(NSString *)arg0;
- (void).cxx_construct;
- (struct tvec2<float>)labelSize;
- (TSCH3DLabelResourceAttributes *)attributes;
- (void)setAttributes:(TSCH3DLabelResourceAttributes *)arg0;
- (NSObject *)get;

@end
