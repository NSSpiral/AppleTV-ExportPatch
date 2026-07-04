/* Runtime dump - UIPDFDocument
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFDocument : NSObject
{
    struct CGPDFDocument * _cgDocument;
    unsigned int _numberOfPages;
    float _cachedWidth;
    NSString * _documentID;
    NSString * _documentName;
    UIPDFPageImageCache * _pageImageCache;
    unsigned int _imageCacheCount;
    unsigned int _imageCacheLookAhead;
    int _lock;
    int _imageCacheLock;
    UIPDFPageImageCache * _thumbnailCache;
    int _thumbnailLock;
    <NSObject><UIPDFDocumentDelegate> * _delegate;
}

@property (readonly) unsigned int numberOfPages;
@property (retain) UIPDFPageImageCache * pageImageCache;
@property (retain) UIPDFPageImageCache * thumbnailCache;
@property (readonly) struct CGPDFDocument * CGDocument;
@property (nonatomic) <NSObject><UIPDFDocumentDelegate> * delegate;
@property (readonly) NSString * documentID;

+ (UIPDFDocument *)documentNamed:(id)arg0;

- (void)dealloc;
- (void)setDelegate:(<NSObject><UIPDFDocumentDelegate> *)arg0;
- (<NSObject><UIPDFDocumentDelegate> *)delegate;
- (UIPDFDocument *)initWithURL:(NSString *)arg0;
- (unsigned int)numberOfPages;
- (NSObject *)pageAtIndex:(unsigned int)arg0;
- (UIPDFDocument *)initWithCGPDFDocument:(struct CGPDFDocument *)arg0;
- (struct CGPDFDocument *)CGDocument;
- (NSString *)documentID;
- (void)setImageCacheCount:(unsigned int)arg0 lookAhead:(unsigned int)arg1;
- (struct CGPDFDocument *)copyCGPDFDocument;
- (NSObject *)copyPageAtIndex:(unsigned int)arg0;
- (void)purgePagesBefore:(unsigned int)arg0;
- (char)allowsCopying;
- (char)copyDocumentTo:(id)arg0;
- (float)sumWidth;
- (float)sumHeight;
- (UIPDFPageImageCache *)pageImageCache;
- (void)setPageImageCache:(UIPDFPageImageCache *)arg0;
- (UIPDFPageImageCache *)thumbnailCache;
- (void)setThumbnailCache:(UIPDFPageImageCache *)arg0;
- (float)maxHeight;
- (float)maxWidth;

@end
