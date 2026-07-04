/* Runtime dump - TSCEFormulaRewrite_RegionMergedInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaRewrite_RegionMergedInfo : NSObject
{
    struct ? _mergeSource;
    TSCEFormulaRewrite_RegionInfo * _mergeRegion;
}

@property (nonatomic) struct ? * mergeSource;
@property (readonly, nonatomic) TSCEFormulaRewrite_RegionInfo * mergeRegion;

- (TSCEFormulaRewrite_RegionMergedInfo *)initWithMergeRegion:(TSCEFormulaRewrite_RegionInfo *)arg0;
- (struct ? *)mergeSource;
- (void)setMergeSource:(struct ? *)arg0;
- (TSCEFormulaRewrite_RegionInfo *)mergeRegion;
- (void)dealloc;
- (void).cxx_construct;

@end
