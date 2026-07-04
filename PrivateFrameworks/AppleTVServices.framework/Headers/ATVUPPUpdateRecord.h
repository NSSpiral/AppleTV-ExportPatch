/* Runtime dump - ATVUPPUpdateRecord
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVUPPUpdateRecord : NSObject
{
    ATVBookmarkKey * _bookmarkKey;
    ATVUniversalPlaybackPositionRecord * _uppRecord;
}

@property (retain, nonatomic) ATVBookmarkKey * bookmarkKey;
@property (retain, nonatomic) ATVUniversalPlaybackPositionRecord * uppRecord;

- (void).cxx_destruct;
- (ATVBookmarkKey *)bookmarkKey;
- (void)setBookmarkKey:(ATVBookmarkKey *)arg0;
- (ATVUniversalPlaybackPositionRecord *)uppRecord;
- (void)setUppRecord:(ATVUniversalPlaybackPositionRecord *)arg0;

@end
