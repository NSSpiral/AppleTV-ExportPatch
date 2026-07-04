/* Runtime dump - TSWPColumnStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPColumnStyle : TSSStyle <TSWPColumnMetrics>

@property (readonly, nonatomic) TSWPPadding * layoutMargins;
@property (readonly, nonatomic) unsigned int columnCount;
@property (readonly, nonatomic) char alwaysStartsNewTarget;
@property (readonly, nonatomic) char shrinkTextToFit;
@property (readonly, nonatomic) char columnsAreLeftToRight;
@property (readonly, nonatomic) float textScaleFactor;

+ (TSWPColumnStyle *)defaultStyleWithContext:(NSObject *)arg0;
+ (TSWPColumnStyle *)defaultValueForProperty:(int)arg0;
+ (int)defaultIntValueForProperty:(int)arg0;
+ (float)defaultFloatValueForProperty:(int)arg0;
+ (TSWPColumnStyle *)propertiesAllowingNSNull;
+ (NSDictionary *)properties;

- (TSWPColumnStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ColumnStyleArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct ColumnStyleArchive *)arg0 unarchiver:(struct ColumnStyleArchive)arg1;
- (struct CGSize)adjustedInsetsForTarget:(NSObject *)arg0;
- (float)widthForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)gapForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)positionForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1 target:(NSObject *)arg2 outWidth:(float *)arg3 outGap:(float *)arg4;
- (char)alwaysStartsNewTarget;
- (char)shrinkTextToFit;
- (char)columnsAreLeftToRight;
- (char)equalWidth;
- (TSWPPadding *)layoutMargins;
- (unsigned int)columnCount;

@end
