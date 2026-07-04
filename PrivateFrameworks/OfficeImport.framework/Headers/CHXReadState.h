/* Runtime dump - CHXReadState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXReadState : NSObject
{
    EXOfficeArtState * mDrawingState;
    CHDChart * mChart;
    EDResources * mResources;
    OCPPackagePart * mChartPart;
    CHDChartType * mCurrentChartType;
    CHDSeries * mCurrentSeries;
    OADParagraphProperties * mDefaultTextProperties;
    char mDefaultTextPropertiesHaveExplicitFontSize;
    <CHAutoStyling> * mAutoStyling;
    char mIgnoreFormulas;
}

@property (nonatomic) char ignoreFormulas;

- (void)dealloc;
- (void)setChart:(GQHChart *)arg0;
- (BOOL)chart;
- (id)autoStyling;
- (NSObject *)drawingState;
- (NSDictionary *)defaultTextProperties;
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(char)arg0;
- (void)setDefaultTextProperties:(NSDictionary *)arg0;
- (void)setCurrentChartType:(NSObject *)arg0;
- (NSObject *)exState;
- (char)ignoreFormulas;
- (NSObject *)currentChartType;
- (void)pushTitleTextProperties:(char)arg0;
- (void)popTitleTextProperties;
- (id)currentSeries;
- (CHXReadState *)initWithDrawingState:(NSObject *)arg0;
- (void)setChartPart:(id)arg0;
- (void)setIgnoreFormulas:(char)arg0;
- (void)setCurrentSeries:(id)arg0;
- (id)chartPart;
- (void)setResources:(NSArray *)arg0;
- (NSArray *)resources;

@end
