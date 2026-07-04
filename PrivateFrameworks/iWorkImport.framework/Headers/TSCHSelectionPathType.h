/* Runtime dump - TSCHSelectionPathType
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSelectionPathType : NSObject <NSCopying>
{
    NSString * mType;
    NSString * mName;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSString * type;

+ (NSObject *)axisLabelsType;
+ (TSCHChartSeriesType *)seriesType;
+ (NSObject *)referenceLineValueLabelType;
+ (NSObject *)referenceLineLabelType;
+ (NSObject *)chartTitleType;
+ (NSObject *)seriesLabelType;
+ (NSObject *)chartDataSetNameType;
+ (NSObject *)chartBodyType;
+ (NSObject *)axisLineType;
+ (NSObject *)legendSeriesNameType;
+ (NSObject *)legendTrendLineNameType;
+ (NSObject *)legendType;
+ (NSObject *)axisTitleType;
+ (NSObject *)valueAxisType;
+ (NSObject *)categoryAxisType;
+ (NSObject *)gridLineType;
+ (NSObject *)seriesValueLabelType;
+ (NSObject *)seriesSymbolType;
+ (NSObject *)errorBarType;
+ (NSObject *)trendLineType;
+ (NSObject *)trendLineEquationType;
+ (NSObject *)trendLineR2Type;
+ (NSObject *)referenceLineType;
+ (NSObject *)selectionPathTypeWithType:(NSString *)arg0 name:(NSString *)arg1;

- (void)saveToArchive:(struct ChartSelectionPathTypeArchive *)arg0;
- (char)canApplyParagraphStyle;
- (char)canApplyShapeStyle;
- (char)canApplyChartStyleWithDescription:(NSString *)arg0;
- (void)dealloc;
- (TSCHSelectionPathType *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (NSString *)type;
- (TSCHSelectionPathType *)copyWithZone:(struct _NSZone *)arg0;
- (TSCHSelectionPathType *)initWithType:(NSString *)arg0 name:(NSString *)arg1;
- (TSCHSelectionPathType *)initWithArchive:(struct ChartSelectionPathTypeArchive *)arg0;

@end
