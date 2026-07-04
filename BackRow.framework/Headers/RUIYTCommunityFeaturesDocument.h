/* Runtime dump - RUIYTCommunityFeaturesDocument
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/RUIYTDocument.h>

@protocol RUIYTDocumentLoaderDelegate;

@class RUIYTDocument, RUIYTDocumentLoader, RUIYTMediaAsset;
@interface RUIYTCommunityFeaturesDocument : RUIYTDocument <RUIYTDocumentLoaderDelegate>
{
    RUIYTMediaAsset * _asset;
    YTAuthenticatedAccountPost * _request;
    RUIYTDocumentLoader * _documentLoader;
}

@property (retain, nonatomic) RUIYTMediaAsset * asset;
@property (readonly, nonatomic) YTVideo * video;
@property (retain, nonatomic) YTAuthenticatedAccountPost * request;
@property (retain, nonatomic) RUIYTDocumentLoader * documentLoader;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)documentLoader:(RUIYTDocumentLoader *)arg0 didLoadDocument:(RUIYTDocument *)arg1;
- (RUIYTDocumentLoader *)documentLoader;
- (void)setDocumentLoader:(RUIYTDocumentLoader *)arg0;
- (char)_shouldSilentlyIgnoreError:(NSError *)arg0 type:(int)arg1;
- (void)dealloc;
- (YTAuthenticatedAccountPost *)request;
- (RUIYTCommunityFeaturesDocument *)initWithAsset:(RUIYTMediaAsset *)arg0;
- (void).cxx_destruct;
- (RUIYTMediaAsset *)asset;
- (void)setAsset:(RUIYTMediaAsset *)arg0;
- (YTVideo *)video;
- (void)setRequest:(YTAuthenticatedAccountPost *)arg0;
- (void)YTAuthenticatedAccountPost:(YTAuthenticatedAccountPost *)arg0 didFinishWithType:(int)arg1 error:(NSError *)arg2;

@end
