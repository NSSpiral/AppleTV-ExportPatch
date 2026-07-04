/* Runtime dump - TSCH3DPyramidBlurFBOResource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPyramidBlurFBOResource : TSCH3DFBOResource
{
    struct tvec2<int> mSize;
}

@property (readonly, nonatomic) struct tvec2<int> size;

+ (NSObject *)pyramidResourceWithFBOSize:(struct tvec2<int>)arg0;

- (TSCH3DPyramidBlurFBOResource *)initWithFBOSize:(struct tvec2<int>)arg0;
- (struct tvec2<int>)size;
- (void).cxx_construct;

@end
