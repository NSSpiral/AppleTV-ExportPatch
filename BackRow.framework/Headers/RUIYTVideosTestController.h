/* Runtime dump - RUIYTVideosTestController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol RUIYTDocumentLoaderDelegate;
@protocol RUIYTVideoPlaybackAspectDelegate;

@class RUIYTDocument, RUIYTDocumentLoader, RUIYTVideoPlaybackAspect, RUIYTVideosDocumentSpec;
@interface RUIYTVideosTestController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTVideoPlaybackAspectDelegate>
{
    RUIYTDocumentLoader * _documentLoader;
    RUIYTVideosDocumentSpec * _spec;
    RUIYTVideoPlaybackAspect * _videoPlaybackAspect;
    <BRApplicationTestingDelegate> * _delegate;
    NSString * _test;
    NSDictionary * _testOptions;
}

@property (weak) <BRApplicationTestingDelegate> * delegate;
@property (readonly) NSString * test;
@property (readonly) NSDictionary * testOptions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)controllerWithSpec:(RUIYTVideosDocumentSpec *)arg0 test:(NSString *)arg1 options:(NSDictionary *)arg2;

- (void)wasPushed;
- (void)documentLoader:(RUIYTDocumentLoader *)arg0 didLoadDocument:(RUIYTDocument *)arg1;
- (RUIYTVideosTestController *)initWithSpec:(RUIYTVideosDocumentSpec *)arg0 test:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)_loadItem;
- (NSString *)test;
- (NSDictionary *)testOptions;
- (void)playbackWillEndForVideoPlaybackAspect:(RUIYTVideoPlaybackAspect *)arg0 error:(NSError *)arg1;
- (void)dealloc;
- (void)setDelegate:(<BRApplicationTestingDelegate> *)arg0;
- (<BRApplicationTestingDelegate> *)delegate;
- (NSString *)identifier;
- (void).cxx_destruct;

@end
