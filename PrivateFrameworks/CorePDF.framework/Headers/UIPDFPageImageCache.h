/* Runtime dump - UIPDFPageImageCache
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPageImageCache : NSObject
{
    UIPDFDocument * _document;
    unsigned int _lookAhead;
    unsigned int _jobCount;
    id * _jobsPrioritized;
    unsigned int _nextJobIndex;
    unsigned int _pageCount;
    id * _jobsByPage;
    NSOperationQueue * _renderQueue;
    int _lock;
}

@property (readonly) UIPDFDocument * document;
@property (readonly) unsigned int pageCount;
@property (readonly) unsigned int lookAhead;

- (void)dealloc;
- (unsigned int)pageCount;
- (void)didReceiveMemoryWarning:(id)arg0;
- (UIPDFDocument *)document;
- (UIPDFPageImageCache *)initWithDocument:(UIPDFDocument *)arg0;
- (void)clearCache;
- (UIPDFPageImageCache *)initWithDocument:(UIPDFDocument *)arg0 cacheCount:(unsigned int)arg1 lookAhead:(unsigned int)arg2;
- (id)getImageIfAvailableForPage:(unsigned int)arg0;
- (void)deliverImageOfPage:(unsigned int)arg0 maxSize:(struct CGSize)arg1 quality:(char *)arg2 receiver:(NSObject *)arg3 selector:(SEL)arg4 info:(NSDictionary *)arg5;
- (void)addRenderJob:(UIPDFPageRenderJob *)arg0;
- (void)cacheImageOfPage:(unsigned int)arg0 maxSize:(struct CGSize)arg1;
- (void)cancelPendingRenderOperations;
- (void)cancelPendingRenderOperationsForTarget:(NSObject *)arg0;
- (unsigned int)lookAhead;

@end
