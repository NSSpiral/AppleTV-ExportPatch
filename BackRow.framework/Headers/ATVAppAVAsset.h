/* Runtime dump - ATVAppAVAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseMediaAsset.h>

@protocol BRMediaAssetDerivesMediaURL;

@class BRMediaType;
@interface ATVAppAVAsset : BRBaseMediaAsset <BRMediaAssetDerivesMediaURL>
{
    IKMediaElement * _avElement;
    IKTimelineElement * _scenesTimeline;
    NSString * _sceneTitle;
    NSString * _sceneSummary;
    NSString * _sceneDescription;
    NSString * _sceneImageURL;
    ATVMutableBookmark * _bookmark;
    NSString * _identifier;
}

@property (readonly, retain, nonatomic) IKMediaElement * avElement;
@property (readonly, nonatomic) NSString * imageURL;
@property (readonly, weak, nonatomic) IKTimelineElement * scenesTimeline;
@property (retain, nonatomic) NSString * sceneTitle;
@property (retain, nonatomic) NSString * sceneSummary;
@property (retain, nonatomic) NSString * sceneDescription;
@property (retain, nonatomic) NSString * sceneImageURL;
@property (retain, nonatomic) ATVMutableBookmark * bookmark;
@property (retain, nonatomic) NSString * identifier;

- (NSString *)assetID;
- (NSDictionary *)playbackMetadata;
- (NSString *)sceneSummary;
- (NSString *)mediaDescription;
- (char)hasCoverArt;
- (char)hasVideoContent;
- (void)setBookmarkTimeInMS:(unsigned int)arg0;
- (unsigned int)bookmarkTimeInMS;
- (id)_assetBookmark;
- (void)_updateBookmark;
- (void)resolveMediaURL:(id /* block */)arg0;
- (ATVAppAVAsset *)initWithAVElement:(NSObject *)arg0;
- (NSObject *)_assetElement;
- (NSObject *)_lockupElement;
- (NSString *)sceneTitle;
- (NSString *)sceneDescription;
- (NSString *)sceneImageURL;
- (IKMediaElement *)avElement;
- (IKTimelineElement *)scenesTimeline;
- (void)setSceneTitle:(NSString *)arg0;
- (void)setSceneSummary:(NSString *)arg0;
- (void)setSceneDescription:(NSString *)arg0;
- (void)setSceneImageURL:(NSString *)arg0;
- (void)setHasBeenPlayed:(char)arg0;
- (NSString *)identifier;
- (NSString *)title;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (id /* <BRImageProxy> */)imageProxy;
- (ATVMutableBookmark *)bookmark;
- (NSString *)sceneName;
- (NSString *)serviceID;
- (NSString *)imageURL;
- (BRMediaType *)mediaType;
- (NSString *)mediaURL;
- (void)setBookmark:(ATVMutableBookmark *)arg0;

@end
