/* Runtime dump - TSCH3DChartTitleProperties
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartTitleProperties : NSObject
{
    TSCHChartInfo * mInfo;
    TSCH3DLabelResources * mLabels;
    char mHidden;
    TSCH3DChartTitlePositioner * mCachedPositioner;
}

@property (readonly, nonatomic) TSCH3DLabelResources * labels;
@property (readonly, nonatomic) TSCHChartInfo * chartInfo;
@property (nonatomic) char hidden;
@property (retain, nonatomic) TSCH3DChartTitlePositioner * cachedPositioner;

+ (NSDictionary *)propertiesWithInfo:(NSDictionary *)arg0 styleIndex:(unsigned int)arg1;

- (TSCHChartInfo *)chartInfo;
- (TSCH3DChartTitleProperties *)initWithInfo:(NSDictionary *)arg0 styleIndex:(unsigned int)arg1;
- (TSCH3DChartTitlePositioner *)cachedPositioner;
- (void)setCachedPositioner:(TSCH3DChartTitlePositioner *)arg0;
- (void)dealloc;
- (void)setHidden:(char)arg0;
- (TSCH3DChartTitleProperties *)copyWithZone:(struct _NSZone *)arg0;
- (char)hidden;
- (TSCH3DLabelResources *)labels;

@end
