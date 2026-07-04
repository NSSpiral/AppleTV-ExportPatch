/* Runtime dump - RUIYTDocumentLoader
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface RUIYTDocumentLoader : NSObject
{
    NSMutableArray * _documentsBeingLoaded;
    <RUIYTDocumentLoaderDelegate> * _delegate;
}

@property (weak) <RUIYTDocumentLoaderDelegate> * delegate;

- (void)cancelAllDocuments;
- (void)loadDocument:(NSObject *)arg0;
- (void)_finalizeDocument:(NSObject *)arg0;
- (void)cancelDocument:(NSObject *)arg0;
- (void)dealloc;
- (void)setDelegate:(<RUIYTDocumentLoaderDelegate> *)arg0;
- (RUIYTDocumentLoader *)init;
- (<RUIYTDocumentLoaderDelegate> *)delegate;
- (void).cxx_destruct;

@end
