/* Runtime dump - ATVRadioStationControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol ATVRadioStationImageLoaderDelegate;
@protocol BRMediaShelfViewCell;

@class ATVImageControl, ATVRadioStation, ATVRadioStationImageLoader, ATVStackAttributes, ATVStackItemControl, BRAutoScrollingTextControl, BRControl, BRImageControl, BRReflectionControl, BRTextControl;
@interface ATVRadioStationControl : BRControl <ATVRadioStationImageLoaderDelegate, BRMediaShelfViewCell>
{
    char _sponsoredStation;
    char _sponsoredSelectorScheduled;
    char _showsPuddleShadow;
    ATVDataCollection * _radioStation;
    <CAAction> * _positionAction;
    BRControl * _perspectiveTargetView;
    unsigned int _style;
    ATVStackItemControl * _primaryStationImageView;
    BRReflectionControl * _primaryReflection;
    BRImageControl * _addStationView;
    BRTextControl * _stationNameView;
    BRAutoScrollingTextControl * _stationNameMarqueeView;
    BRTextControl * _followersTextView;
    BRImageControl * _speakerView;
    unsigned int _sponsoredStationFlatState;
    NSArray * _stackItems;
    ATVStackAttributes * _stackAttributes;
    ATVRadioStationImageLoader * _imageLoader;
    ATVImageControl * _puddleShadow;
    struct CGPoint _vanishingPoint;
    double _sponsoredStationTimeStamp;
}

@property (retain, nonatomic) ATVDataCollection * radioStation;
@property (retain, nonatomic) <CAAction> * positionAction;
@property (weak, nonatomic) BRControl * perspectiveTargetView;
@property (nonatomic) struct CGPoint vanishingPoint;
@property (nonatomic) unsigned int style;
@property (retain, nonatomic) ATVStackItemControl * primaryStationImageView;
@property (retain, nonatomic) BRReflectionControl * primaryReflection;
@property (retain, nonatomic) BRImageControl * addStationView;
@property (retain, nonatomic) BRTextControl * stationNameView;
@property (retain, nonatomic) BRAutoScrollingTextControl * stationNameMarqueeView;
@property (retain, nonatomic) BRTextControl * followersTextView;
@property (retain, nonatomic) BRImageControl * speakerView;
@property (nonatomic) char sponsoredStation;
@property (nonatomic) double sponsoredStationTimeStamp;
@property (nonatomic) unsigned int sponsoredStationFlatState;
@property (nonatomic) char sponsoredSelectorScheduled;
@property (copy, nonatomic) NSArray * stackItems;
@property (retain, nonatomic) ATVStackAttributes * stackAttributes;
@property (retain, nonatomic) ATVRadioStationImageLoader * imageLoader;
@property (retain, nonatomic) ATVImageControl * puddleShadow;
@property (nonatomic) char showsPuddleShadow;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct ?)heightForStyle:(SEL)arg0;
+ (struct ?)imageSizeForStyle:(NSObject *)arg0;
+ (NSObject *)stackAttributesForStyle:(unsigned int)arg0;

- (void)_focusChanged:(NSNotification *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (ATVRadioStationControl *)initWithStation:(ATVRadioStation *)arg0 style:(unsigned int)arg1;
- (void)updateForChangedDistanceFromVanishingPointAnimated:(char)arg0;
- (void)setPerspectiveTargetView:(BRControl *)arg0;
- (void)setVanishingPoint:(struct CGPoint)arg0;
- (<CAAction> *)positionAction;
- (void)setPositionAction:(<CAAction> *)arg0;
- (void)_scrollCompleted:(id)arg0;
- (void)setShowsPuddleShadow:(char)arg0;
- (void)windowMaxBoundsChanged;
- (char)isSponsoredStation;
- (void)_updateSponsoredStationReporting;
- (ATVStackItemControl *)primaryStationImageView;
- (void)_updateSubviews;
- (char)sponsoredSelectorScheduled;
- (void)setSpeakerView:(BRImageControl *)arg0;
- (NSArray *)stackItems;
- (void)setStackItems:(NSArray *)arg0;
- (BRTextControl *)stationNameView;
- (void)setStationNameView:(BRTextControl *)arg0;
- (NSString *)_attributedStationName;
- (BRTextControl *)followersTextView;
- (void)setFollowersTextView:(BRTextControl *)arg0;
- (char)_isCurrentPlayingStation;
- (BRImageControl *)speakerView;
- (ATVImageControl *)puddleShadow;
- (void)controlWasFocused;
- (BRAutoScrollingTextControl *)stationNameMarqueeView;
- (void)setStationNameMarqueeView:(BRAutoScrollingTextControl *)arg0;
- (void)controlWasUnfocused;
- (BRImageControl *)addStationView;
- (struct CGRect)focusCursorFrame;
- (ATVStackAttributes *)stackAttributes;
- (void)_willChangeFocusCursorFrame;
- (void)_didChangeFocusCursorFrame;
- (BRReflectionControl *)primaryReflection;
- (void)updateForChangedDistanceFromVanishingPoint;
- (NSString *)accessibilityRangeString;
- (void)setImageEdgeAntialiasingEnabled:(char)arg0;
- (void)setSponsoredStationFlatState:(unsigned int)arg0;
- (void)_setNeedsSponsoredStationReportingUpdate;
- (void)setSponsoredSelectorScheduled:(char)arg0;
- (char)_isImageFullyVisible;
- (unsigned int)sponsoredStationFlatState;
- (struct CGSize)_normalizedDistanceFromVanishingPointForCenter:(struct CGPoint)arg0 perspectiveTargetView:(BRControl *)arg1;
- (struct UIOffset)_relativeOffsetForMinimumRelativeOffset:(struct UIOffset)arg0 maximumRelativeOffset:(struct UIOffset)arg1 normalizedDistanceFromVanishingPoint:(struct CGSize)arg2;
- (struct CGPoint)_centerInPerspectiveTargetViewCoordinates;
- (void)_applyLayoutToItem:(NSObject *)arg0 atIndex:(int)arg1 centerInPerspectiveTargetViewCoordinates:(struct CGPoint)arg2;
- (struct UIOffset)relativeOffsetOfItemAtIndex:(float)arg0 withCenter:(struct CGPoint)arg1;
- (void)stationImageLoader:(ATVRadioStationImageLoader *)arg0 didLoadPrimaryImage:(ATVImage *)arg1 stackImages:(NSArray *)arg2;
- (void)hideTextLayers;
- (void)setLayerFlatState:(char)arg0;
- (BRControl *)perspectiveTargetView;
- (struct CGPoint)vanishingPoint;
- (void)setPrimaryStationImageView:(ATVStackItemControl *)arg0;
- (void)setPrimaryReflection:(BRReflectionControl *)arg0;
- (void)setAddStationView:(BRImageControl *)arg0;
- (void)setSponsoredStation:(char)arg0;
- (double)sponsoredStationTimeStamp;
- (void)setSponsoredStationTimeStamp:(double)arg0;
- (void)setStackAttributes:(ATVStackAttributes *)arg0;
- (void)setPuddleShadow:(ATVImageControl *)arg0;
- (char)showsPuddleShadow;
- (void)setRadioStation:(ATVDataCollection *)arg0;
- (ATVDataCollection *)radioStation;
- (void)setFrame:(struct CGRect)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (unsigned int)style;
- (void)setCenter:(struct CGPoint)arg0;
- (NSString *)accessibilityLabel;
- (void)setStyle:(unsigned int)arg0;
- (char)isAccessibilityElement;
- (void).cxx_destruct;
- (ATVRadioStationImageLoader *)imageLoader;
- (void)setImageLoader:(ATVRadioStationImageLoader *)arg0;

@end
