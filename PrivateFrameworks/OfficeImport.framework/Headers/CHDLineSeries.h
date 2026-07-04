/* Runtime dump - CHDLineSeries
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDLineSeries : CHDSeries <CHDMarkerOwner>
{
    CHDMarker * mMarker;
    BOOL mSmooth;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (CHDMarker *)marker;
- (CHDLineSeries *)initWithChart:(GQHChart *)arg0;
- (void)setMarker:(CHDMarker *)arg0;
- (void)setSmooth:(BOOL)arg0;
- (BOOL)isSmooth;

@end
