/* Runtime dump - MKScaleView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKScaleView : UIView
{
    double _distanceInMeters;
    char _useMetric;
    char _useYardsForShortDistances;
    NSNumberFormatter * _floatNumberFormatter;
    id _magicNumbers;
    UIColor * _lightSegmentColorRegular;
    UIColor * _darkSegmentColorRegular;
    UIColor * _borderColorRegular;
    UIColor * _lightSegmentColorSatellite;
    UIColor * _darkSegmentColorSatellite;
    UIColor * _borderColorSatellite;
    NSMutableArray * _segments;
    _MKScaleUnitsView * _unitsView;
    int _oldNumberOfSegments;
    UIView * _outlineViewA;
    UIView * _outlineViewB;
    UIView * _displayedOutline;
    float _segmentLengthInPixels;
    double _resultSegmentLength;
    double _resultSegmentLengthInMeters;
    NSMutableDictionary * _formattedNumberCache;
    NSString * _feetAbbreviation;
    NSString * _yardAbbreviation;
    NSString * _milesAbbreviation;
    NSString * _metersAbbreviation;
    NSString * _kilometersAbbreviation;
    int _grQuality;
    int _layoutCounter;
    char _useLightText;
}

@property (nonatomic) char useLightText;
@property (nonatomic) double distanceInMeters;

- (void)setUseLightText:(char)arg0;
- (void)setDistanceInMeters:(double)arg0;
- (void)updateLocale:(NSObject *)arg0;
- (void)memoryWarning:(id)arg0;
- (void)_updateStrings;
- (void)_updateSegmentStrokes;
- (void)_localizedDistanceStringsWithMeters:(unsigned int)arg0 imperial:(double)arg1 useFeet:(char)arg2 inMetric:(char)arg3 displaysYardsForShortDistances:(char)arg4 strings:(NSArray *)arg5;
- (void)_calculateSegments;
- (id)_formattedStringForFloat:(float)arg0;
- (id)_scaleViewFormattedStringForFloat:(float)arg0;
- (id)_scaleViewFormattedStringForInteger:(int)arg0;
- (void)dealloc;
- (void)didMoveToWindow;
- (MKScaleView *)init;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
