/* Runtime dump - ATVRadioNPHistoryView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol ATVCarouselViewDataSource;
@protocol ATVCarouselViewUIDelegate;

@class ATVCarouselView, ATVCarouselViewUIOpContext, ATVFadeLayer, ATVRadioNPTrackInfoView, ATVRadioPlayer, BRControl, BREvent, BRListControl, BRListView, BRMediaPlayer, BRMenuItem, BRScrollControl, BRTextControl;
@interface ATVRadioNPHistoryView : BRControl <ATVCarouselViewDataSource, ATVCarouselViewUIDelegate>
{
    ATVRadioPlayer * _headlessPlayer;
    BRMediaPlayer * _player;
    ATVCarouselView * _carousel;
    unsigned int _selectedIndex;
    NSArray * _positions;
    float _displacement;
    ATVFadeLayer * _leftFade;
    ATVFadeLayer * _rightFade;
    BRTextControl * _stationNameView;
    BRTextControl * _stationFollowersView;
    ATVRadioNPTrackInfoView * _trackInfoView;
    BRScrollControl * _listScroller;
    BRListView * _optionsList;
    NSArray * _trackOptions;
    NSDictionary * _menuTextAttributes;
    NSArray * _historyItems;
    ATVDataQuery * _addStationQuery;
    float _posterWidth;
    float _posterHeight;
    float _selectedPosterWidth;
    float _selectedPosterHeight;
    struct _NSRange _rangeOfFocusablePositions;
}

@property (weak, nonatomic) BRMediaPlayer * player;
@property (retain, nonatomic) ATVCarouselView * carousel;
@property (nonatomic) unsigned int selectedIndex;
@property (readonly, nonatomic) char isOnCurrentTrack;
@property (retain, nonatomic) NSArray * positions;
@property (nonatomic) struct _NSRange rangeOfFocusablePositions;
@property (nonatomic) float displacement;
@property (retain, nonatomic) ATVFadeLayer * leftFade;
@property (retain, nonatomic) ATVFadeLayer * rightFade;
@property (retain, nonatomic) BRTextControl * stationNameView;
@property (retain, nonatomic) BRTextControl * stationFollowersView;
@property (retain, nonatomic) ATVRadioNPTrackInfoView * trackInfoView;
@property (retain, nonatomic) BRScrollControl * listScroller;
@property (retain, nonatomic) BRListView * optionsList;
@property (retain, nonatomic) NSArray * trackOptions;
@property (retain, nonatomic) NSDictionary * menuTextAttributes;
@property (copy, nonatomic) NSArray * historyItems;
@property (retain, nonatomic) ATVDataQuery * addStationQuery;
@property (nonatomic) float posterWidth;
@property (nonatomic) float posterHeight;
@property (nonatomic) float selectedPosterWidth;
@property (nonatomic) float selectedPosterHeight;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (BRTextControl *)stationNameView;
- (void)setStationNameView:(BRTextControl *)arg0;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_dataItemPropertySet:(NSSet *)arg0;
- (void)setHistory:(NSMutableArray *)arg0 withEvent:(unsigned int)arg1;
- (void)simulateEvent:(NSObject *)arg0;
- (void)setCarousel:(ATVCarouselView *)arg0;
- (void)setLeftFade:(ATVFadeLayer *)arg0;
- (ATVFadeLayer *)leftFade;
- (void)setRightFade:(ATVFadeLayer *)arg0;
- (ATVFadeLayer *)rightFade;
- (void)setStationFollowersView:(BRTextControl *)arg0;
- (BRTextControl *)stationFollowersView;
- (void)setTrackInfoView:(ATVRadioNPTrackInfoView *)arg0;
- (ATVRadioNPTrackInfoView *)trackInfoView;
- (void)setOptionsList:(BRListView *)arg0;
- (BRListView *)optionsList;
- (BRScrollControl *)listScroller;
- (void)setMenuTextAttributes:(NSDictionary *)arg0;
- (void)setListScroller:(BRScrollControl *)arg0;
- (void)setPosterWidth:(float)arg0;
- (void)setPosterHeight:(float)arg0;
- (void)setSelectedPosterWidth:(float)arg0;
- (void)setSelectedPosterHeight:(float)arg0;
- (ATVDataQuery *)addStationQuery;
- (void)_updateViewForSelectedIndex;
- (float)posterHeight;
- (void)_updateTrackOptions;
- (void)_stopPreviewingOrPlaying;
- (float)posterWidth;
- (float)selectedPosterWidth;
- (void)setPositions:(NSArray *)arg0;
- (void)setDisplacement:(float)arg0;
- (void)setRangeOfFocusablePositions:(struct _NSRange)arg0;
- (NSArray *)positions;
- (struct _NSRange)rangeOfFocusablePositions;
- (float)selectedPosterHeight;
- (float)displacement;
- (NSArray *)trackOptions;
- (NSDictionary *)menuTextAttributes;
- (void)_previewOrPlayTrack:(NSObject *)arg0;
- (void)setAddStationQuery:(ATVDataQuery *)arg0;
- (char)_isOnCurrentTrack;
- (void)setTrackOptions:(NSArray *)arg0;
- (unsigned int)numberOfItemsForCarouselView:(ATVCarouselView *)arg0;
- (BRControl *)carouselView:(ATVCarouselView *)arg0 itemAtIndex:(unsigned int)arg1;
- (struct ATVCarouselViewItemsConfig)carouselView:(ATVCarouselView *)arg0 itemsConfigForContext:(SEL)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 configurePerspectiveForContext:(ATVCarouselViewUIOpContext *)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 setPositionOfItem:(BRControl *)arg1 toPositionAtIndex:(unsigned int)arg2 context:(ATVCarouselViewUIOpContext *)arg3;
- (void)dealloc;
- (ATVRadioNPHistoryView *)init;
- (unsigned int)selectedIndex;
- (void)setSelectedIndex:(unsigned int)arg0;
- (void)resetSelection;
- (void).cxx_destruct;
- (NSArray *)historyItems;
- (void)setHistoryItems:(NSArray *)arg0;
- (ATVCarouselView *)carousel;
- (void)setPlayer:(BRMediaPlayer *)arg0;
- (BRMediaPlayer *)player;

@end
