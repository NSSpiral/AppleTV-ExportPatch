/* Runtime dump - CPSpacerFinder
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPSpacerFinder : NSObject <CPDisposable>
{
    CPZone * contentZone;
    struct CGRect zoneBounds;
    struct CGRect textBounds;
    struct ? spacerSequence;
    NSMutableArray * spacers;
    unsigned int segmentationCount;
    struct ? * segmentations;
    struct ? * qualityEntries;
}

- (void)dealloc;
- (void)dispose;
- (NSMutableArray *)spacers;
- (CPSpacerFinder *)initWithContentZone:(CPZone *)arg0;
- (void)findSpacers;
- (void)splitTextLines;
- (void)initializeSegmentations;
- (void)initializeJunctions;
- (void)assessQuality;
- (void)determineValidity;
- (void)finalize;

@end
