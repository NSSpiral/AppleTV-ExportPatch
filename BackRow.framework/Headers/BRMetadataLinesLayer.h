/* Runtime dump - BRMetadataLinesLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRMetadataContainer;
@interface BRMetadataLinesLayer : BRControl <BRMetadataContainer>
{
    struct CGSize _sizeThatFits;
    float _lineHeight;
    char _delimeterDisabled;
    char _useMultiLineMetadata;
    NSArray * _lineLayers;
    NSArray * _values;
    NSArray * _labels;
    float _extraLineHeight;
}

@property (retain, nonatomic) NSArray * values;
@property (retain, nonatomic) NSArray * labels;
@property (nonatomic) char delimeterDisabled;
@property (nonatomic) char useMultiLineMetadata;
@property (nonatomic) float extraLineHeight;
@property (retain, nonatomic) NSArray * lineLayers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)layoutSubcontrols;
- (void)setMetadata:(NSArray *)arg0 withLabels:(NSArray *)arg1;
- (void)setUseMultiLineMetadata:(char)arg0;
- (void)setExtraLineHeight:(float)arg0;
- (void)resetFrameWidth:(float)arg0 maxHeight:(float)arg1;
- (void)setMetadata:(NSData *)arg0 withLabels:(NSArray *)arg1 frameWidth:(float)arg2 maxHeight:(float)arg3;
- (void)setLineLayers:(NSArray *)arg0;
- (void)_setLineHeightUsingValues:(NSArray *)arg0 andLabels:(id)arg1;
- (id)_visibleMetadataIndexesForHeight:(float)arg0 andValues:(id *)arg1;
- (void)_buildLineLayersForValues:(NSArray *)arg0 andLabels:(id)arg1 usingIndexes:(NSArray *)arg2;
- (void)_layoutLines;
- (char)delimeterDisabled;
- (void)setDelimeterDisabled:(char)arg0;
- (NSArray *)lineLayers;
- (float)extraLineHeight;
- (char)useMultiLineMetadata;
- (float)_widthOfWidestLabel;
- (void)dealloc;
- (BRMetadataLinesLayer *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setValues:(NSArray *)arg0;
- (NSString *)accessibilityLabel;
- (NSArray *)values;
- (void)setLabels:(NSArray *)arg0;
- (NSArray *)labels;

@end
