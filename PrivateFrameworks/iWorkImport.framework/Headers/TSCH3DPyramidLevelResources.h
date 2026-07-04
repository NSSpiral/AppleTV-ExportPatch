/* Runtime dump - TSCH3DPyramidLevelResources
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPyramidLevelResources : NSObject
{
    TSUPair * mResourcePair;
}

@property (readonly, nonatomic) TSCH3DPyramidBlurFBOResource * finalResource;
@property (readonly, nonatomic) TSCH3DPyramidBlurFBOResource * temporaryResource;
@property (readonly, nonatomic) struct tvec2<int> size;

+ (NSObject *)resourcesWithFBOSize:(struct tvec2<int>)arg0;

- (TSCH3DPyramidLevelResources *)initWithFBOSize:(struct tvec2<int>)arg0;
- (TSCH3DPyramidBlurFBOResource *)temporaryResource;
- (void)dealloc;
- (struct tvec2<int>)size;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DPyramidBlurFBOResource *)finalResource;

@end
