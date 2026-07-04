/* Runtime dump - UIPDFPageRenderJob
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPageRenderJob : NSObject
{
    UIPDFPage * _page;
    unsigned int _pageIndex;
    struct CGSize _size;
    int _priority;
    UIImage * _image;
    UIPDFPageRenderOperation * _operation;
    id _target;
    SEL _callback;
    id _userData;
    char _sendPending;
    char _releaseWhenDone;
    int _lock;
}

@property (readonly, retain) UIImage * image;
@property UIPDFPageRenderOperation * operation;
@property (readonly) unsigned int pageIndex;
@property (readonly) int priority;
@property char releaseWhenDone;
@property (readonly) struct CGSize size;

- (void)cancel;
- (void)dealloc;
- (struct CGSize)size;
- (UIPDFPageRenderOperation *)operation;
- (void)setOperation:(UIPDFPageRenderOperation *)arg0;
- (UIImage *)image;
- (int)priority;
- (unsigned int)pageIndex;
- (char)hasPage;
- (UIPDFPageRenderJob *)initWithPage:(UIPDFPage *)arg0 maxSize:(struct CGSize)arg1 queuePriority:(int)arg2;
- (void)cancelOperation;
- (void)cancelOperationForTarget:(NSObject *)arg0;
- (void)setTarget:(NSObject *)arg0 callback:(SEL)arg1 userData:(void *)arg2;
- (void)releaseOperation;
- (void)renderImage;
- (void)sendImage;
- (void)sendImageTo:(id)arg0 callback:(SEL)arg1 userData:(void *)arg2;
- (char)releaseWhenDone;
- (void)setReleaseWhenDone:(char)arg0;

@end
