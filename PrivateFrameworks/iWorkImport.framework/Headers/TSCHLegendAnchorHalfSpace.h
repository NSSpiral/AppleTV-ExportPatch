/* Runtime dump - TSCHLegendAnchorHalfSpace
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendAnchorHalfSpace : NSObject
{
    struct TSCHLegendAnchorLine mLine;
}

@property (readonly, nonatomic) struct TSCHLegendAnchorLine line;

+ (TSCHLegendAnchorHalfSpace *)halfSpaceWithLine:(struct TSCHLegendAnchorLine)arg0;

- (TSCHLegendAnchorHalfSpace *)initWithLine:(struct TSCHLegendAnchorLine)arg0;
- (NSString *)description;
- (struct TSCHLegendAnchorLine)line;

@end
