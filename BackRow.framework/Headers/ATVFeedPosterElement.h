/* Runtime dump - ATVFeedPosterElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, ATVFeedOverlayElement, ATVFeedSnipeElement, ATVFeedSuperShowcasePosterAdornmentElement, BRMerchant;
@interface ATVFeedPosterElement : ATVFeedElement
{
    char _related;
    char _featured;
    char _adorned;
    char _alwaysShowTitles;
    char _onlyShowSubtitlesWhenFocused;
    char _onlyShowSnipeWhenFocused;
    char _topShelf;
    char _showOutline;
    char _showReflection;
    char _acceptsFocus;
    char _hideUberTitle;
    char _hideUberSubtitle;
    NSString * _title;
    NSString * _subtitle;
    NSString * _titleAlignment;
    NSString * _contentMode;
    ATVFeedImageElement * _image;
    ATVFeedImageElement * _defaultImage;
    int _ordinal;
    int _badgeCount;
    NSString * _url;
    NSString * _urlType;
    ATVFeedOverlayElement * _overlay;
    ATVFeedSuperShowcasePosterAdornmentElement * _adornment;
    ATVFeedSnipeElement * _snipe;
    ATVFeedImageElement * _uberImage;
    ATVFeedImageElement * _uberTitleImage;
    ATVFeedImageElement * _uberDecoratorImage;
}

@property (nonatomic) char related;
@property (nonatomic) char featured;
@property (nonatomic) char adorned;
@property (nonatomic) char alwaysShowTitles;
@property (nonatomic) char onlyShowSubtitlesWhenFocused;
@property (nonatomic) char onlyShowSnipeWhenFocused;
@property (nonatomic) char topShelf;
@property (nonatomic) char showOutline;
@property (nonatomic) char showReflection;
@property (nonatomic) char acceptsFocus;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * subtitle;
@property (copy, nonatomic) NSString * titleAlignment;
@property (copy, nonatomic) NSString * contentMode;
@property (retain, nonatomic) ATVFeedImageElement * image;
@property (retain, nonatomic) ATVFeedImageElement * defaultImage;
@property (nonatomic) int ordinal;
@property (nonatomic) int badgeCount;
@property (copy, nonatomic) NSString * url;
@property (copy, nonatomic) NSString * urlType;
@property (retain, nonatomic) ATVFeedOverlayElement * overlay;
@property (retain, nonatomic) ATVFeedSuperShowcasePosterAdornmentElement * adornment;
@property (retain, nonatomic) ATVFeedSnipeElement * snipe;
@property (retain, nonatomic) ATVFeedImageElement * uberImage;
@property (retain, nonatomic) ATVFeedImageElement * uberTitleImage;
@property (retain, nonatomic) ATVFeedImageElement * uberDecoratorImage;
@property (nonatomic) char hideUberTitle;
@property (nonatomic) char hideUberSubtitle;

- (char)acceptsFocus;
- (void)setAcceptsFocus:(char)arg0;
- (void)setDefaultImage:(ATVFeedImageElement *)arg0;
- (void)setAlwaysShowTitles:(char)arg0;
- (ATVFeedPosterElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (ATVFeedImageElement *)defaultImage;
- (char)alwaysShowTitles;
- (void)setOrdinal:(int)arg0;
- (void)setRelated:(char)arg0;
- (void)setAdorned:(char)arg0;
- (void)setOnlyShowSubtitlesWhenFocused:(char)arg0;
- (void)setOnlyShowSnipeWhenFocused:(char)arg0;
- (void)setTopShelf:(char)arg0;
- (void)setShowReflection:(char)arg0;
- (void)setHideUberTitle:(char)arg0;
- (void)setHideUberSubtitle:(char)arg0;
- (void)setUberImage:(ATVFeedImageElement *)arg0;
- (void)setUberTitleImage:(ATVFeedImageElement *)arg0;
- (void)setUberDecoratorImage:(ATVFeedImageElement *)arg0;
- (void)setAdornment:(ATVFeedSuperShowcasePosterAdornmentElement *)arg0;
- (void)setSnipe:(ATVFeedSnipeElement *)arg0;
- (char)related;
- (char)featured;
- (char)adorned;
- (char)onlyShowSubtitlesWhenFocused;
- (char)onlyShowSnipeWhenFocused;
- (char)topShelf;
- (char)showReflection;
- (ATVFeedSuperShowcasePosterAdornmentElement *)adornment;
- (ATVFeedSnipeElement *)snipe;
- (ATVFeedImageElement *)uberImage;
- (ATVFeedImageElement *)uberTitleImage;
- (ATVFeedImageElement *)uberDecoratorImage;
- (char)hideUberTitle;
- (char)hideUberSubtitle;
- (void)setImage:(ATVFeedImageElement *)arg0;
- (void)setTitle:(NSString *)arg0;
- (void)setContentMode:(NSString *)arg0;
- (NSString *)url;
- (NSString *)title;
- (ATVFeedImageElement *)image;
- (NSString *)contentMode;
- (void)setUrl:(NSString *)arg0;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setTitleAlignment:(NSString *)arg0;
- (NSString *)titleAlignment;
- (void)setBadgeCount:(int)arg0;
- (int)badgeCount;
- (int)ordinal;
- (void)setShowOutline:(char)arg0;
- (char)showOutline;
- (void)setFeatured:(char)arg0;
- (ATVFeedOverlayElement *)overlay;
- (void)setOverlay:(ATVFeedOverlayElement *)arg0;
- (NSString *)urlType;
- (void)setUrlType:(NSString *)arg0;

@end
