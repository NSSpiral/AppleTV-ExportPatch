/* Runtime dump - MFMessageReformattingContext
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageReformattingContext : NSObject
{
    DOMDocument * _document;
    DOMNode * _body;
    NSMutableArray * _changes;
    float _maximumWidth;
    float _meanWidth;
    float _widthDeviation;
    char _hasAnyLeftFloat;
    NSArray * _rightFloats;
    char _floatsNeedUpdate;
    char _metricsNeedUpdate;
    char _documentContainsAnyWebKitTransform;
    float _minimumRescalingFactor;
    DOMRange * _firstTextRange;
}

@property (readonly, nonatomic) char hasAnyLeftFloat;
@property (readonly, nonatomic) char hasAnyRightFloat;
@property (readonly, copy, nonatomic) NSArray * rightFloats;
@property (readonly, nonatomic) float maximumWidth;
@property (readonly, nonatomic) float meanWidth;
@property (readonly, nonatomic) float widthDeviation;
@property (nonatomic) float minimumRescalingFactor;
@property (readonly, nonatomic) DOMDocument * document;
@property (readonly, nonatomic) DOMNode * body;
@property (readonly, nonatomic) char didChangeDocument;
@property (retain, nonatomic) DOMRange * firstTextRange;

- (float)minimumRescalingFactor;
- (char)hasAnyRightFloat;
- (void)rollBackLastChangeForElement:(NSObject *)arg0;
- (void)rollBackAllChanges;
- (char)didChangeDocument;
- (float)widthDeviation;
- (float)meanWidth;
- (char)hasAnyLeftFloat;
- (NSArray *)rightFloats;
- (struct CGRect)boundingBoxOf:(SCNBoundingBox *)arg0;
- (char)rescaleElement:(NSObject *)arg0 withScale:(float)arg1;
- (DOMRange *)firstTextRange;
- (void)setFirstTextRange:(DOMRange *)arg0;
- (char)resizeElement:(NSObject *)arg0 withScale:(float)arg1 verificationBlock:(id /* block */)arg2;
- (void)setMinimumRescalingFactor:(float)arg0;
- (void)_updateFloatsIfNecessary;
- (void)_updateMetricsIfNecessary;
- (char)changeSizeOfElement:(NSObject *)arg0 priority:(struct _GEOTileKey)arg1 usingBlock:(id /* block */)arg2;
- (void)changeProprety:(id)arg0 ofElement:(NSObject *)arg1 toValue:(NSValue *)arg2 priority:(struct _GEOTileKey)arg3;
- (char)changeMarginOfElement:(NSObject *)arg0 priority:(struct _GEOTileKey)arg1 usingBlock:(id /* block */)arg2;
- (void)_rollBackChange:(NSDictionary *)arg0;
- (void)dealloc;
- (float)maximumWidth;
- (DOMNode *)body;
- (DOMDocument *)document;
- (MFMessageReformattingContext *)initWithDocument:(DOMDocument *)arg0;

@end
