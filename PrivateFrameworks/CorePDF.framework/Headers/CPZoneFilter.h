/* Runtime dump - CPZoneFilter
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPZoneFilter : NSObject
{
    CPPage * page;
    double minArea;
}

+ (void)filterZonesInPage:(id)arg0;

- (CPZoneFilter *)initWithPage:(CPPage *)arg0;
- (void)filterZonesInZone:(NSObject *)arg0;
- (void)findBackgroundGraphicsInZone:(NSObject *)arg0;
- (void)findUsedGraphicsInZone:(NSObject *)arg0;

@end
