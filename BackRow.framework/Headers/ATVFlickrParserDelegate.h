/* Runtime dump - ATVFlickrParserDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseParserDelegate.h>
@interface ATVFlickrParserDelegate : BRBaseParserDelegate
{
    NSMutableDictionary * _errInfo;
    NSString * _userNSID;
    NSString * _userRealName;
    NSString * _userIconServer;
    NSString * _userIconFarm;
    NSMutableArray * _photoInfos;
    NSMutableArray * _photosetInfos;
    char _photosetInfoCreated;
    int _curPhotosetInfoIndex;
    NSMutableArray * _contactInfos;
    NSMutableDictionary * _photoSizeInfo;
    long _photoCount;
}

+ (<RUIParserDelegate> *)parserDelegate;

- (void)endTitle;
- (NSString *)userNSID;
- (NSMutableDictionary *)errInfo;
- (NSString *)userRealName;
- (NSString *)userIconServer;
- (NSString *)userIconFarm;
- (NSMutableArray *)photosetInfos;
- (NSMutableArray *)contactInfos;
- (NSString *)largeImagePath;
- (char)_originalImageSizeExceedsMaxSize;
- (void)startErrWithAttributes:(NSDictionary *)arg0;
- (void)startUserWithAttributes:(NSDictionary *)arg0;
- (void)startPersonWithAttributes:(NSDictionary *)arg0;
- (void)endRealname;
- (void)startPhotosWithAttributes:(NSDictionary *)arg0;
- (void)startPhotoWithAttributes:(NSDictionary *)arg0;
- (void)startSizeWithAttributes:(NSDictionary *)arg0;
- (void)startPhotosetWithAttributes:(NSDictionary *)arg0;
- (void)endPhotoset;
- (void)startContactWithAttributes:(NSDictionary *)arg0;
- (long)photoCount;
- (id)photosetInfosAlphabetically;
- (NSObject *)imagePathForSize:(struct CGSize)arg0 crop:(char)arg1;
- (void)dealloc;
- (NSMutableArray *)photoInfos;
- (void)endCount;

@end
